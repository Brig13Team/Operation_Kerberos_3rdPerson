
class CfgPatches {
	class operation_kerberos_3rdperson_man {
        version = 1;
        versionStr = "1";
        versionAr[] = {1};
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgVehicles {
	/*extern*/ class Man;
	class CAManBase: Man {
		extCameraPosition[] = {0.40000, -0.300000, -0.400000};
	};
};

class CfgFunctions {
    class Operation_Kerberos_3rdPerson {
        class Man {
            class postInit {
                file = "y\operation_kerberos_3rdperson\addons\man\postInit.sqf";
                postInit = 1;
            };
        };
    };
};
