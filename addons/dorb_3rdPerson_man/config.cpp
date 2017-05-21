
class CfgPatches {
	class dorb_3rdPerson_Man {
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

class Extended_PostInit_EventHandlers {
    class dorb_3rdPerson_Man {
        init = "dorb_viewrestriction_forcefoot = false;";
    };
};
