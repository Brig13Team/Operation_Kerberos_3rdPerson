#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        version = 1;
        versionStr = "1";
        versionAr[] = {1};
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {
            "A3_Data_F",
            "A3_Armor_F_Beta",
            "A3_Data_F_ParticleEffects",
            "A3_Soft_F",
            "ace_interaction",
            "ace_cargo",
            "acre_sys_attenuate",
            "ace_refuel",
            "A3_Armor_F_Beta_APC_Tracked_01",
            "A3_Armor_F_Beta_APC_Tracked_02",
            "A3_Armor_F_Gamma_MBT_01",
            "A3_Armor_F_Gamma_MBT_02",
            "A3_Armor_F_EPB_APC_Tracked_03",
            "A3_Armor_F_EPB_MBT_03",
            "rhs_c_2s3",
            "rhs_c_bmd",
            "rhs_c_bmp3",
            "rhs_c_bmp",
            "rhs_c_pts",
            "rhs_c_sprut",
            "rhs_c_t72",
            "rhs_c_tanks",
            "RHS_US_A2Port_Armor",
            "rhsusf_c_m109",
            "rhsusf_c_m113",
            "rhsusf_c_m1a1",
            "rhsusf_c_m1a2",
            "rhs_c_a2port_armor",
            "rhs_cti_insurgents",
            "ace_cookoff",
            "A3_Soft_F_Exp_Offroad_02",
            "A3_Soft_F_Beta_Truck_01",
            "A3_Soft_F_Beta_Truck_02",
            "A3_Soft_F_Gamma_Truck_01",
            "A3_Soft_F_Gamma_Van_01",
            "A3_Soft_F_EPC_Truck_03",
            "rhs_c_a2port_car",
            "rhs_c_kamaz",
            "rhs_c_rva",
            "rhsusf_c_fmtv",
            "rhsusf_c_HEMTT_A4",
            "rhsusf_c_mtvr",
            "rhsusf_c_RG33L",
            "A3_Sounds_F",
            "A3_Armor_F_Beta_APC_Wheeled_01",
            "A3_Armor_F_Beta_APC_Wheeled_02",
            "A3_Armor_F_Gamma_APC_Wheeled_03",
            "rhs_c_btr",
            "ace_vehicles",
            "ace_realisticnames",
            "ace_repair",
            "A3_Soft_F_MRAP_01",
            "A3_Soft_F_MRAP_02",
            "A3_Soft_F_Offroad_01",
            "A3_Soft_F_Exp_Offroad_01",
            "A3_Soft_F_Quadbike_01",
            "A3_Soft_F_Beta_MRAP_03",
            "A3_Soft_F_Gamma_Truck_02",
            "A3_Soft_F_Gamma_Hatchback_01",
            "A3_Soft_F_Gamma_SUV_01",
            "ace_rearm",
            "A3_Soft_F_Bootcamp_Van_01",
            "rhs_c_cars",
            "ace_compat_rhs_afrf3",
            "A3_Armor_F_EPC_MBT_01",
            "A3_Drones_F_Soft_F_Gamma_UGV_01",
            "A3_Soft_F_Kart_Kart_01",
            "rhs_c_a2port_air",
            "A3_Soft_F_Exp_LSV_01",
            "A3_Sounds_F_Exp",
            "A3_Soft_F_Exp_LSV_02",
            "A3_Soft_F_Exp_MRAP_01",
            "A3_Soft_F_Exp_MRAP_02",
            "A3_Soft_F_Exp_Quadbike_01",
            "A3_Soft_F_Exp_Truck_01",
            "A3_Soft_F_Exp_Truck_03",
            "A3_Soft_F_Exp_UGV_01",
            "A3_Soft_F_Exp_Van_01",
            "rhs_c_trucks",
            "A3_Armor_F_Exp_APC_Tracked_01",
            "A3_Armor_F_Exp_APC_Tracked_02",
            "A3_Armor_F_Exp_APC_Wheeled_01",
            "A3_Armor_F_Exp_APC_Wheeled_02",
            "A3_Armor_F_Exp_MBT_01",
            "A3_Armor_F_Exp_MBT_02",
            "rhs_c_a3retex",
            "RHS_US_A2_AirImport",
            "ace_compat_rhs_usf3",
            "rhsusf_vehicles",
            "rhsusf_c_m1117",
            "rhsusf_c_mrzr",
            "rhsusf_c_rg33",
            "bwa3_eagle",
            "BWA3_Comp_ACE",
            "bwa3_leopard2a6m",
            "bwa3_puma"
        };
    };
};

#include "CfgEventHandlers.hpp"

class CfgVehicles {
    class LandVehicle;
    class Car : LandVehicle {
        extCameraPosition[] = {0.5,1.5,-4};
    };
    class Tank : LandVehicle {
        extCameraPosition[] = {0,1.125,-4};
    };
    class Car_F : Car {
        extCameraPosition[] = {0.5,1.5,-4};
    };
    class Wheeled_APC_F : Car_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class Tank_F : Tank {
        extCameraPosition[] = {0,1.125,-4};
    };
    class APC_Tracked_02_base_F : Tank_F {
        extCameraPosition[] = {0,1.6875,-4};
    };
    class MBT_01_base_F : Tank_F {
        extCameraPosition[] = {0,1.6875,-4};
    };
    class MBT_02_base_F : Tank_F {
        extCameraPosition[] = {0,1.6875,-4};
    };
    class Quadbike_01_base_F : Car_F {
        extCameraPosition[] = {0,1.125,-2.25};
    };
    class Truck_F : Car_F {
        extCameraPosition[] = {0,2,-4};
    };
    class Truck_01_base_F : Truck_F {
        extCameraPosition[] = {0,2,-4};
    };
    class APC_Tracked_03_base_F : Tank_F {
        extCameraPosition[] = {0,1.6875,-4};
    };
    class MBT_03_base_F : Tank_F {
        extCameraPosition[] = {0,1.6875,-4};
    };
    class Kart_01_Base_F : Car_F {
        extCameraPosition[] = {0,1.125,-2.25};
    };
    class LSV_01_base_F : Car_F {
        extCameraPosition[] = {0,1.125,-3.5};
    };
    class LSV_02_base_F : Car_F {
        extCameraPosition[] = {0,1.125,-3.5};
    };
    class Offroad_02_base_F : Car_F {
        extCameraPosition[] = {0,1.5,-3.5};
    };
    class rhs_2s3tank_base : Tank_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class rhs_bmp3tank_base : Tank_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class rhs_bmp1tank_base : Tank_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class rhs_pts_base : APC_Tracked_02_base_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class rhs_a3t72tank_base : Tank_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class MBT_01_arty_base_F : MBT_01_base_F {};
    class rhsusf_m109tank_base : MBT_01_arty_base_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class rhsusf_M1117_base : Wheeled_APC_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class rhsusf_m113tank_base : APC_Tracked_02_base_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class rhsusf_m1a1tank_base : MBT_01_base_F {
        extCameraPosition[] = {0,1.5,-4};
    };
    class MRAP_01_base_F : Car_F {
        extCameraPosition[] = {0,0.5625,-3.5};
    };
    class rhsusf_mrzr_base : MRAP_01_base_F {
        extCameraPosition[] = {0,0.5625,-3.5};
    };
    class BWA3_Leopard_base : Tank_F {
        extCameraPosition[] = {0,1.6875,-4};
    };
    class BWA3_Puma_base : Tank_F {
        extCameraPosition[] = {0,1.6875,-4};
    };
    class APC : Tank {};
    class Truck : Car {};
    class PaperCar : Car {};
    class Tracked_APC : Tank {};
    class Wheeled_APC : Car {};
    class Bus : Car {};
    class Tractor : Car {};
    class Van_01_base_F : Truck_F {};
    class APC_Tracked_01_base_F : Tank_F {};
    class B_APC_Tracked_01_base_F : APC_Tracked_01_base_F {};
    class B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_base_F {};
    class B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_base_F {};
    class B_APC_Tracked_01_AA_F : B_APC_Tracked_01_base_F {};
    class O_APC_Tracked_02_base_F : APC_Tracked_02_base_F {};
    class O_APC_Tracked_02_cannon_F : O_APC_Tracked_02_base_F {};
    class O_APC_Tracked_02_AA_F : O_APC_Tracked_02_base_F {};
    class B_MBT_01_base_F : MBT_01_base_F {};
    class B_MBT_01_cannon_F : B_MBT_01_base_F {};
    class B_MBT_01_arty_base_F : MBT_01_arty_base_F {};
    class B_MBT_01_arty_F : B_MBT_01_arty_base_F {};
    class MBT_01_mlrs_base_F : MBT_01_base_F {};
    class B_MBT_01_mlrs_base_F : MBT_01_mlrs_base_F {};
    class B_MBT_01_mlrs_F : B_MBT_01_mlrs_base_F {};
    class MBT_02_arty_base_F : MBT_02_base_F {};
    class O_MBT_02_base_F : MBT_02_base_F {};
    class O_MBT_02_cannon_F : O_MBT_02_base_F {};
    class O_MBT_02_arty_base_F : MBT_02_arty_base_F {};
    class O_MBT_02_arty_F : O_MBT_02_arty_base_F {};
    class MRAP_01_gmg_base_F : MRAP_01_base_F {};
    class MRAP_01_hmg_base_F : MRAP_01_gmg_base_F {};
    class B_MRAP_01_F : MRAP_01_base_F {};
    class B_MRAP_01_gmg_F : MRAP_01_gmg_base_F {};
    class B_MRAP_01_hmg_F : MRAP_01_hmg_base_F {};
    class MRAP_02_base_F : Car_F {};
    class MRAP_02_hmg_base_F : MRAP_02_base_F {};
    class MRAP_02_gmg_base_F : MRAP_02_hmg_base_F {};
    class O_MRAP_02_F : MRAP_02_base_F {};
    class O_MRAP_02_hmg_F : MRAP_02_hmg_base_F {};
    class O_MRAP_02_gmg_F : MRAP_02_gmg_base_F {};
    class Offroad_01_base_F : Car_F {};
    class Offroad_01_unarmed_base_F : Offroad_01_base_F {};
    class Offroad_01_civil_base_F : Offroad_01_unarmed_base_F {};
    class C_Offroad_01_F : Offroad_01_civil_base_F {};
    class Offroad_01_repair_base_F : Offroad_01_base_F {};
    class Offroad_01_repair_military_base_F : Offroad_01_repair_base_F {};
    class C_Offroad_01_repair_F : Offroad_01_repair_base_F {};
    class B_G_Offroad_01_repair_F : Offroad_01_repair_military_base_F {};
    class O_G_Offroad_01_repair_F : Offroad_01_repair_military_base_F {};
    class I_G_Offroad_01_repair_F : Offroad_01_repair_military_base_F {};
    class Offroad_01_military_base_F : Offroad_01_base_F {};
    class I_G_Offroad_01_F : Offroad_01_military_base_F {};
    class Offroad_01_armed_base_F : Offroad_01_military_base_F {};
    class I_G_Offroad_01_armed_F : Offroad_01_armed_base_F {};
    class B_G_Offroad_01_F : I_G_Offroad_01_F {};
    class O_G_Offroad_01_F : I_G_Offroad_01_F {};
    class B_G_Offroad_01_armed_F : I_G_Offroad_01_armed_F {};
    class O_G_Offroad_01_armed_F : I_G_Offroad_01_armed_F {};
    class C_Offroad_01_red_F : C_Offroad_01_F {};
    class C_Offroad_01_sand_F : C_Offroad_01_F {};
    class C_Offroad_01_white_F : C_Offroad_01_F {};
    class C_Offroad_01_blue_F : C_Offroad_01_F {};
    class C_Offroad_01_darkred_F : C_Offroad_01_F {};
    class C_Offroad_01_bluecustom_F : C_Offroad_01_F {};
    class C_Offroad_luxe_F : C_Offroad_01_F {};
    class C_Offroad_default_F : C_Offroad_01_F {};
    class C_Offroad_stripped_F : C_Offroad_01_F {};
    class C_Quadbike_01_F : Quadbike_01_base_F {};
    class B_Quadbike_01_F : Quadbike_01_base_F {};
    class O_Quadbike_01_F : Quadbike_01_base_F {};
    class I_Quadbike_01_F : Quadbike_01_base_F {};
    class I_G_Quadbike_01_F : Quadbike_01_base_F {};
    class B_G_Quadbike_01_F : I_G_Quadbike_01_F {};
    class O_G_Quadbike_01_F : I_G_Quadbike_01_F {};
    class C_Quadbike_01_black_F : C_Quadbike_01_F {};
    class C_Quadbike_01_blue_F : C_Quadbike_01_F {};
    class C_Quadbike_01_red_F : C_Quadbike_01_F {};
    class C_Quadbike_01_white_F : C_Quadbike_01_F {};
    class MRAP_03_base_F : Car_F {};
    class MRAP_03_hmg_base_F : MRAP_03_base_F {};
    class MRAP_03_gmg_base_F : MRAP_03_hmg_base_F {};
    class I_MRAP_03_F : MRAP_03_base_F {};
    class I_MRAP_03_hmg_F : MRAP_03_hmg_base_F {};
    class I_MRAP_03_gmg_F : MRAP_03_gmg_base_F {};
    class B_Truck_01_transport_F : Truck_01_base_F {};
    class B_Truck_01_covered_F : B_Truck_01_transport_F {};
    class Truck_02_base_F : Truck_F {};
    class Truck_02_transport_base_F : Truck_02_base_F {};
    class O_Truck_02_covered_F : Truck_02_base_F {};
    class O_Truck_02_transport_F : Truck_02_transport_base_F {};
    class I_Truck_02_covered_F : Truck_02_base_F {};
    class I_Truck_02_transport_F : Truck_02_transport_base_F {};
    class C_Truck_02_covered_F : Truck_02_base_F {};
    class C_Truck_02_transport_F : Truck_02_transport_base_F {};
    class Hatchback_01_base_F : Car_F {};
    class C_Hatchback_01_F : Hatchback_01_base_F {};
    class Hatchback_01_sport_base_F : Hatchback_01_base_F {};
    class C_Hatchback_01_sport_F : Hatchback_01_sport_base_F {};
    class C_Hatchback_01_grey_F : C_Hatchback_01_F {};
    class C_Hatchback_01_green_F : C_Hatchback_01_F {};
    class C_Hatchback_01_blue_F : C_Hatchback_01_F {};
    class C_Hatchback_01_bluecustom_F : C_Hatchback_01_F {};
    class C_Hatchback_01_beigecustom_F : C_Hatchback_01_F {};
    class C_Hatchback_01_yellow_F : C_Hatchback_01_F {};
    class C_Hatchback_01_white_F : C_Hatchback_01_F {};
    class C_Hatchback_01_black_F : C_Hatchback_01_F {};
    class C_Hatchback_01_dark_F : C_Hatchback_01_F {};
    class C_Hatchback_01_sport_red_F : C_Hatchback_01_sport_F {};
    class C_Hatchback_01_sport_blue_F : C_Hatchback_01_sport_F {};
    class C_Hatchback_01_sport_orange_F : C_Hatchback_01_sport_F {};
    class C_Hatchback_01_sport_white_F : C_Hatchback_01_sport_F {};
    class C_Hatchback_01_sport_grey_F : C_Hatchback_01_sport_F {};
    class C_Hatchback_01_sport_green_F : C_Hatchback_01_sport_F {};
    class SUV_01_base_F : Car_F {};
    class C_SUV_01_F : SUV_01_base_F {};
    class SUV_01_base_red_F : C_SUV_01_F {};
    class SUV_01_base_black_F : C_SUV_01_F {};
    class SUV_01_base_grey_F : C_SUV_01_F {};
    class SUV_01_base_orange_F : C_SUV_01_F {};
    class B_Truck_01_mover_F : B_Truck_01_transport_F {};
    class B_Truck_01_box_F : B_Truck_01_mover_F {};
    class B_Truck_01_Repair_F : B_Truck_01_mover_F {};
    class B_Truck_01_ammo_F : B_Truck_01_mover_F {};
    class B_Truck_01_fuel_F : B_Truck_01_mover_F {};
    class B_Truck_01_medical_F : B_Truck_01_transport_F {};
    class Truck_02_box_base_F : Truck_02_base_F {};
    class Truck_02_medical_base_F : Truck_02_box_base_F {};
    class Truck_02_Ammo_base_F : Truck_02_base_F {};
    class Truck_02_fuel_base_F : Truck_02_base_F {};
    class O_Truck_02_box_F : Truck_02_box_base_F {};
    class O_Truck_02_medical_F : Truck_02_medical_base_F {};
    class O_Truck_02_Ammo_F : Truck_02_Ammo_base_F {};
    class O_Truck_02_fuel_F : Truck_02_fuel_base_F {};
    class I_Truck_02_ammo_F : Truck_02_Ammo_base_F {};
    class I_Truck_02_box_F : Truck_02_box_base_F {};
    class I_Truck_02_medical_F : Truck_02_medical_base_F {};
    class I_Truck_02_fuel_F : Truck_02_fuel_base_F {};
    class C_Truck_02_fuel_F : Truck_02_fuel_base_F {};
    class C_Truck_02_box_F : Truck_02_box_base_F {};
    class Van_01_transport_base_F : Van_01_base_F {};
    class Van_01_box_base_F : Van_01_base_F {};
    class Van_01_fuel_base_F : Van_01_base_F {};
    class C_Van_01_transport_F : Van_01_transport_base_F {};
    class I_G_Van_01_transport_F : Van_01_transport_base_F {};
    class C_Van_01_box_F : Van_01_box_base_F {};
    class C_Van_01_fuel_F : Van_01_fuel_base_F {};
    class I_G_Van_01_fuel_F : Van_01_fuel_base_F {};
    class B_G_Van_01_transport_F : I_G_Van_01_transport_F {};
    class O_G_Van_01_transport_F : I_G_Van_01_transport_F {};
    class B_G_Van_01_fuel_F : I_G_Van_01_fuel_F {};
    class O_G_Van_01_fuel_F : I_G_Van_01_fuel_F {};
    class C_Van_01_transport_white_F : C_Van_01_transport_F {};
    class C_Van_01_transport_red_F : C_Van_01_transport_F {};
    class C_Van_01_box_white_F : C_Van_01_box_F {};
    class C_Van_01_box_red_F : C_Van_01_box_F {};
    class C_Van_01_fuel_white_F : C_Van_01_fuel_F {};
    class C_Van_01_fuel_red_F : C_Van_01_fuel_F {};
    class C_Van_01_fuel_white_v2_F : C_Van_01_fuel_F {};
    class C_Van_01_fuel_red_v2_F : C_Van_01_fuel_F {};
    class rhs_tigr_base : MRAP_02_base_F {};
    class rhs_tigr_vdv : rhs_tigr_base {};
    class rhs_tigr_vmf : rhs_tigr_vdv {};
    class rhs_tigr_msv : rhs_tigr_vdv {};
    class rhs_tigr_vv : rhs_tigr_vdv {};
    class rhs_tigr_3camo_vdv : rhs_tigr_base {};
    class rhs_tigr_3camo_vmf : rhs_tigr_3camo_vdv {};
    class rhs_tigr_3camo_msv : rhs_tigr_3camo_vdv {};
    class rhs_tigr_3camo_vv : rhs_tigr_3camo_vdv {};
    class rhs_tigr_ffv_vdv : rhs_tigr_vdv {};
    class rhs_tigr_ffv_vmf : rhs_tigr_ffv_vdv {};
    class rhs_tigr_ffv_msv : rhs_tigr_ffv_vdv {};
    class rhs_tigr_ffv_vv : rhs_tigr_ffv_vdv {};
    class rhs_tigr_ffv_3camo_vdv : rhs_tigr_ffv_vdv {};
    class rhs_tigr_ffv_3camo_vmf : rhs_tigr_ffv_3camo_vdv {};
    class rhs_tigr_ffv_3camo_msv : rhs_tigr_ffv_3camo_vdv {};
    class rhs_tigr_ffv_3camo_vv : rhs_tigr_ffv_3camo_vdv {};
    class rhs_tigr_sts_vdv : rhs_tigr_vdv {};
    class rhs_tigr_sts_vmf : rhs_tigr_sts_vdv {};
    class rhs_tigr_sts_msv : rhs_tigr_sts_vdv {};
    class rhs_tigr_sts_vv : rhs_tigr_sts_vdv {};
    class rhs_tigr_sts_3camo_vdv : rhs_tigr_sts_vdv {};
    class rhs_tigr_sts_3camo_vmf : rhs_tigr_sts_3camo_vdv {};
    class rhs_tigr_sts_3camo_msv : rhs_tigr_sts_3camo_vdv {};
    class rhs_tigr_sts_3camo_vv : rhs_tigr_sts_3camo_vdv {};
    class rhs_tigr_m_vdv : rhs_tigr_vdv {};
    class rhs_tigr_m_vmf : rhs_tigr_m_vdv {};
    class rhs_tigr_m_msv : rhs_tigr_m_vdv {};
    class rhs_tigr_m_vv : rhs_tigr_m_vdv {};
    class rhs_tigr_m_3camo_vdv : rhs_tigr_m_vdv {};
    class rhs_tigr_m_3camo_vmf : rhs_tigr_m_3camo_vdv {};
    class rhs_tigr_m_3camo_msv : rhs_tigr_m_3camo_vdv {};
    class rhs_tigr_m_3camo_vv : rhs_tigr_m_3camo_vdv {};
    class APC_Wheeled_01_base_F : Wheeled_APC_F {};
    class B_APC_Wheeled_01_base_F : APC_Wheeled_01_base_F {};
    class B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_base_F {};
    class APC_Wheeled_02_base_F : Wheeled_APC_F {};
    class O_APC_Wheeled_02_base_F : APC_Wheeled_02_base_F {};
    class O_APC_Wheeled_02_rcws_F : O_APC_Wheeled_02_base_F {};
    class I_APC_tracked_03_base_F : APC_Tracked_03_base_F {};
    class I_APC_tracked_03_cannon_F : I_APC_tracked_03_base_F {};
    class I_MBT_03_base_F : MBT_03_base_F {};
    class I_MBT_03_cannon_F : I_MBT_03_base_F {};
    class B_MBT_01_TUSK_F : B_MBT_01_cannon_F {};
    class APC_Wheeled_03_base_F : Wheeled_APC_F {};
    class I_APC_Wheeled_03_base_F : APC_Wheeled_03_base_F {};
    class I_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_base_F {};
    class UGV_01_base_F : Car_F {};
    class UGV_01_rcws_base_F : UGV_01_base_F {};
    class B_UGV_01_F : UGV_01_base_F {};
    class O_UGV_01_F : UGV_01_base_F {};
    class I_UGV_01_F : UGV_01_base_F {};
    class B_UGV_01_rcws_F : UGV_01_rcws_base_F {};
    class O_UGV_01_rcws_F : UGV_01_rcws_base_F {};
    class I_UGV_01_rcws_F : UGV_01_rcws_base_F {};
    class Truck_03_base_F : Truck_F {};
    class O_Truck_03_transport_F : Truck_03_base_F {};
    class O_Truck_03_covered_F : Truck_03_base_F {};
    class O_Truck_03_repair_F : Truck_03_base_F {};
    class O_Truck_03_ammo_F : Truck_03_base_F {};
    class O_Truck_03_fuel_F : Truck_03_base_F {};
    class O_Truck_03_medical_F : Truck_03_base_F {};
    class O_Truck_03_device_F : Truck_03_base_F {};
    class RHS_UAZ_Base : Offroad_01_base_F {};
    class rhs_uaz_open_Base : RHS_UAZ_Base {};
    class RHS_UAZ_DShKM_Base : RHS_UAZ_Base {};
    class RHS_UAZ_AGS30_Base : RHS_UAZ_DShKM_Base {};
    class RHS_UAZ_SPG9_Base : RHS_UAZ_DShKM_Base {};
    class RHS_UAZ_MSV_Base : RHS_UAZ_Base {};
    class rhs_uaz_open_MSV_Base : rhs_uaz_open_Base {};
    class RHS_UAZ_MSV_01 : RHS_UAZ_MSV_Base {};
    class rhs_uaz_vdv : RHS_UAZ_MSV_01 {};
    class rhs_uaz_vmf : RHS_UAZ_MSV_01 {};
    class rhs_uaz_vv : RHS_UAZ_MSV_01 {};
    class rhs_uaz_open_MSV_01 : rhs_uaz_open_MSV_Base {};
    class rhs_uaz_open_vdv : rhs_uaz_open_MSV_01 {};
    class rhs_uaz_open_vmf : rhs_uaz_open_MSV_01 {};
    class rhs_uaz_open_vv : rhs_uaz_open_MSV_01 {};
    class RHS_Ural_BaseTurret : Truck_F {};
    class RHS_Ural_Base : RHS_Ural_BaseTurret {};
    class RHS_Ural_MSV_Base : RHS_Ural_Base {};
    class RHS_Ural_MSV_01 : RHS_Ural_MSV_Base {};
    class RHS_Ural_VDV_01 : RHS_Ural_MSV_Base {};
    class RHS_Ural_VMF_01 : RHS_Ural_MSV_Base {};
    class RHS_Ural_VV_01 : RHS_Ural_MSV_Base {};
    class RHS_Ural_Flat_MSV_01 : RHS_Ural_MSV_Base {};
    class RHS_Ural_Flat_VDV_01 : RHS_Ural_Flat_MSV_01 {};
    class RHS_Ural_Flat_VMF_01 : RHS_Ural_Flat_MSV_01 {};
    class RHS_Ural_Flat_VV_01 : RHS_Ural_Flat_MSV_01 {};
    class RHS_Ural_Open_MSV_01 : RHS_Ural_MSV_Base {};
    class RHS_Ural_Open_VDV_01 : RHS_Ural_Open_MSV_01 {};
    class RHS_Ural_Open_VMF_01 : RHS_Ural_Open_MSV_01 {};
    class RHS_Ural_Open_VV_01 : RHS_Ural_Open_MSV_01 {};
    class RHS_Ural_Open_Flat_MSV_01 : RHS_Ural_Open_MSV_01 {};
    class RHS_Ural_Open_Flat_VDV_01 : RHS_Ural_Open_Flat_MSV_01 {};
    class RHS_Ural_Open_Flat_VMF_01 : RHS_Ural_Open_Flat_MSV_01 {};
    class RHS_Ural_Open_Flat_VV_01 : RHS_Ural_Open_Flat_MSV_01 {};
    class RHS_Ural_Support_MSV_Base_01 : RHS_Ural_MSV_Base {};
    class RHS_Ural_Fuel_MSV_01 : RHS_Ural_Support_MSV_Base_01 {};
    class RHS_Ural_Fuel_VDV_01 : RHS_Ural_Fuel_MSV_01 {};
    class RHS_Ural_Fuel_VMF_01 : RHS_Ural_Fuel_MSV_01 {};
    class RHS_Ural_Fuel_VV_01 : RHS_Ural_Fuel_MSV_01 {};
    class RHS_BM21_MSV_01 : RHS_Ural_BaseTurret {};
    class RHS_BM21_VDV_01 : RHS_BM21_MSV_01 {};
    class RHS_BM21_VMF_01 : RHS_BM21_MSV_01 {};
    class RHS_BM21_VV_01 : RHS_BM21_MSV_01 {};
    class RHS_Ural_Zu23_Base : RHS_Ural_BaseTurret {};
    class RHS_Ural_Zu23_MSV_01 : RHS_Ural_Zu23_Base {};
    class RHS_Ural_Zu23_VDV_01 : RHS_Ural_Zu23_Base {};
    class RHS_Ural_Zu23_VMF_01 : RHS_Ural_Zu23_Base {};
    class RHS_Ural_Zu23_VV_01 : RHS_Ural_Zu23_Base {};
    class RHS_Ural_Civ_Base : RHS_Ural_Base {};
    class RHS_Ural_Civ_01 : RHS_Ural_Civ_Base {};
    class RHS_Ural_Civ_02 : RHS_Ural_Civ_01 {};
    class RHS_Ural_Civ_03 : RHS_Ural_Civ_01 {};
    class RHS_Ural_Open_Civ_01 : RHS_Ural_Civ_Base {};
    class RHS_Ural_Open_Civ_02 : RHS_Ural_Open_Civ_01 {};
    class RHS_Ural_Open_Civ_03 : RHS_Ural_Open_Civ_01 {};
    class RHS_Civ_Truck_02_covered_F : Truck_02_base_F {};
    class RHS_Civ_Truck_02_transport_F : Truck_02_base_F {};
    class rhs_kamaz5350 : O_Truck_02_covered_F {};
    class rhs_kamaz5350_msv : rhs_kamaz5350 {};
    class rhs_kamaz5350_vdv : rhs_kamaz5350 {};
    class rhs_kamaz5350_vmf : rhs_kamaz5350 {};
    class rhs_kamaz5350_vv : rhs_kamaz5350 {};
    class rhs_kamaz5350_open : rhs_kamaz5350 {};
    class rhs_kamaz5350_open_msv : rhs_kamaz5350_open {};
    class rhs_kamaz5350_open_vdv : rhs_kamaz5350_open {};
    class rhs_kamaz5350_open_vmf : rhs_kamaz5350_open {};
    class rhs_kamaz5350_open_vv : rhs_kamaz5350_open {};
    class rhs_kamaz5350_flatbed : rhs_kamaz5350_open {};
    class rhs_kamaz5350_flatbed_msv : rhs_kamaz5350_flatbed {};
    class rhs_kamaz5350_flatbed_vdv : rhs_kamaz5350_flatbed {};
    class rhs_kamaz5350_flatbed_vmf : rhs_kamaz5350_flatbed {};
    class rhs_kamaz5350_flatbed_vv : rhs_kamaz5350_flatbed {};
    class rhs_kamaz5350_flatbed_cover : rhs_kamaz5350_flatbed {};
    class rhs_kamaz5350_flatbed_cover_msv : rhs_kamaz5350_flatbed_cover {};
    class rhs_kamaz5350_flatbed_cover_vdv : rhs_kamaz5350_flatbed_cover {};
    class rhs_kamaz5350_flatbed_cover_vmf : rhs_kamaz5350_flatbed_cover {};
    class rhs_kamaz5350_flatbed_cover_vv : rhs_kamaz5350_flatbed_cover {};
    class C_Kart_01_F_Base : Kart_01_Base_F {};
    class C_Kart_01_F : C_Kart_01_F_Base {};
    class C_Kart_01_Fuel_F : C_Kart_01_F_Base {};
    class C_Kart_01_Blu_F : C_Kart_01_F_Base {};
    class C_Kart_01_Red_F : C_Kart_01_F_Base {};
    class C_Kart_01_Vrana_F : C_Kart_01_F_Base {};
    class C_Kart_01_green_F : C_Kart_01_F_Base {};
    class C_Kart_01_orange_F : C_Kart_01_F_Base {};
    class C_Kart_01_white_F : C_Kart_01_F_Base {};
    class C_Kart_01_yellow_F : C_Kart_01_F_Base {};
    class C_Kart_01_black_F : C_Kart_01_F_Base {};
    class rhs_ka52_ejection_vest : Car_F {};
    class rhs_ka52_rps_rocket : rhs_ka52_ejection_vest {};
    class LSV_01_armed_base_F : LSV_01_base_F {};
    class LSV_01_unarmed_base_F : LSV_01_base_F {};
    class LSV_01_light_base_F : LSV_01_base_F {};
    class B_T_LSV_01_armed_F : LSV_01_armed_base_F {};
    class B_T_LSV_01_armed_CTRG_F : B_T_LSV_01_armed_F {};
    class B_T_LSV_01_unarmed_F : LSV_01_unarmed_base_F {};
    class B_T_LSV_01_unarmed_CTRG_F : B_T_LSV_01_unarmed_F {};
    class B_LSV_01_armed_F : LSV_01_armed_base_F {};
    class B_LSV_01_unarmed_F : LSV_01_unarmed_base_F {};
    class B_CTRG_LSV_01_light_F : LSV_01_light_base_F {};
    class B_LSV_01_armed_black_F : B_LSV_01_armed_F {};
    class B_LSV_01_armed_olive_F : B_LSV_01_armed_F {};
    class B_LSV_01_armed_sand_F : B_LSV_01_armed_F {};
    class B_LSV_01_unarmed_black_F : B_LSV_01_unarmed_F {};
    class B_LSV_01_unarmed_olive_F : B_LSV_01_unarmed_F {};
    class B_LSV_01_unarmed_sand_F : B_LSV_01_unarmed_F {};
    class B_T_LSV_01_armed_black_F : B_T_LSV_01_armed_F {};
    class B_T_LSV_01_armed_olive_F : B_T_LSV_01_armed_F {};
    class B_T_LSV_01_armed_sand_F : B_T_LSV_01_armed_F {};
    class B_T_LSV_01_unarmed_black_F : B_T_LSV_01_unarmed_F {};
    class B_T_LSV_01_unarmed_olive_F : B_T_LSV_01_unarmed_F {};
    class B_T_LSV_01_unarmed_sand_F : B_T_LSV_01_unarmed_F {};
    class LSV_02_armed_base_F : LSV_02_base_F {};
    class LSV_02_unarmed_base_F : LSV_02_base_F {};
    class O_T_LSV_02_armed_F : LSV_02_armed_base_F {};
    class O_T_LSV_02_armed_viper_F : O_T_LSV_02_armed_F {};
    class O_T_LSV_02_unarmed_F : LSV_02_unarmed_base_F {};
    class O_T_LSV_02_unarmed_viper_F : O_T_LSV_02_unarmed_F {};
    class O_LSV_02_armed_F : LSV_02_armed_base_F {};
    class O_LSV_02_armed_viper_F : O_LSV_02_armed_F {};
    class O_LSV_02_unarmed_F : LSV_02_unarmed_base_F {};
    class O_LSV_02_unarmed_viper_F : O_LSV_02_unarmed_F {};
    class O_T_LSV_02_armed_black_F : O_T_LSV_02_armed_F {};
    class O_T_LSV_02_armed_ghex_F : O_T_LSV_02_armed_F {};
    class O_T_LSV_02_armed_arid_F : O_T_LSV_02_armed_F {};
    class O_T_LSV_02_unarmed_black_F : O_T_LSV_02_unarmed_F {};
    class O_T_LSV_02_unarmed_ghex_F : O_T_LSV_02_unarmed_F {};
    class O_T_LSV_02_unarmed_arid_F : O_T_LSV_02_unarmed_F {};
    class O_LSV_02_armed_black_F : O_LSV_02_armed_F {};
    class O_LSV_02_armed_ghex_F : O_LSV_02_armed_F {};
    class O_LSV_02_armed_arid_F : O_LSV_02_armed_F {};
    class O_LSV_02_unarmed_black_F : O_LSV_02_unarmed_F {};
    class O_LSV_02_unarmed_ghex_F : O_LSV_02_unarmed_F {};
    class O_LSV_02_unarmed_arid_F : O_LSV_02_unarmed_F {};
    class B_T_MRAP_01_F : B_MRAP_01_F {};
    class B_T_MRAP_01_gmg_F : B_MRAP_01_gmg_F {};
    class B_T_MRAP_01_hmg_F : B_MRAP_01_hmg_F {};
    class O_T_MRAP_02_ghex_F : MRAP_02_base_F {};
    class O_T_MRAP_02_hmg_ghex_F : MRAP_02_hmg_base_F {};
    class O_T_MRAP_02_gmg_ghex_F : MRAP_02_gmg_base_F {};
    class B_GEN_Offroad_01_gen_F : Offroad_01_civil_base_F {};
    class Offroad_02_unarmed_base_F : Offroad_02_base_F {};
    class C_Offroad_02_unarmed_F : Offroad_02_unarmed_base_F {};
    class C_Offroad_02_unarmed_black_F : C_Offroad_02_unarmed_F {};
    class C_Offroad_02_unarmed_blue_F : C_Offroad_02_unarmed_F {};
    class C_Offroad_02_unarmed_green_F : C_Offroad_02_unarmed_F {};
    class C_Offroad_02_unarmed_orange_F : C_Offroad_02_unarmed_F {};
    class C_Offroad_02_unarmed_red_F : C_Offroad_02_unarmed_F {};
    class C_Offroad_02_unarmed_white_F : C_Offroad_02_unarmed_F {};
    class I_C_Offroad_02_unarmed_F : Offroad_02_unarmed_base_F {};
    class I_C_Offroad_02_unarmed_brown_F : I_C_Offroad_02_unarmed_F {};
    class I_C_Offroad_02_unarmed_olive_F : I_C_Offroad_02_unarmed_F {};
    class O_T_Quadbike_01_ghex_F : Quadbike_01_base_F {};
    class B_T_Quadbike_01_F : Quadbike_01_base_F {};
    class B_T_Truck_01_mover_F : B_Truck_01_mover_F {};
    class B_T_Truck_01_ammo_F : B_Truck_01_ammo_F {};
    class B_T_Truck_01_box_F : B_Truck_01_box_F {};
    class B_T_Truck_01_fuel_F : B_Truck_01_fuel_F {};
    class B_T_Truck_01_medical_F : B_Truck_01_medical_F {};
    class B_T_Truck_01_Repair_F : B_Truck_01_Repair_F {};
    class B_T_Truck_01_transport_F : B_Truck_01_transport_F {};
    class B_T_Truck_01_covered_F : B_Truck_01_covered_F {};
    class O_T_Truck_03_transport_ghex_F : O_Truck_03_transport_F {};
    class O_T_Truck_03_covered_ghex_F : O_Truck_03_covered_F {};
    class O_T_Truck_03_repair_ghex_F : O_Truck_03_repair_F {};
    class O_T_Truck_03_ammo_ghex_F : O_Truck_03_ammo_F {};
    class O_T_Truck_03_fuel_ghex_F : O_Truck_03_fuel_F {};
    class O_T_Truck_03_medical_ghex_F : O_Truck_03_medical_F {};
    class O_T_Truck_03_device_ghex_F : O_Truck_03_device_F {};
    class O_T_UGV_01_ghex_F : UGV_01_base_F {};
    class O_T_UGV_01_rcws_ghex_F : UGV_01_rcws_base_F {};
    class I_C_Van_01_transport_F : Van_01_transport_base_F {};
    class I_C_Van_01_transport_brown_F : I_C_Van_01_transport_F {};
    class I_C_Van_01_transport_olive_F : I_C_Van_01_transport_F {};
    class rhs_truck : Truck_F {};
    class rhs_gaz66_vmf : rhs_truck {};
    class rhs_gaz66_vdv : rhs_gaz66_vmf {};
    class rhs_gaz66_vv : rhs_gaz66_vmf {};
    class rhs_gaz66_msv : rhs_gaz66_vmf {};
    class rhs_gaz66_flat_vmf : rhs_gaz66_vmf {};
    class rhs_gaz66_flat_vdv : rhs_gaz66_flat_vmf {};
    class rhs_gaz66_flat_vv : rhs_gaz66_flat_vmf {};
    class rhs_gaz66_flat_msv : rhs_gaz66_flat_vmf {};
    class rhs_gaz66o_vmf : rhs_gaz66_vmf {};
    class rhs_gaz66o_vdv : rhs_gaz66o_vmf {};
    class rhs_gaz66o_vv : rhs_gaz66o_vmf {};
    class rhs_gaz66o_msv : rhs_gaz66o_vmf {};
    class rhs_gaz66o_flat_vmf : rhs_gaz66o_vmf {};
    class rhs_gaz66o_flat_vdv : rhs_gaz66o_flat_vmf {};
    class rhs_gaz66o_flat_vv : rhs_gaz66o_flat_vmf {};
    class rhs_gaz66o_flat_msv : rhs_gaz66o_flat_vmf {};
    class rhs_gaz66_r142_base : rhs_gaz66_vmf {};
    class rhs_gaz66_r142_vmf : rhs_gaz66_r142_base {};
    class rhs_gaz66_r142_vdv : rhs_gaz66_r142_base {};
    class rhs_gaz66_r142_msv : rhs_gaz66_r142_base {};
    class rhs_gaz66_r142_vv : rhs_gaz66_r142_base {};
    class rhs_gaz66_repair_base : rhs_gaz66_vmf {};
    class rhs_gaz66_repair_vmf : rhs_gaz66_repair_base {};
    class rhs_gaz66_repair_vdv : rhs_gaz66_repair_base {};
    class rhs_gaz66_repair_vv : rhs_gaz66_repair_base {};
    class rhs_gaz66_repair_msv : rhs_gaz66_repair_base {};
    class rhs_gaz66_ap2_base : rhs_gaz66_vmf {};
    class rhs_gaz66_ap2_vmf : rhs_gaz66_ap2_base {};
    class rhs_gaz66_ap2_vdv : rhs_gaz66_ap2_base {};
    class rhs_gaz66_ap2_vv : rhs_gaz66_ap2_base {};
    class rhs_gaz66_ap2_msv : rhs_gaz66_ap2_base {};
    class rhs_gaz66_ammo_base : rhs_gaz66_vmf {};
    class rhs_gaz66_ammo_vmf : rhs_gaz66_ammo_base {};
    class rhs_gaz66_ammo_vdv : rhs_gaz66_ammo_base {};
    class rhs_gaz66_ammo_vv : rhs_gaz66_ammo_base {};
    class rhs_gaz66_ammo_msv : rhs_gaz66_ammo_base {};
    class rhs_gaz66_zu23_base : rhs_gaz66_vmf {};
    class rhs_gaz66_zu23_vmf : rhs_gaz66_zu23_base {};
    class rhs_gaz66_zu23_vdv : rhs_gaz66_zu23_base {};
    class rhs_gaz66_zu23_vv : rhs_gaz66_zu23_base {};
    class rhs_gaz66_zu23_msv : rhs_gaz66_zu23_base {};
    class B_T_APC_Tracked_01_AA_F : B_APC_Tracked_01_AA_F {};
    class B_T_APC_Tracked_01_CRV_F : B_APC_Tracked_01_CRV_F {};
    class B_T_APC_Tracked_01_rcws_F : B_APC_Tracked_01_rcws_F {};
    class O_T_APC_Tracked_02_cannon_ghex_F : O_APC_Tracked_02_cannon_F {};
    class O_T_APC_Tracked_02_AA_ghex_F : O_APC_Tracked_02_AA_F {};
    class B_T_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_cannon_F {};
    class O_T_APC_Wheeled_02_rcws_ghex_F : O_APC_Wheeled_02_base_F {};
    class B_T_MBT_01_arty_F : B_MBT_01_arty_F {};
    class B_T_MBT_01_mlrs_F : B_MBT_01_mlrs_F {};
    class B_T_MBT_01_cannon_F : B_MBT_01_cannon_F {};
    class B_T_MBT_01_TUSK_F : B_MBT_01_TUSK_F {};
    class O_T_MBT_02_cannon_ghex_F : O_MBT_02_cannon_F {};
    class O_T_MBT_02_arty_ghex_F : O_MBT_02_arty_F {};
    class rhs_2s3_tv : rhs_2s3tank_base {};
    class rhs_typhoon_base : O_Truck_03_repair_F {};
    class rhs_typhoon_vdv : rhs_typhoon_base {};
    class rhs_bmd_base : Tank_F {};
    class rhs_bmd2_base : rhs_bmd_base {};
    class rhs_bmd1_base : rhs_bmd_base {};
    class rhs_bmd1 : rhs_bmd1_base {};
    class rhs_bmd1k : rhs_bmd1_base {};
    class rhs_bmd1p : rhs_bmd1_base {};
    class rhs_bmd1pk : rhs_bmd1_base {};
    class rhs_bmd1r : rhs_bmd1_base {};
    class rhs_bmd2 : rhs_bmd2_base {};
    class rhs_bmd2m : rhs_bmd2 {};
    class rhs_bmd2k : rhs_bmd2 {};
    class rhs_bmp3_msv : rhs_bmp3tank_base {};
    class rhs_bmp3_late_msv : rhs_bmp3tank_base {};
    class rhs_bmp3m_msv : rhs_bmp3tank_base {};
    class rhs_bmp3mera_msv : rhs_bmp3m_msv {};
    class rhs_bmp_base : rhs_bmp1tank_base {};
    class rhs_bmp1_vdv : rhs_bmp_base {};
    class rhs_bmp1_tv : rhs_bmp1_vdv {};
    class rhs_bmp1_msv : rhs_bmp1_vdv {};
    class rhs_bmp1_vmf : rhs_bmp1_vdv {};
    class rhs_bmp1_vv : rhs_bmp1_vdv {};
    class rhs_bmp1p_vdv : rhs_bmp1_vdv {};
    class rhs_bmp1p_tv : rhs_bmp1p_vdv {};
    class rhs_bmp1p_msv : rhs_bmp1p_vdv {};
    class rhs_bmp1p_vmf : rhs_bmp1p_vdv {};
    class rhs_bmp1p_vv : rhs_bmp1p_vdv {};
    class rhs_bmp1k_vdv : rhs_bmp1_vdv {};
    class rhs_bmp1k_tv : rhs_bmp1k_vdv {};
    class rhs_bmp1k_msv : rhs_bmp1k_vdv {};
    class rhs_bmp1k_vmf : rhs_bmp1k_vdv {};
    class rhs_bmp1k_vv : rhs_bmp1k_vdv {};
    class rhs_bmp1d_vdv : rhs_bmp1_vdv {};
    class rhs_bmp1d_tv : rhs_bmp1d_vdv {};
    class rhs_bmp1d_msv : rhs_bmp1d_vdv {};
    class rhs_bmp1d_vmf : rhs_bmp1d_vdv {};
    class rhs_bmp1d_vv : rhs_bmp1d_vdv {};
    class rhs_prp3_vdv : rhs_bmp1_vdv {};
    class rhs_prp3_tv : rhs_prp3_vdv {};
    class rhs_prp3_msv : rhs_prp3_vdv {};
    class rhs_prp3_vmf : rhs_prp3_vdv {};
    class rhs_prp3_vv : rhs_prp3_vdv {};
    class rhs_bmp2e_vdv : rhs_bmp1_vdv {};
    class rhs_bmp2e_tv : rhs_bmp2e_vdv {};
    class rhs_bmp2e_msv : rhs_bmp2e_vdv {};
    class rhs_bmp2e_vmf : rhs_bmp2e_vdv {};
    class rhs_bmp2e_vv : rhs_bmp2e_vdv {};
    class rhs_bmp2_vdv : rhs_bmp2e_vdv {};
    class rhs_bmp2_tv : rhs_bmp2_vdv {};
    class rhs_bmp2_msv : rhs_bmp2_vdv {};
    class rhs_bmp2_vmf : rhs_bmp2_vdv {};
    class rhs_bmp2_vv : rhs_bmp2_vdv {};
    class rhs_bmp2k_vdv : rhs_bmp2_vdv {};
    class rhs_bmp2k_tv : rhs_bmp2k_vdv {};
    class rhs_bmp2k_msv : rhs_bmp2k_vdv {};
    class rhs_bmp2k_vmf : rhs_bmp2k_vdv {};
    class rhs_bmp2k_vv : rhs_bmp2k_vdv {};
    class rhs_bmp2d_vdv : rhs_bmp2_vdv {};
    class rhs_bmp2d_tv : rhs_bmp2d_vdv {};
    class rhs_bmp2d_msv : rhs_bmp2d_vdv {};
    class rhs_bmp2d_vmf : rhs_bmp2d_vdv {};
    class rhs_bmp2d_vv : rhs_bmp2d_vdv {};
    class rhs_Ob_681_2 : rhs_bmp2e_msv {};
    class rhs_brm1k_base : rhs_bmp2e_vdv {};
    class rhs_brm1k_vdv : rhs_brm1k_base {};
    class rhs_brm1k_tv : rhs_brm1k_vdv {};
    class rhs_brm1k_msv : rhs_brm1k_vdv {};
    class rhs_brm1k_vmf : rhs_brm1k_vdv {};
    class rhs_brm1k_vv : rhs_brm1k_vdv {};
    class rhs_btr_base : Wheeled_APC_F {};
    class rhs_btr70_vmf : rhs_btr_base {};
    class rhs_btr70_vdv : rhs_btr70_vmf {};
    class rhs_btr70_vv : rhs_btr70_vmf {};
    class rhs_btr70_msv : rhs_btr70_vmf {};
    class rhs_btr80_msv : rhs_btr70_msv {};
    class rhs_btr80_vdv : rhs_btr80_msv {};
    class rhs_btr80_vv : rhs_btr80_msv {};
    class rhs_btr80_vmf : rhs_btr80_msv {};
    class rhs_btr80a_msv : rhs_btr80_msv {};
    class rhs_btr80a_vdv : rhs_btr80a_msv {};
    class rhs_btr80a_vv : rhs_btr80a_msv {};
    class rhs_btr80a_vmf : rhs_btr80a_msv {};
    class rhs_pts_vmf : rhs_pts_base {};
    class OTR21_Base : Truck_F {};
    class rhs_9k79 : OTR21_Base {};
    class rhs_9k79_K : rhs_9k79 {};
    class rhs_9k79_B : rhs_9k79 {};
    class rhs_a3spruttank_base : Tank_F {};
    class rhs_sprut_vdv : rhs_a3spruttank_base {};
    class rhs_bmd4_vdv : rhs_a3spruttank_base {};
    class rhs_bmd4m_vdv : rhs_bmd4_vdv {};
    class rhs_bmd4ma_vdv : rhs_bmd4m_vdv {};
    class rhs_t72ba_tv : rhs_a3t72tank_base {};
    class rhs_t72bb_tv : rhs_a3t72tank_base {};
    class rhs_t72bc_tv : rhs_a3t72tank_base {};
    class rhs_t72bd_tv : rhs_a3t72tank_base {};
    class rhs_t90_tv : rhs_t72bd_tv {};
    class rhs_t90a_tv : rhs_t90_tv {};
    class rhs_tank_base : Tank_F {};
    class rhs_t80b : rhs_tank_base {};
    class rhs_t80bk : rhs_t80b {};
    class rhs_t80bv : rhs_t80b {};
    class rhs_t80bvk : rhs_t80bv {};
    class rhs_t80 : rhs_t80b {};
    class rhs_t80a : rhs_t80bv {};
    class rhs_t80u : rhs_t80a {};
    class rhs_t80u_test : rhs_t80u {};
    class rhs_t80uk : rhs_t80u {};
    class rhs_t80u45m : rhs_t80u {};
    class rhs_t80ue1 : rhs_t80a {};
    class rhs_t80um : rhs_t80u {};
    class CruiseMissile2 : B_UGV_01_F {};
    class RHS_M2A2_Base : APC_Tracked_03_base_F {};
    class RHS_M2A2 : RHS_M2A2_Base {};
    class RHS_M2A2_BUSKI : RHS_M2A2 {};
    class RHS_M2A3 : RHS_M2A2 {};
    class RHS_M2A3_BUSKI : RHS_M2A3 {};
    class RHS_M2A3_BUSKIII : RHS_M2A3_BUSKI {};
    class RHS_M2A3_BUSKIII_wd : RHS_M2A3_BUSKIII {};
    class RHS_M6 : RHS_M2A2_Base {};
    class RHS_M2A2_wd : RHS_M2A2 {};
    class RHS_M2A2_BUSKI_WD : RHS_M2A2_BUSKI {};
    class RHS_M2A3_BUSKI_wd : RHS_M2A3_BUSKI {};
    class RHS_M2A3_wd : RHS_M2A3 {};
    class RHS_M6_wd : RHS_M6 {};
    class rhsusf_fmtv_base : Truck_01_base_F {};
    class rhsusf_M1078A1P2_B_wd_fmtv_usarmy : rhsusf_fmtv_base {};
    class rhsusf_M1078A1P2_B_wd_open_fmtv_usarmy : rhsusf_M1078A1P2_B_wd_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_wd_flatbed_fmtv_usarmy : rhsusf_M1078A1P2_B_wd_open_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_d_fmtv_usarmy : rhsusf_M1078A1P2_B_wd_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_d_open_fmtv_usarmy : rhsusf_M1078A1P2_B_d_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_d_flatbed_fmtv_usarmy : rhsusf_M1078A1P2_B_d_open_fmtv_usarmy {};
    class rhsusf_M1078A1P2_wd_fmtv_usarmy : rhsusf_M1078A1P2_B_wd_fmtv_usarmy {};
    class rhsusf_M1078A1P2_wd_open_fmtv_usarmy : rhsusf_M1078A1P2_wd_fmtv_usarmy {};
    class rhsusf_M1078A1P2_wd_flatbed_fmtv_usarmy : rhsusf_M1078A1P2_wd_open_fmtv_usarmy {};
    class rhsusf_M1078A1P2_d_fmtv_usarmy : rhsusf_M1078A1P2_wd_fmtv_usarmy {};
    class rhsusf_M1078A1P2_d_open_fmtv_usarmy : rhsusf_M1078A1P2_d_fmtv_usarmy {};
    class rhsusf_M1078A1P2_d_flatbed_fmtv_usarmy : rhsusf_M1078A1P2_d_open_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_wd_fmtv_usarmy : rhsusf_fmtv_base {};
    class rhsusf_M1083A1P2_B_wd_open_fmtv_usarmy : rhsusf_M1083A1P2_B_wd_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_wd_flatbed_fmtv_usarmy : rhsusf_M1083A1P2_B_wd_open_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_d_fmtv_usarmy : rhsusf_M1083A1P2_B_wd_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_d_open_fmtv_usarmy : rhsusf_M1083A1P2_B_d_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_d_flatbed_fmtv_usarmy : rhsusf_M1083A1P2_B_d_open_fmtv_usarmy {};
    class rhsusf_M1083A1P2_wd_fmtv_usarmy : rhsusf_M1083A1P2_B_wd_fmtv_usarmy {};
    class rhsusf_M1083A1P2_wd_open_fmtv_usarmy : rhsusf_M1083A1P2_wd_fmtv_usarmy {};
    class rhsusf_M1083A1P2_wd_flatbed_fmtv_usarmy : rhsusf_M1083A1P2_wd_open_fmtv_usarmy {};
    class rhsusf_M1083A1P2_d_fmtv_usarmy : rhsusf_M1083A1P2_wd_fmtv_usarmy {};
    class rhsusf_M1083A1P2_d_open_fmtv_usarmy : rhsusf_M1083A1P2_d_fmtv_usarmy {};
    class rhsusf_M1083A1P2_d_flatbed_fmtv_usarmy : rhsusf_M1083A1P2_d_open_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy : rhsusf_M1078A1P2_B_wd_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_M2_wd_open_fmtv_usarmy : rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_M2_wd_flatbed_fmtv_usarmy : rhsusf_M1078A1P2_B_M2_wd_open_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_M2_d_fmtv_usarmy : rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_M2_d_open_fmtv_usarmy : rhsusf_M1078A1P2_B_M2_d_fmtv_usarmy {};
    class rhsusf_M1078A1P2_B_M2_d_flatbed_fmtv_usarmy : rhsusf_M1078A1P2_B_M2_d_open_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy : rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_M2_wd_open_fmtv_usarmy : rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_M2_wd_flatbed_fmtv_usarmy : rhsusf_M1083A1P2_B_M2_wd_open_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_M2_d_fmtv_usarmy : rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_M2_d_open_fmtv_usarmy : rhsusf_M1083A1P2_B_M2_d_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_M2_d_flatbed_fmtv_usarmy : rhsusf_M1083A1P2_B_M2_d_open_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_M2_d_MHQ_fmtv_usarmy : rhsusf_M1083A1P2_B_d_open_fmtv_usarmy {};
    class rhsusf_M1083A1P2_B_M2_d_Medical_fmtv_usarmy : rhsusf_M1083A1P2_B_M2_d_MHQ_fmtv_usarmy {};
    class rhsusf_HEMTT_A4_base : Truck_01_base_F {};
    class rhsusf_M977A4_usarmy_wd : rhsusf_HEMTT_A4_base {};
    class rhsusf_M977A4_BKIT_usarmy_wd : rhsusf_M977A4_usarmy_wd {};
    class rhsusf_M977A4_BKIT_M2_usarmy_wd : rhsusf_M977A4_usarmy_wd {};
    class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd : rhsusf_M977A4_BKIT_M2_usarmy_wd {};
    class rhsusf_M977A4_AMMO_usarmy_wd : rhsusf_M977A4_usarmy_wd {};
    class rhsusf_M977A4_AMMO_BKIT_usarmy_wd : rhsusf_M977A4_BKIT_usarmy_wd {};
    class rhsusf_M977A4_REPAIR_usarmy_wd : rhsusf_M977A4_usarmy_wd {};
    class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd : rhsusf_M977A4_BKIT_usarmy_wd {};
    class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd : rhsusf_M977A4_BKIT_M2_usarmy_wd {};
    class rhsusf_M978A4_usarmy_wd : rhsusf_M977A4_usarmy_wd {};
    class rhsusf_M978A4_BKIT_usarmy_wd : rhsusf_M977A4_usarmy_wd {};
    class rhsusf_M977A4_usarmy_d : rhsusf_M977A4_usarmy_wd {};
    class rhsusf_M977A4_BKIT_usarmy_d : rhsusf_M977A4_BKIT_usarmy_wd {};
    class rhsusf_M977A4_BKIT_M2_usarmy_d : rhsusf_M977A4_BKIT_M2_usarmy_wd {};
    class rhsusf_M977A4_REPAIR_usarmy_d : rhsusf_M977A4_REPAIR_usarmy_wd {};
    class rhsusf_M977A4_REPAIR_BKIT_usarmy_d : rhsusf_M977A4_REPAIR_BKIT_usarmy_wd {};
    class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d : rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd {};
    class rhsusf_M977A4_AMMO_usarmy_d : rhsusf_M977A4_AMMO_usarmy_wd {};
    class rhsusf_M977A4_AMMO_BKIT_usarmy_d : rhsusf_M977A4_AMMO_BKIT_usarmy_wd {};
    class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d : rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd {};
    class rhsusf_M978A4_usarmy_d : rhsusf_M978A4_usarmy_wd {};
    class rhsusf_M978A4_BKIT_usarmy_d : rhsusf_M978A4_BKIT_usarmy_wd {};
    class rhsusf_hmmwe_base : MRAP_01_base_F {};
    class rhsusf_m998_w_2dr : rhsusf_hmmwe_base {};
    class rhsusf_m998_d_2dr : rhsusf_m998_w_2dr {};
    class rhsusf_m998_w_s_2dr : rhsusf_m998_w_2dr {};
    class rhsusf_m998_d_s_2dr : rhsusf_m998_w_s_2dr {};
    class rhsusf_m998_w_2dr_halftop : rhsusf_m998_w_2dr {};
    class rhsusf_m998_d_2dr_halftop : rhsusf_m998_w_2dr_halftop {};
    class rhsusf_m998_w_s_2dr_halftop : rhsusf_m998_w_2dr_halftop {};
    class rhsusf_m998_d_s_2dr_halftop : rhsusf_m998_w_s_2dr_halftop {};
    class rhsusf_m998_w_2dr_fulltop : rhsusf_m998_w_2dr_halftop {};
    class rhsusf_m998_d_2dr_fulltop : rhsusf_m998_w_2dr_fulltop {};
    class rhsusf_m998_w_s_2dr_fulltop : rhsusf_m998_w_2dr_fulltop {};
    class rhsusf_m998_d_s_2dr_fulltop : rhsusf_m998_w_s_2dr_fulltop {};
    class rhsusf_m998_w_4dr : rhsusf_m998_w_2dr {};
    class rhsusf_m998_d_4dr : rhsusf_m998_w_4dr {};
    class rhsusf_m998_w_s_4dr : rhsusf_m998_w_4dr {};
    class rhsusf_m998_d_s_4dr : rhsusf_m998_w_s_4dr {};
    class rhsusf_m998_w_4dr_halftop : rhsusf_m998_w_4dr {};
    class rhsusf_m998_d_4dr_halftop : rhsusf_m998_w_4dr_halftop {};
    class rhsusf_m998_w_s_4dr_halftop : rhsusf_m998_w_4dr_halftop {};
    class rhsusf_m998_d_s_4dr_halftop : rhsusf_m998_w_s_4dr_halftop {};
    class rhsusf_m998_w_4dr_fulltop : rhsusf_m998_w_4dr_halftop {};
    class rhsusf_m998_d_4dr_fulltop : rhsusf_m998_w_4dr_fulltop {};
    class rhsusf_m998_w_s_4dr_fulltop : rhsusf_m998_d_4dr_fulltop {};
    class rhsusf_m998_d_s_4dr_fulltop : rhsusf_m998_w_s_4dr_fulltop {};
    class rhsusf_m1025_w : rhsusf_m998_w_4dr_fulltop {};
    class rhsusf_m1025_d : rhsusf_m1025_w {};
    class rhsusf_m1025_w_s : rhsusf_m1025_w {};
    class rhsusf_m1025_d_s : rhsusf_m1025_w_s {};
    class rhsusf_m1025_w_m2 : rhsusf_m1025_w {};
    class rhsusf_m1025_d_m2 : rhsusf_m1025_w_m2 {};
    class rhsusf_m1025_w_s_m2 : rhsusf_m1025_w_m2 {};
    class rhsusf_m1025_d_s_m2 : rhsusf_m1025_w_s_m2 {};
    class rhsusf_m1025_w_mk19 : rhsusf_m1025_w_m2 {};
    class rhsusf_m1025_d_Mk19 : rhsusf_m1025_w_mk19 {};
    class rhsusf_m1025_w_s_Mk19 : rhsusf_m1025_w_mk19 {};
    class rhsusf_m1025_d_s_Mk19 : rhsusf_m1025_w_s_Mk19 {};
    class rhsusf_m109_usarmy : rhsusf_m109tank_base {};
    class rhsusf_m109d_usarmy : rhsusf_m109_usarmy {};
    class rhsusf_M1117_D : rhsusf_M1117_base {};
    class rhsusf_M1117_W : rhsusf_M1117_D {};
    class rhsusf_M1117_O : rhsusf_M1117_W {};
    class rhsusf_m113_usarmy : rhsusf_m113tank_base {};
    class rhsusf_m113_usarmy_supply : rhsusf_m113_usarmy {};
    class rhsusf_m113_usarmy_unarmed : rhsusf_m113tank_base {};
    class rhsusf_m113_usarmy_medical : rhsusf_m113_usarmy_unarmed {};
    class rhsusf_m113_usarmy_M240 : rhsusf_m113tank_base {};
    class rhsusf_m113_usarmy_MK19 : rhsusf_m113tank_base {};
    class rhsusf_m113d_usarmy : rhsusf_m113_usarmy {};
    class rhsusf_m113d_usarmy_supply : rhsusf_m113_usarmy_supply {};
    class rhsusf_m113d_usarmy_unarmed : rhsusf_m113_usarmy_unarmed {};
    class rhsusf_m113d_usarmy_medical : rhsusf_m113_usarmy_medical {};
    class rhsusf_m113d_usarmy_M240 : rhsusf_m113_usarmy_M240 {};
    class rhsusf_m113d_usarmy_MK19 : rhsusf_m113_usarmy_MK19 {};
    class rhsusf_m1a1aimwd_usarmy : rhsusf_m1a1tank_base {};
    class rhsusf_m1a1aimd_usarmy : rhsusf_m1a1tank_base {};
    class rhsusf_m1a1aim_tuski_wd : rhsusf_m1a1tank_base {};
    class rhsusf_m1a1aim_tuski_d : rhsusf_m1a1aim_tuski_wd {};
    class rhsusf_m1a1fep_d : rhsusf_m1a1tank_base {};
    class rhsusf_m1a1fep_wd : rhsusf_m1a1fep_d {};
    class rhsusf_m1a1fep_od : rhsusf_m1a1fep_wd {};
    class rhsusf_m1a1hc_wd : rhsusf_m1a1tank_base {};
    class rhsusf_m1a2tank_base : rhsusf_m1a1tank_base {};
    class rhsusf_m1a2sep1d_usarmy : rhsusf_m1a2tank_base {};
    class rhsusf_m1a2sep1wd_usarmy : rhsusf_m1a2tank_base {};
    class rhsusf_m1a2sep1tuskid_usarmy : rhsusf_m1a2tank_base {};
    class rhsusf_m1a2sep1tuskiwd_usarmy : rhsusf_m1a2sep1tuskid_usarmy {};
    class rhsusf_m1a2sep1tuskiiwd_usarmy : rhsusf_m1a2sep1tuskid_usarmy {};
    class rhsusf_m1a2sep1tuskiid_usarmy : rhsusf_m1a2sep1tuskiiwd_usarmy {};
    class rhsusf_mrzr4_d : rhsusf_mrzr_base {};
    class rhsusf_mrzr4_d_mud : rhsusf_mrzr4_d {};
    class rhsusf_mrzr4_w : rhsusf_mrzr4_d {};
    class rhsusf_mrzr4_w_mud : rhsusf_mrzr4_d_mud {};
    class rhsusf_mtvr_base : Truck_01_base_F {};
    class rhsusf_mtvr_mk23_wd : rhsusf_mtvr_base {};
    class rhsusf_rg33_base : MRAP_01_base_F {};
    class rhsusf_rg33_d : rhsusf_rg33_base {};
    class rhsusf_rg33_wd : rhsusf_rg33_base {};
    class rhsusf_rg33_m2_d : rhsusf_rg33_base {};
    class rhsusf_rg33_m2_wd : rhsusf_rg33_m2_d {};
    class rhsusf_rg33_usmc_d : rhsusf_rg33_d {};
    class rhsusf_rg33_usmc_wd : rhsusf_rg33_wd {};
    class rhsusf_rg33_m2_usmc_d : rhsusf_rg33_m2_d {};
    class rhsusf_rg33_m2_usmc_wd : rhsusf_rg33_m2_d {};
    class rhsusf_RG33L_base : Truck_01_base_F {};
    class rhsusf_M1232_usarmy_d : rhsusf_RG33L_base {};
    class rhsusf_RG33L_GPK_base : rhsusf_RG33L_base {};
    class rhsusf_M1232_M2_usarmy_d : rhsusf_RG33L_GPK_base {};
    class rhsusf_M1232_MK19_usarmy_d : rhsusf_M1232_M2_usarmy_d {};
    class rhsusf_M1237_M2_usarmy_d : rhsusf_RG33L_GPK_base {};
    class rhsusf_M1237_MK19_usarmy_d : rhsusf_M1232_M2_usarmy_d {};
    class rhsusf_M1232_usarmy_wd : rhsusf_M1232_usarmy_d {};
    class rhsusf_M1232_M2_usarmy_wd : rhsusf_M1232_M2_usarmy_d {};
    class rhsusf_M1232_MK19_usarmy_wd : rhsusf_M1232_MK19_usarmy_d {};
    class rhsusf_M1237_M2_usarmy_wd : rhsusf_M1237_M2_usarmy_d {};
    class rhsusf_M1237_MK19_usarmy_wd : rhsusf_M1237_MK19_usarmy_d {};
    class rhs_btr60_base : rhs_btr_base {};
    class rhs_btr60_vmf : rhs_btr60_base {};
    class rhs_btr60_vdv : rhs_btr60_vmf {};
    class rhs_btr60_vv : rhs_btr60_vmf {};
    class rhs_btr60_msv : rhs_btr60_vmf {};
    class rhs_zsutank_base : APC_Tracked_02_base_F {};
    class rhs_zsu234_aa : rhs_zsutank_base {};
    class RHS_UAZ_chdkz_Base : RHS_UAZ_Base {};
    class rhs_uaz_open_chdkz_Base : rhs_uaz_open_Base {};
    class RHS_UAZ_chdkz : RHS_UAZ_chdkz_Base {};
    class rhs_uaz_open_chdkz : rhs_uaz_open_chdkz_Base {};
    class rhs_uaz_dshkm_chdkz : RHS_UAZ_DShKM_Base {};
    class rhs_uaz_ags_chdkz : RHS_UAZ_AGS30_Base {};
    class rhs_uaz_spg9_chdkz : RHS_UAZ_SPG9_Base {};
    class rhs_ural_chdkz : RHS_Ural_Civ_Base {};
    class rhs_ural_open_chdkz : RHS_Ural_Civ_Base {};
    class rhs_ural_work_chdkz : RHS_Ural_Civ_Base {};
    class rhs_ural_work_open_chdkz : RHS_Ural_Civ_Base {};
    class RHS_BM21_chdkz : RHS_BM21_MSV_01 {};
    class rhs_zsu234_chdkz : rhs_zsu234_aa {};
    class rhs_bmp1_chdkz : rhs_bmp1_msv {};
    class rhs_bmp1p_chdkz : rhs_bmp1p_msv {};
    class rhs_bmp1d_chdkz : rhs_bmp1d_msv {};
    class rhs_bmp1k_chdkz : rhs_bmp1k_msv {};
    class rhs_bmp2_chdkz : rhs_bmp2_msv {};
    class rhs_bmp2e_chdkz : rhs_bmp2e_msv {};
    class rhs_bmp2k_chdkz : rhs_bmp2k_msv {};
    class rhs_bmp2d_chdkz : rhs_bmp2d_msv {};
    class rhs_bmd2_chdkz : rhs_bmd2 {};
    class rhs_bmd1_chdkz : rhs_bmd1 {};
    class rhs_btr70_chdkz : rhs_btr70_vmf {};
    class rhs_btr60_chdkz : rhs_btr60_vmf {};
    class rhs_t72bb_chdkz : rhs_t72bb_tv {};
    class C_Offroad_02_unarmed_F_black : C_Offroad_02_unarmed_F {};
    class C_Offroad_02_unarmed_F_blue : C_Offroad_02_unarmed_F {};
    class C_Offroad_02_unarmed_F_green : C_Offroad_02_unarmed_F {};
    class C_Offroad_02_unarmed_F_orange : C_Offroad_02_unarmed_F {};
    class BWA3_Eagle_base : Car_F {};
    class BWA3_Eagle_hatch_base : BWA3_Eagle_base {};
    class BWA3_Eagle_flw100_base : BWA3_Eagle_base {};
    class BWA3_Eagle_Fleck : BWA3_Eagle_hatch_base {};
    class BWA3_Eagle_FLW100_Fleck : BWA3_Eagle_flw100_base {};
    class BWA3_Eagle_Tropen : BWA3_Eagle_hatch_base {};
    class BWA3_Eagle_FLW100_Tropen : BWA3_Eagle_flw100_base {};
    class BWA3_Leopard2A6M_Fleck : BWA3_Leopard_base {};
    class BWA3_Leopard2A6M_Tropen : BWA3_Leopard_base {};
    class BWA3_Puma_Fleck : BWA3_Puma_base {};
    class BWA3_Puma_Tropen : BWA3_Puma_base {};
};
