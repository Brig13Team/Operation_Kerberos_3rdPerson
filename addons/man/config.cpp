#include "script_component.hpp"
class CfgPatches {
	class ADDON {
        version = 1;
        versionStr = "1";
        versionAr[] = {1};
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"kerb_main","A3_Characters_F"};
	};
};

#include "CfgEventHandlers.hpp"

class CfgVehicles {
	/*extern*/ class Man;
	class CAManBase: Man {
		extCameraPosition[] = {0.40000, -0.300000, -0.400000};
	};
};
