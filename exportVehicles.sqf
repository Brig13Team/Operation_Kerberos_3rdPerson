
private _Allvehicles = configProperties [configFile >> "CfgVehicles","(isClass _x)&&{(configName _x) isKindOf 'LandVehicle'}&&{!((configName _x) isKindOf 'StaticWeapon')}&&{!((configName _x) isKindOf 'Motorcycle')}",true];
_Allvehicles = _Allvehicles apply {configName _x};

private _parentVehicles = [];
private _requiredAddons = [];
{
    private _curVehicle = _x;
    private _cfg = configFile >> "CfgVehicles" >> _curVehicle;
    _requiredAddons append (configSourceAddonList _cfg);
    private _parents = [_cfg,true] call BIS_fnc_returnParents;
    _parents deleteAt 0;
    private _curVal = getArray(_cfg >> "extCameraPosition");
    private _parentVal = getArray(configFile >> "CfgVehicles" >> (_parents select 0) >> "extCameraPosition");
    If !(_curVal isEqualTo _parentVal) then {
        _parentVehicles pusHback _curVehicle;
    }else{
        reverse _parents;
        {

            _parentVal = getArray(configFile >> "CfgVehicles" >> _x >> "extCameraPosition");
            If (_curVal isEqualTo _parentVal) exitWith {
                _parentVehicles pushBackUnique _x;
            };
        } forEach _parents;
    };

} forEach _Allvehicles;

_parentVehicles = _parentVehicles - ["Land","All","AllVehicles"];

private _parents_sorted = [];
private _errorCounter = 50000;
while {(!(_parentVehicles isEqualTo []))&&(_errorCounter>0)} do {
    private _curVehicle = _parentVehicles deleteAt 0;
    private _parents = ([configFile >> "CfgVehicles" >> _curVehicle,true] call BIS_fnc_returnParents);
    if ((!(_parentVehicles isEqualTo []))&&{(_parents select 1) in _parentVehicles}) then {
        _parentVehicles pushBack _curVehicle;
    }else{
        _parents_sorted pushBackUnique _curVehicle;
    };
    _errorCounter = _errorCounter - 1;
};

_requiredAddons = _requiredAddons arrayIntersect _requiredAddons;


"ace_clipboard" callExtension format["class CfgPatches {%1",endl];
"ace_clipboard" callExtension format["    class operation_kerberos_3rdperson_vehicles {%1",endl];

"ace_clipboard" callExtension format["        units[] = {};%1",endl];
"ace_clipboard" callExtension format["        weapons[] = {};%1",endl];
"ace_clipboard" callExtension format["        requiredVersion = 0.100000;%1",endl];

"ace_clipboard" callExtension format["        requiredAddons[] = {%1",endl];
"ace_clipboard" callExtension format["            ""kerb_main"",%1",endl];
private _lastValue = _requiredAddons deleteAt (count _requiredAddons -1);
{
    "ace_clipboard" callExtension format["            ""%1"",%2",_x,endl];
} forEach _requiredAddons;
"ace_clipboard" callExtension format["            ""%1""%2",_lastValue,endl];
"ace_clipboard" callExtension format["        };%1",endl];
"ace_clipboard" callExtension format["    };%1",endl];
"ace_clipboard" callExtension format["};%1",endl];



"ace_clipboard" callExtension format["%1",endl];
"ace_clipboard" callExtension format["%1",endl];
"ace_clipboard" callExtension format["class CfgVehicles {%1",endl];


private _exportedClasses = ["LandVehicle"];
"ace_clipboard" callExtension format["    class LandVehicle;%1",endl];
{
    private _parent = ([configFile >> "CfgVehicles" >> _x,true] call BIS_fnc_returnParents) select 1;
    if !(_parent in _exportedClasses) then {
        private _temp = ([configFile >> "CfgVehicles" >> _x,true] call BIS_fnc_returnParents);
        _temp deleteAt 0;
        while {!(_temp isEqualTo [])} do {
            private _cur = _temp deleteAt 0;
            If (_cur in _exportedClasses) exitWith {};
            If (!(_cur in _parents_sorted)) then {
                "ace_clipboard" callExtension format ["    class %1 : %2 {};%3",_cur,_temp select 0,endl];
                _exportedClasses pushBack _cur;
            };
        };
    };
    "ace_clipboard" callExtension format ["    class %1 : %2 {%3",_x,_parent,endl];
    private _value = getArray(configFile >> "CfgVehicles" >> _x >> "extCameraPosition");
    _value = [
        _value select 0,
        If ((_value select 1)>0) then {
            ((((_value select 1)/4)*3) min 2)
        }else{
            ((((_value select 1)/4)*3) max -2)
        },
        If ((_value select 2)>0) then {
            (((_value select 2)/2) min 4)
        }else{
            (((_value select 2)/2) max -4)
        }
    ];
    "ace_clipboard" callExtension format ["        extCameraPosition[] = {%1,%2,%3};%4",_value select 0,_value select 1,_value select 2,endl];
    "ace_clipboard" callExtension format ["    };%1",endl];
    _exportedClasses pushBack _x;
} forEach _parents_sorted;

{
    private _temp = ([configFile >> "CfgVehicles" >> _x,true] call BIS_fnc_returnParents);
    while {!(_temp isEqualTo [])} do {
        private _cur = _temp deleteAt 0;
        If (_cur in _exportedClasses) exitWith {};
        "ace_clipboard" callExtension format ["    class %1 : %2 {};%3",_cur,_temp select 0,endl];
        _exportedClasses pushBack _cur;
    };
} forEach (_Allvehicles - ["Land","All","AllVehicles","LandVehicle"]);

"ace_clipboard" callExtension format["};%1",endl];
"ace_clipboard" callExtension "--COMPLETE--";
