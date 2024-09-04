#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {
            "ace_flashlights",
            "ace_trenches",
            "ace_explosives"
        };
        VERSION_CONFIG;
	};
};

#include "CfgEventHandlers.hpp"

class CfgWeapons
{
	class ACE_ItemCore;
	class ACE_EntrenchingTool;
	class ACE_Clacker;
	class ACE_Flashlight_XL50;
	class wdc_EntrenchingTool_m28: ACE_EntrenchingTool
	{
		author = "Letlev";
		displayName = "US M1928 Entrenching Tool";
		descriptionShort = "US Early WWII E-T17469515984ool";
		picture = "\x\wdc\addons\items_equipment\data\UI\m1928_etool_ui_ca.paa";
		model = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Army\SPE_US_Assault_Vest.p3d";
		hiddenSelections[] = {"camo","camo2","camo4","camo5","camo7"};
		hiddenSelectionsTextures[] = {"","","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\M1928_Haversack_co.paa","",""};
	};
	class wdc_EntrenchingTool_m43: wdc_EntrenchingTool_m28
	{
		displayName = "US M1943 Entrenching Tool";
		descriptionShort = "US Late WWII E-Tool";
		picture = "\x\wdc\addons\items_equipment\data\UI\m1943_etool_ui_ca.paa";
		model = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Army\SPE_US_Vest_Garand_M43.p3d";
		hiddenSelections[] = {"camo","camo2","camo5"};
		hiddenSelectionsTextures[] = {"","","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Sekop_43_co.paa"};
	};
	class ACE_M26_Clacker: ACE_Clacker
	{
		displayName = "US 10 Cap Blasting Machine";
		picture = "\x\wdc\addons\items_equipment\data\UI\blasting_machine_ui_ca.paa";
		model = "\x\wdc\addons\items_equipment\us_detonator.p3d";
		descriptionShort = "Standard US Handheld detonator";
	};
	class wdc_flastlight_tl22: ACE_Flashlight_XL50
	{
		author = "Letlev";
		displayName = "US TL-122 Flashlight";
		descriptionShort = "Standard US flashlight";
		model = "\WW2\SPE_Assets_m\Misc\Items_m\SPE_US_Flashlight_Ground.p3d";
		picture = "\WW2\SPE_Assets_t\Weapons\Equipment_U1_t\Weapons\Items\Gear_US_FL_TL122_X_ca.paa";
	};
	class ACE_CableTie : ACE_ItemCore 
	{
		displayName = "Binding Rope";
		descriptionShort = "Rope used to restrain prisoners.";
		picture = "\x\wdc\addons\items_equipment\ui\wdc_rope.paa";
	};
};
class ACE_Triggers
{
	class Command;
	class MK16_Transmitter: Command
	{
		displayName = "10 Cap Blasting Machine";
		picture = "\x\wdc\addons\items_equipment\data\UI\blasting_machine_ui_ca.paa";
	};
};
class CfgVehicles
{
	class ACE_RepairItem_Base;
	class ACE_Track: ACE_RepairItem_Base
	{
		model = "\a3\Props_F_Tank\Military\TankAcc\TankTracks_01_short_F.p3d";
	};
};