
class CfgPatches {
	class Dorb_firstPersonRestriction {
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
