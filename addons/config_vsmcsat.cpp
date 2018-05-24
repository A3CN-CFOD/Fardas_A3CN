class CfgPatches
{
	class VSM_CSAT_OD_Config
	{
		units[]=
		{
			"VSM_CSAT_OD_Mod"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class CfgVehicles
{
	class O_Soldier_F;
	class VSM_CSAT_MulticamTropic_Uniform: O_Soldier_F
	{
		author="VanSchmoozin";
		_generalMacro="O_Soldier_F";
		scope=2;
		displayName="[VSM] CSAT (Multicam Tropic)";
		faction="VSM_GP";
		uniformClass="VSM_CSAT_MulticamTropic_Camo";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\VSM_CSAT\Data\VSM_CSAT_MulticamTropic_1.paa",
			"\VSM_CSAT\Data\csat_gloves_green.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\VSM_CSAT\Data\clothing.rvmat",
			"\VSM_CSAT\Data\tech.rvmat"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class VSM_CSAT_AOR2_Uniform: O_Soldier_F
	{
		author="VanSchmoozin";
		_generalMacro="O_Soldier_F";
		scope=2;
		displayName="[VSM] CSAT (AOR2)";
		faction="VSM_GP";
		uniformClass="VSM_CSAT_AOR2_Camo";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\VSM_CSAT\Data\VSM_CSAT_AOR2_1.paa",
			"\VSM_CSAT\Data\csat_gloves_black.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\VSM_CSAT\Data\clothing.rvmat",
			"\VSM_CSAT\Data\tech.rvmat"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class VSM_CSAT_MulticamTropic_Camo: Uniform_Base
	{
		scope=2;
		displayName="[VSM] CSAT (MulticamTropic)";
		picture="\VSM_MulticamTropic\Data\Icons\VSM_MulticamTropic.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="VSM_CSAT_MulticamTropic_Uniform";
			containerClass="Supply50";
			mass=50;
		};
	};
	class VSM_CSAT_AOR2_Camo: Uniform_Base
	{
		scope=2;
		displayName="[VSM] CSAT (AOR2)";
		picture="\VSM_OGA\Data\Icons\VSM_OGA_OD.paa";
		class ItemInfo: UniformItem
		{
			uniformClass="VSM_CSAT_AOR2_Uniform";
			containerClass="Supply50";
			mass=50;
		};
	};
};
class cfgMods
{
	author="76561198040446180";
	timepacked="1471398436";
};
