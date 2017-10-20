#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QGVAR(east_ftl),
            QGVAR(east_ar),
            QGVAR(east_rat),
            QGVAR(east_rifleman),
            QGVAR(east_manpad),
            QGVAR(east_manpadTeam),
            QGVAR(east_matTeam),
            QGVAR(east_patrol),
            QGVAR(east_fireteam),
            QGVAR(east_squad),
            QGVAR(east_aaModern),
            QGVAR(east_rhsZsu),
            QGVAR(east_cupZsu),
            QGVAR(east_cupTunguska),
            QGVAR(east_apcModern),
            QGVAR(east_rhsBTR60),
            QGVAR(east_cupBTR60),
            QGVAR(east_rhsBTR70),
            QGVAR(east_rhsBTR80),
            QGVAR(east_carOffroad),
            QGVAR(east_a3QilinHmg),
            QGVAR(east_carModernGmg),
            QGVAR(east_carModernHmg),
            QGVAR(east_cupUazGmg),
            QGVAR(east_cupUazHmg),
            QGVAR(east_cupUazSpg),
            QGVAR(east_cupUazAtgm),
            QGVAR(east_rhsGazGmgMmg),
            QGVAR(east_cupVodnikMmg),
            QGVAR(east_cupVodnikGmgMmg),
            QGVAR(east_cupBrdm),
            QGVAR(east_cupBrdmAtgm),
            QGVAR(east_heliAttack),
            QGVAR(east_rhsMi8),
            QGVAR(east_cupMi8),
            QGVAR(east_rhsMi24),
            QGVAR(east_cupMi24),
            QGVAR(east_rhsMi28),
            QGVAR(east_heliAttackHeavy),
            QGVAR(east_cupKa50),
            QGVAR(east_rhsKa52),
            QGVAR(east_cupKa52),
            QGVAR(east_ifvModern),
            QGVAR(east_rhsBTR80A),
            QGVAR(east_cupBTR90),
            QGVAR(east_rhsBmd1),
            QGVAR(east_rhsBmd2),
            QGVAR(east_rhsBmd4),
            QGVAR(east_rhsBmp1),
            QGVAR(east_rhsBmp2),
            QGVAR(east_cupBmp2),
            QGVAR(east_rhsBmp3),
            QGVAR(east_cupBmp3),
            QGVAR(east_rhsSprut),
            QGVAR(east_cupT55),
            QGVAR(east_rhsT72),
            QGVAR(east_cupT72),
            QGVAR(east_rhsT80),
            QGVAR(east_rhsT90),
            QGVAR(east_cupT90),
            QGVAR(east_tankModern),
            QGVAR(east_dismounts),

            QGVAR(west_ftl),
            QGVAR(west_ar),
            QGVAR(west_rat),
            QGVAR(west_rifleman),
            QGVAR(west_manpad),
            QGVAR(west_manpadTeam),
            QGVAR(west_matTeam),
            QGVAR(west_patrol),
            QGVAR(west_fireteam),
            QGVAR(west_squad),
            QGVAR(west_cupAvenger),
            QGVAR(west_cupVADS),
            QGVAR(west_aaModern),
            QGVAR(west_rhsLinebackerD),
            QGVAR(west_rhsLinebackerW),
            QGVAR(west_cupLinebackerD),
            QGVAR(west_cupLinebackerW),
            QGVAR(west_rhsM113GmgD),
            QGVAR(west_rhsM113HmgD),
            QGVAR(west_rhsM113GmgW),
            QGVAR(west_rhsM113HmgW),
            QGVAR(west_cupM113HmgW),
            QGVAR(west_cupFV432HmgD),
            QGVAR(west_cupFV432MmgD),
            QGVAR(west_cupFV432HmgW),
            QGVAR(west_cupFV432MmgW),
            QGVAR(west_rhsM1117GmgHmgD),
            QGVAR(west_rhsM1117GmgHmgW),
            QGVAR(west_apcModern),
            QGVAR(west_strykerGmgD),
            QGVAR(west_strykerHmgD),
            QGVAR(west_strykerGmgW),
            QGVAR(west_strykerHmgW),
            QGVAR(west_cupAAVPW),
            QGVAR(west_a3ProwlerHmg),
            QGVAR(west_rhsHmmwvGmgD),
            QGVAR(west_rhsHmmwvHmgD),
            QGVAR(west_rhsHmmwvGmgW),
            QGVAR(west_rhsHmmwvHmgW),
            QGVAR(west_cupHmmwvAtgmD),
            QGVAR(west_cupHmmwvGmgD),
            QGVAR(west_cupHmmwvHmgD),
            QGVAR(west_cupHmmwvAtgmW),
            QGVAR(west_cupHmmwvGmgW),
            QGVAR(west_cupHmmwvHmgW),
            QGVAR(west_cupLandRoverGmgD),
            QGVAR(west_cupLandRoverHmgD),
            QGVAR(west_cupLandRoverGmgW),
            QGVAR(west_cupLandRoverHmgW),
            QGVAR(west_cupJackalGmgD),
            QGVAR(west_cupJackalHmgD),
            QGVAR(west_cupJackalGmgW),
            QGVAR(west_cupJackalHmgW),
            QGVAR(west_cupCoyoteGmgD),
            QGVAR(west_cupCoyoteHmgD),
            QGVAR(west_cupCoyoteGmgW),
            QGVAR(west_cupCoyoteHmgW),
            QGVAR(west_cupRG31GmgD),
            QGVAR(west_cupRG31HmgD),
            QGVAR(west_cupRG31GmgW),
            QGVAR(west_cupRG31HmgW),
            QGVAR(west_rhsRG33LGmgD),
            QGVAR(west_rhsRG33LHmgD),
            QGVAR(west_rhsRG33LGmgW),
            QGVAR(west_rhsRG33LHmgW),
            QGVAR(west_carModernGmg),
            QGVAR(west_carModernHmg),
            QGVAR(west_carOffroad),
            QGVAR(west_heliAttackHeavy),
            QGVAR(west_rhsHeliAttackHeavy),
            QGVAR(west_cupHeliAttackHeavy),
            QGVAR(west_rhsAH64),
            QGVAR(west_cupAH64),
            QGVAR(west_heliAttack),
            QGVAR(west_rhsHeliAttack),
            QGVAR(west_cupHeliAttack),
            QGVAR(west_a3Wildcat),
            QGVAR(west_cupWildcat),
            QGVAR(west_cupWarriorD),
            QGVAR(west_cupWarriorW),
            QGVAR(west_cupLAVD),
            QGVAR(west_cupLAVW),
            QGVAR(west_rhsBradleyD),
            QGVAR(west_rhsBradleyW),
            QGVAR(west_cupBradleyD),
            QGVAR(west_cupBradleyW),
            QGVAR(west_ifvModern),
            QGVAR(west_rhsM1A1D),
            QGVAR(west_rhsM1A1W),
            QGVAR(west_cupM1A1D),
            QGVAR(west_cupM1A1W),
            QGVAR(west_cupChallengerD),
            QGVAR(west_cupChallengerW),
            QGVAR(west_tankModern),
            QGVAR(west_dismounts),

            QGVAR(ind_ftl),
            QGVAR(ind_ar),
            QGVAR(ind_rat),
            QGVAR(ind_rifleman),
            QGVAR(ind_manpad),
            QGVAR(ind_manpadTeam),
            QGVAR(ind_matTeam),
            QGVAR(ind_patrol),
            QGVAR(ind_fireteam),
            QGVAR(ind_squad),
            QGVAR(ind_rhsZsu),
            QGVAR(ind_cupZsu),
            QGVAR(ind_gazZu),
            QGVAR(ind_cupBTR40),
            QGVAR(ind_rhsBTR60),
            QGVAR(ind_cupBTR60),
            QGVAR(ind_technical),
            QGVAR(ind_cupUazGmg),
            QGVAR(ind_cupUazHmg),
            QGVAR(ind_cupUazSpg),
            QGVAR(ind_cupUazAtgm),
            QGVAR(ind_cupDatsunMmg),
            QGVAR(ind_cupLandRoverHmg),
            QGVAR(ind_cupLandRoverSpg),
            QGVAR(ind_cupSuvMinigun),
            QGVAR(ind_cupBrdm),
            QGVAR(ind_cupBrdmAtgm),
            QGVAR(ind_carModernGmg),
            QGVAR(ind_carModernHmg),
            QGVAR(ind_cupDingoGmgD),
            QGVAR(ind_cupDingoGmgW),
            QGVAR(ind_cupDingoHmgD),
            QGVAR(ind_cupDingoHmgW),
            QGVAR(ind_heliAttack),
            QGVAR(ind_rhsBmd),
            QGVAR(ind_rhsBmp),
            QGVAR(ind_cupBmp),
            QGVAR(ind_ifvModern),
            QGVAR(ind_ifvModern2),
            QGVAR(ind_cupT34),
            QGVAR(ind_cupT55),
            QGVAR(ind_rhsT72),
            QGVAR(ind_cupT72),
            QGVAR(ind_tankModern),
            QGVAR(ind_dismounts),

            QGVAR(ungarrison_all_groups),
            QGVAR(ungarrison_nearest_group),
            QGVAR(move_all_to_hc),

            QGVAR(build_a_group),
            QGVAR(spawn_a_vehicle),
            QGVAR(garrison)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"potato_core"};
        author = "Potato";
        authors[] = {"PabstMirror", "AACO"};
        authorUrl = "https://github.com/BourbonWarfare/POTATO";
        VERSION_CONFIG;
    };
};

#include "ACE_Settings.hpp"
#include "CfgEden.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgGarrison.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "Displays.hpp"
