class CfgPatches
{
	class VSM_Vests_Config
	{
		units[]=
		{
			"VSM_Vests_Mod"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class VSM_RAV: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] RAV (Green)";
		picture="\VSM_Vests\Spectergear_RAV\data\vest_icon.paa";
		model="\VSM_Vests\Spectergear_RAV\RAV.p3d";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_RAV\data\spec_rav_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_RAV\RAV.p3d";
			containerClass="Supply100";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class VSM_RAV_BLK: VSM_RAV
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] RAV (Black)";
		picture="\VSM_Vests\Spectergear_RAV\data\vest_icon_blk.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_RAV\data\spec_rav_blk_co.paa"
		};
	};
	class VSM_MBSS_Green: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS (Green)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_icon.paa";
		model="\VSM_Vests\Spectergear_MBSS\MBSS.p3d";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_MBSS\MBSS.p3d";
			containerClass="Supply70";
			mass=20;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.40000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.40000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.40000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.40000001;
				};
			};
		};
	};
	class VSM_MBSS_BLK: VSM_MBSS_Green
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS (Black)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_icon_blk.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_blk_co.paa"
		};
	};
	class VSM_MBSS_TAN: VSM_MBSS_Green
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS (Tan)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_icon_tan.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_tan_co.paa"
		};
	};
	class VSM_MBSS_CB: VSM_MBSS_Green
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS (CB)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_icon_cb.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_cb_co.paa"
		};
	};
	class VSM_MBSS_WTF: VSM_MBSS_Green
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS (WTF???)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_icon_wtf.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_wtf_co.paa"
		};
	};
	class VSM_MBSS_PACA: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS + PACA (Green)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon.paa";
		model="\VSM_Vests\Spectergear_MBSS\MBSS_PACA.p3d";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_co.paa",
			"\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_MBSS\MBSS_PACA.p3d";
			containerClass="Supply70";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class VSM_MBSS_PACA_BLK: VSM_MBSS_PACA
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS + PACA (Black)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon_blk.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_blk_co.paa",
			"\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"
		};
	};
	class VSM_MBSS_PACA_TAN: VSM_MBSS_PACA
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS + PACA (Tan)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon_tan.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_tan_co.paa",
			"\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"
		};
	};
	class VSM_MBSS_PACA_CB: VSM_MBSS_PACA
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS + PACA (CB)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon_cb.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_cb_co.paa",
			"\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"
		};
	};
	class VSM_MBSS_PACA_WTF: VSM_MBSS_PACA
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MBSS + PACA (WTF???)";
		picture="\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon_wtf.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_wtf_co.paa",
			"\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"
		};
	};
	class VSM_LBT1961_Black: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] LBT 1961 (BLK+BLK)";
		picture="\VSM_Vests\Spectergear_LBT\data\icon_blk_blk.paa";
		model="\VSM_Vests\Spectergear_LBT\carrier_rig.p3d";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_LBT\data\carrier_black_co.paa",
			"\VSM_Vests\Spectergear_LBT\data\chestrig_black_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\carrier_rig.p3d";
			containerClass="Supply70";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"insignia"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class VSM_CarrierRig_Operator_multicamTropic: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] MulticamTropic LBT Armatus";
		picture="\VSM_MulticamTropic\Data\Icons\VSM_MulticamTropic.paa";
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\VSM_MulticamTropic\Data\VSM_MulticamTropic_plate.paa",
			"\VSM_MulticamTropic\Data\VSM_MulticamTropic_chestrig.paa",
			"\VSM_Vests\BattleBelt\Textures\VSM_BattleBelt_MulticamTropic.paa",
			"\VSM_Vests\Spectergear_RAV\data\serpa.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d";
			containerClass="Supply170";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"insignia"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class VSM_LBT1961_CB: VSM_LBT1961_Black
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] LBT 1961 (CB+CB)";
		picture="\VSM_Vests\Spectergear_LBT\data\icon_cb_cb.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_LBT\data\carrier_coyote_co.paa",
			"\VSM_Vests\Spectergear_LBT\data\chestrig_coyote_co.paa"
		};
	};
	class VSM_LBT1961_GRN: VSM_LBT1961_Black
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] LBT 1961 (GRN+GRN)";
		picture="\VSM_Vests\Spectergear_LBT\data\icon_grn_grn.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_Vests\Spectergear_LBT\data\carrier_green_co.paa",
			"\VSM_Vests\Spectergear_LBT\data\chestrig_green_co.paa"
		};
	};
	class VSM_CarrierRig_Operator_ProjectHonor: VSM_CarrierRig_Operator_multicamTropic
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] ProjectHonor LBT  Armatus";
		picture="\VSM_ProjectHonor\Data\Icons\VSM_ProjectHonor.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_ProjectHonor\Data\VSM_ProjectHonor_plate.paa",
			"\VSM_ProjectHonor\Data\VSM_ProjectHonor_chestrig.paa",
			"\VSM_Vests\BattleBelt\Textures\VSM_BattleBelt_ProjectHonor.paa",
			"\VSM_Vests\Spectergear_RAV\data\serpa_tan.paa"
		};
	};
	class VSM_CarrierRig_Operator_OGA: VSM_CarrierRig_Operator_multicamTropic
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] OGA LBT  Armatus";
		picture="\VSM_OGA\Data\Icons\VSM_OGA.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_OGA\Data\VSM_OGA_plate.paa",
			"\VSM_oga\Data\VSM_OGA_chestrig.paa",
			"\VSM_Vests\BattleBelt\Textures\VSM_BattleBelt_oga.paa",
			"\VSM_Vests\Spectergear_RAV\data\serpa_tan.paa"
		};
	};
	class VSM_CarrierRig_Operator_OGA_OD: VSM_CarrierRig_Operator_multicamTropic
	{
		scope=2;
		author="VanSchmoozin - Specter";
		displayName="[VSM] OGA OD LBT  Armatus";
		picture="\VSM_OGA\Data\Icons\VSM_OGA_OD.paa";
		hiddenSelectionsTextures[]=
		{
			"\VSM_OGA\Data\VSM_OGA_OD_plate.paa",
			"\VSM_oga\Data\VSM_OGA_OD_chestrig.paa",
			"\VSM_Vests\BattleBelt\Textures\VSM_BattleBelt_oga_OD.paa",
			"\VSM_Vests\Spectergear_RAV\data\serpa.paa"
		};
	};
};
class cfgMods
{
	author="76561198040446180";
	timepacked="1471398368";
};
