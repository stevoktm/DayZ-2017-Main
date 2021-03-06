// config.bin - 10:13:30 11/08/12, generated in 0.16 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

class CfgPatches {
	class ice_apo_resistance_patch {
		units[] = {"epic_beard_man", "dimitry", "Czech_Norris", "alexej", "Stained_Stanislav", "Scabby_Silvestr", "Moldy_Marek"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData", "CACharacters", "CAWeapons", "CASounds"};
	};
};

class CfgVehicleClasses {
	class ice_apo_class_com {
		displayName = "Units";
	};
};

class CfgFactionClasses {
	class ice_apo_faction_com {
		displayName = "Post APC - Commoners";
		priority = 55;
		side = TGuerrila;
	};
};

class CfgHeads {
	class DefaultHead;	// External class reference
	
	class ice_apo_resistance_head1 : DefaultHead {
		model = "\ca\characters\Heads\male\DefaultHead\DefaultHead";
		
		class Wounds {
			tex[] = {};
			mat[] = {"ca\Characters\Heads\Male\DefaultHead\data\hhl_white.rvmat", "ca\Characters\Heads\Male\DefaultHead\data\hhl_white_wounds.rvmat", "ca\Characters\Heads\Male\DefaultHead\data\hhl_white_wounds2.rvmat"};
		};
	};
};
class Man;	// External class reference
class Custom;	// External class reference
class Default;	// External class reference

class CfgFaces {
	class Default;	// External class reference
	
	class Man : Default {
		class Default;	// External class reference
		
		class ice_apo_hutface1 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_107_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface2 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_101_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface3 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_89_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface4 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_88_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface5 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_85_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface6 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_75_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface7 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_74_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface8 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_73_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
		};
		
		class ice_apo_hutface9 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_70_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
		};
		
		class ice_apo_hutface10 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_62_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
		};
		
		class ice_apo_hutface11 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_23_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface12 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_21_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface13 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_19_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface14 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_14_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
		
		class ice_apo_hutface15 : Default {
			name = "Hut 1";
			texture = "\ca\characters\hhl\hhl_08_CO.paa";
			identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
			head = "DefaultHead";
			disabled = 0;
		};
	};
};

class CfgIdentities {
	class ice_apo_ID_1 {
		name = "Hut";
		face = "Man";
		speaker = "Male01EN";
		pitch = 1;
		glasses = "none";
	};
	
	class ice_apo_ID_2 {
		name = "Hut";
		face = "Man";
		speaker = "Male02EN";
		pitch = 1;
		glasses = "none";
	};
	
	class ice_apo_ID_3 {
		name = "Hut";
		face = "Man";
		speaker = "Male03EN";
		pitch = 1;
		glasses = "none";
	};
	
	class ice_apo_ID_4 {
		name = "Hut";
		face = "Man";
		speaker = "Male04EN";
		pitch = 1;
		glasses = "none";
	};
};

class CfgVehicles {
	class All;	// External class reference
	class AllVehicles;	// External class reference
	class ThingEffect;	// External class reference
	class Land;	// External class reference
	class Man;	// External class reference
	class CAManBase;	// External class reference
	class USMC_Soldier2;	// External class reference
	class RU_Soldier_Base;	// External class reference
	class USBasicBag;	// External class reference
	
	class ice_apo_pack1 : USBasicBag {
		scope = public;
		displayName = "College Pack";
		model = "\ice_apo_resistance\Backpack1.p3d";
		picture = "\ice_apo_resistance\icons\backpack1_ca.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		transportMaxWeapons = 3;
		transportMaxMagazines = 16;
	};
	
	class ice_apo_pack2 : USBasicBag {
		scope = public;
		displayName = "King Hobo Pack";
		model = "\ice_apo_resistance\Backpack2.p3d";
		picture = "\ice_apo_resistance\icons\backpack2_ca.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		transportMaxWeapons = 6;
		transportMaxMagazines = 24;
	};
	
	class ice_apo_pack3 : USBasicBag {
		scope = public;
		displayName = "Tweakers Pack";
		model = "\ice_apo_resistance\Backpack3.p3d";
		picture = "\ice_apo_resistance\icons\backpack3_ca.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		transportMaxWeapons = 1;
		transportMaxMagazines = 8;
	};
	
	class ice_apo_pack4 : USBasicBag {
		scope = public;
		displayName = "Tinkers Pack";
		model = "\ice_apo_resistance\Backpack4.p3d";
		picture = "\ice_apo_resistance\icons\backpack4_ca.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		transportMaxWeapons = 4;
		transportMaxMagazines = 20;
	};
	
	class epic_beard_man : USMC_Soldier2 {
		identityTypes[] = {"ice_apo_ID_1", "ice_apo_ID_2", "ice_apo_ID_3", "ice_apo_ID_4"};
		scope = public;
		displayName = "Epic Beard Man";
		model = "\ice_apo_resistance\soldier_hood_medium_beard.p3d";
		weapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		vehicleClass = "ice_apo_class_com";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		side = TGuerrila;
		faction = "ice_apo_faction_com";
		backpack = "ice_apo_pack1";
		canCarryBackPack = 1;
		
		class Wounds {
			tex[] = {};
			mat[] = {"ice_apo_resistance\data\us_soldier_sabot_body.rvmat", "ice_apo_resistance\data\us_soldier_sabot_body_wound1.rvmat", "ice_apo_resistance\data\us_soldier_sabot_body_wound2.rvmat", "ice_apo_resistance\data\civil_tshirt_body.rvmat", "ice_apo_resistance\data\civil_tshirt_body_wound1.rvmat", "ice_apo_resistance\data\civil_tshirt_body_wound2.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_white.rvmat", "CA\characters\Heads\Male\DefaultHead\data\hhl_white_wounds.rvmat", "CA\characters\Heads\Male\DefaultHead\data\hhl_white_wounds2.rvmat"};
		};
	};
	
	class dimitry : epic_beard_man {
		scope = public;
		displayName = "Dimitry";
		model = "\ice_apo_resistance\soldier_helmet_medium.p3d";
		weapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		backpack = "ice_apo_pack4";
	};
	
	class Czech_Norris : epic_beard_man {
		scope = public;
		displayName = "Czech Norris";
		model = "\ice_apo_resistance\soldier_helmet_officer.p3d";
		weapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		canCarryBackPack = 1;
		backpack = "ice_apo_pack1";
		
		class Wounds {
			tex[] = {};
			mat[] = {"ice_apo_resistance\data\armysf_tl.rvmat", "ice_apo_resistance\data\armysf_tl_wound1.rvmat", "ice_apo_resistance\data\armysf_tl_wound2.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_white.rvmat", "CA\characters\Heads\Male\DefaultHead\data\hhl_white_wounds.rvmat", "CA\characters\Heads\Male\DefaultHead\data\hhl_white_wounds2.rvmat"};
		};
	};
	
	class alexej : epic_beard_man {
		scope = public;
		displayName = "Alexj";
		model = "\ice_apo_resistance\soldier_hat_medium_clean.p3d";
		weapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		backpack = "ice_apo_pack1";
	};
		
	class Stained_Stanislav : epic_beard_man {
		scope = public;
		displayName = "Stained Stanislav";
		model = "\ice_apo_resistance\soldier_mask_medium.p3d";
		weapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		backpack = "ice_apo_pack2";
	};
	
	class Scabby_Silvestr : epic_beard_man {
		scope = public;
		displayName = "Scabby Silvestr";
		model = "\ice_apo_resistance\soldier_mask_medium.p3d";
		weapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		backpack = "ice_apo_pack2";
	};
	
	class Moldy_Marek : epic_beard_man {
		scope = public;
		displayName = "Moldy Marek";
		model = "\ice_apo_resistance\soldier_tank_light_clean.p3d";
		attendant = true;
		weapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		backpack = "ice_apo_pack1";
	};
};

class CfgGroups {
	class ice_post_apc_overall {
		name = "Ice - Post Apocalypse";
		
		class ice_post_apc_group {
			name = "Commoners";
			
			class ice_post_apc_com {
				name = "Ground Units";
				
				class ice_post_apc_com_grd_sqd1 {
					name = "Normal Squad";
					faction = "ice_apo_faction_com";
					rarityGroup = 0.8;
					
					class Unit0 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_officer_helmet_clean_M4A1";
						rank = SERGEANT;
						position[] = {0, 5, 0};
					};
					
					class Unit1 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_medic_helmet_clean_FAL";
						rank = CORPORAL;
						position[] = {3, 0, 0};
					};
					
					class Unit2 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_scout_mask_clean";
						rank = CORPORAL;
						position[] = {5, 0, 0};
					};
					
					class Unit3 {
						side = TGuerrila;
						vehicle = "dimitry";
						rank = PRIVATE;
						position[] = {7, 0, 0};
					};
					
					class Unit4 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_hat_clean_FAL_M136";
						rank = PRIVATE;
						position[] = {9, 0, 0};
					};
					
					class Unit5 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_helmet_clean_M14";
						rank = PRIVATE;
						position[] = {11, 0, 0};
					};
					
					class Unit6 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_hat_clean_FAL";
						rank = PRIVATE;
						position[] = {13, 0, 0};
					};
					
					class Unit7 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_hat_clean_Lee";
						rank = PRIVATE;
						position[] = {15, 0, 0};
					};
					
					class Unit8 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_helmet_clean_M4A1GL";
						rank = PRIVATE;
						position[] = {17, 0, 0};
					};
				};
				
				class ice_post_apc_com_grd_sct_squad1 {
					name = "Scouting Party";
					faction = "ice_apo_faction_com";
					rarityGroup = 0.8;
					
					class Unit0 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_scout_mask_clean";
						rank = SERGEANT;
						position[] = {0, 5, 0};
					};
					
					class Unit1 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_scout_mask_clean2";
						rank = CORPORAL;
						position[] = {3, 0, 0};
					};
					
					class Unit2 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_hat_clean_Huntingrifle";
						rank = CORPORAL;
						position[] = {5, 0, 0};
					};
					
					class Unit3 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_hat_clean_Lee";
						rank = PRIVATE;
						position[] = {7, 0, 0};
					};
				};
				
				class ice_post_apc_com_grd_sqd2 {
					name = "Assault Squad";
					faction = "ice_apo_faction_com";
					rarityGroup = 0.8;
					
					class Unit0 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_officer_helmet_clean_M4A1";
						rank = SERGEANT;
						position[] = {0, 5, 0};
					};
					
					class Unit1 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_medic_helmet_clean_FAL";
						rank = CORPORAL;
						position[] = {3, 0, 0};
					};
					
					class Unit2 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_helmet_clean_M4A1GL";
						rank = CORPORAL;
						position[] = {5, 0, 0};
					};
					
					class Unit3 {
						side = TGuerrila;
						vehicle = "dimitry";
						rank = PRIVATE;
						position[] = {7, 0, 0};
					};
					
					class Unit4 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_hat_clean_FAL_M136";
						rank = PRIVATE;
						position[] = {9, 0, 0};
					};
					
					class Unit5 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_helmet_clean_M79GL";
						rank = PRIVATE;
						position[] = {11, 0, 0};
					};
					
					class Unit6 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_hat_clean_FAL";
						rank = PRIVATE;
						position[] = {13, 0, 0};
					};
					
					class Unit7 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_hat_clean_DMR";
						rank = PRIVATE;
						position[] = {15, 0, 0};
					};
					
					class Unit8 {
						side = TGuerrila;
						vehicle = "ice_apo_resistance_medium_rifleman_helmet_clean_M4A1GL";
						rank = PRIVATE;
						position[] = {17, 0, 0};
					};
				};
			};
		};
	};
};
