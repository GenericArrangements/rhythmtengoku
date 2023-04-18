#include "global.h"
#include "graphics.h"
#include "src/scenes/debug_menu.h"


  /* DEBUG MENU - MISC. DATA */


extern const struct Scene scene_concert_hall;
extern const struct Scene D_089d6c8c;
extern const struct Scene D_089d6ba4;
extern const struct Scene D_089d69e0;
extern const struct Scene D_089d6804;
extern const struct Scene scene_remix_8;
extern const struct Scene scene_remix_7;
extern const struct Scene scene_remix_6;
extern const struct Scene scene_remix_5;
extern const struct Scene scene_remix_4;
extern const struct Scene scene_remix_3;
extern const struct Scene scene_remix_2;
extern const struct Scene scene_remix_1;
extern const struct Scene scene_bon_odori;
extern const struct Scene scene_bon_dance;
extern const struct Scene D_089d5dc4;
extern const struct Scene D_089d5eac;
extern const struct Scene D_089d5f94;
extern const struct Scene D_089d4c8c;
extern const struct Scene D_089d4d74;
extern const struct Scene D_089d4e5c;
extern const struct Scene D_089d4f44;
extern const struct Scene D_089d502c;
extern const struct Scene D_089d51fc;
extern const struct Scene D_089d5114;
extern const struct Scene D_089d52e4;
extern const struct Scene D_089d53cc;
extern const struct Scene D_089d54b4;
extern const struct Scene D_089d559c;
extern const struct Scene D_089d5684;
extern const struct Scene D_089d576c;
extern const struct Scene D_089d5854;
extern const struct Scene D_089d593c;
extern const struct Scene D_089d5a24;
extern const struct Scene D_089d5b0c;
extern const struct Scene D_089d5bf4;
extern const struct Scene D_089d5cdc;
extern const struct Scene D_089d48ec;
extern const struct Scene D_089d4464;
extern const struct Scene D_089d454c;
extern const struct Scene D_089d4634;
extern const struct Scene D_089d4804;
extern const struct Scene scene_reading;
extern const struct Scene scene_quiz_show;
extern const struct Scene scene_rap_men;
extern const struct Scene scene_rap_women;
extern const struct Scene D_089d6534;
extern const struct Scene scene_space_dance;
extern const struct Scene scene_cosmic_dance;
extern const struct Scene scene_showtime;
extern const struct Scene scene_data_check;
extern const struct Scene D_089d3a6c;
extern const struct Scene D_089d3984;
extern const struct Scene scene_tram_pauline;
extern const struct Scene scene_toss_boys;
extern const struct Scene scene_toss_boys_2;
extern const struct Scene D_089d2f98;
extern const struct Scene scene_power_calligraphy;
extern const struct Scene scene_rat_race;
extern const struct Scene D_089de05c;
extern const struct Scene scene_fireworks;
extern const struct Scene D_089d2940;
extern const struct Scene scene_bunny_hop;
extern const struct Scene D_089d2670;
extern const struct Scene scene_wizards_waltz;
extern const struct Scene scene_marching_orders;
extern const struct Scene scene_marching_orders_2;
extern const struct Scene D_089d1f18;
extern const struct Scene scene_tap_trial;
extern const struct Scene scene_tap_trial_2;
extern const struct Scene scene_samurai_slice;
extern const struct Scene scene_spaceball;
extern const struct Scene scene_spaceball_2;
extern const struct Scene scene_sneaky_spirits;
extern const struct Scene scene_sneaky_spirits_2;
extern const struct Scene scene_ninja_bodyguard;
extern const struct Scene scene_ninja_reincarnate;
extern const struct Scene scene_bouncy_road;
extern const struct Scene scene_bouncy_road_2;
extern const struct Scene scene_sick_beats;
extern const struct Scene scene_rhythm_tweezers;
extern const struct Scene scene_rhythm_tweezers_2;
extern const struct Scene scene_night_walk;
extern const struct Scene scene_night_walk_2;
extern const struct Scene scene_polyrhythm;
extern const struct Scene scene_polyrhythm_2;
extern const struct Scene scene_clappy_trio;
extern const struct Scene scene_snappy_trio;
extern const struct Scene scene_karate_man;
extern const struct Scene scene_karate_man_2;
extern const struct Scene scene_title;
extern const struct Scene scene_main_menu;
extern const struct Scene scene_game_select;
extern const struct Scene scene_data_room;
extern const struct Scene scene_studio;
extern const struct Scene scene_options_menu;
extern const struct Scene scene_results_ver_debug;
extern const struct Scene scene_results_ver_rank;
extern const struct Scene scene_results_ver_score;
extern const struct Scene scene_epilogue;
extern const struct Scene scene_arrival;
extern const struct Scene scene_perfect;
extern const struct Scene scene_cafe;
extern const struct Scene scene_endless_menu;
extern const struct Scene scene_lessons_menu;
extern const struct Scene scene_toys_menu;
extern const struct Scene D_089d6d74;
extern const struct Scene scene_staff_credit;
extern const struct Scene scene_data_clear;


// Sequence Test
const char D_0805966c[] = "シーケンス　テスト";


// Asterisk
const char D_08059680[] = "＊";


// 1/1
const char D_08059684[] = "１／１";


// [D_089ddbe8] Debug Menu Table
struct DebugMenuEntry debug_menu_entry_table[] = {
    /* LIVE */ {
        /* Scene */ &scene_concert_hall,
        /* Label */ "ライブ"
    },
    /* Sick Beats Endless */ {
        /* Scene */ &D_089d6c8c,
        /* Label */ "バイキン　はかせ　ＳＰ"
    },
    /* Quiz Show Endless */ {
        /* Scene */ &D_089d6ba4,
        /* Label */ "クイズ（スペシャル）"
    },
    /* Mannequin Factory */ {
        /* Scene */ &D_089d69e0,
        /* Label */ "マネキンこうじょう"
    },
    /* Mr. Upbeat */ {
        /* Scene */ &D_089d6804,
        /* Label */ "ウラおとこ"
    },
    /* Remix 8 */ {
        /* Scene */ &scene_remix_8,
        /* Label */ "リミックス　８"
    },
    /* Remix 7 */ {
        /* Scene */ &scene_remix_7,
        /* Label */ "リミックス　７"
    },
    /* Remix 6 */ {
        /* Scene */ &scene_remix_6,
        /* Label */ "リミックス　６"
    },
    /* Remix 5 */ {
        /* Scene */ &scene_remix_5,
        /* Label */ "リミックス　５"
    },
    /* Remix 4 */ {
        /* Scene */ &scene_remix_4,
        /* Label */ "リミックス　４"
    },
    /* Remix 3 */ {
        /* Scene */ &scene_remix_3,
        /* Label */ "リミックス　３"
    },
    /* Remix 2 */ {
        /* Scene */ &scene_remix_2,
        /* Label */ "リミックス　２"
    },
    /* Remix 1 */ {
        /* Scene */ &scene_remix_1,
        /* Label */ "リミックス　１"
    },
    /* The Bon Odori */ {
        /* Scene */ &scene_bon_odori,
        /* Label */ "ぼんおどり"
    },
    /* Bon Dance */ {
        /* Scene */ &scene_bon_dance,
        /* Label */ "ボンダンス"
    },
    /* Rhythm Toys (Cat Machine) */ {
        /* Scene */ &D_089d5dc4,
        /* Label */ "こえマシン（ネコ）"
    },
    /* Rhythm Toys (Confession Machine) */ {
        /* Scene */ &D_089d5eac,
        /* Label */ "こえマシン（ラブ）"
    },
    /* Rhythm Toys (Rap Machine) */ {
        /* Scene */ &D_089d5f94,
        /* Label */ "こえマシン（ラップ）"
    },
    /* Lesson (Short 1) */ {
        /* Scene */ &D_089d4c8c,
        /* Label */ "レッスン（イージー）"
    },
    /* Lesson (Short 4) */ {
        /* Scene */ &D_089d4d74,
        /* Label */ "レッスン（ハード１）"
    },
    /* Lesson (Short 8) */ {
        /* Scene */ &D_089d4e5c,
        /* Label */ "レッスン（ハード２）"
    },
    /* Lesson (Short 5) */ {
        /* Scene */ &D_089d4f44,
        /* Label */ "レッスン（キメパターン１）"
    },
    /* Lesson (Short 7) */ {
        /* Scene */ &D_089d502c,
        /* Label */ "レッスン（キメパターン２）"
    },
    /* Lesson (Short 6) */ {
        /* Scene */ &D_089d51fc,
        /* Label */ "レッスン（デスコビート）"
    },
    /* Lesson (Short 9) */ {
        /* Scene */ &D_089d5114,
        /* Label */ "レッスン（ボッサ）"
    },
    /* Lesson (Basic 1) */ {
        /* Scene */ &D_089d52e4,
        /* Label */ "レッスン（スネア）"
    },
    /* Lesson (Basic 2) */ {
        /* Scene */ &D_089d53cc,
        /* Label */ "レッスン（バスとスネア）"
    },
    /* Lesson (Short 2) */ {
        /* Scene */ &D_089d54b4,
        /* Label */ "レッスン（はやい８ビート）"
    },
    /* Lesson (Short 3) */ {
        /* Scene */ &D_089d559c,
        /* Label */ "レッスン（スネアテクニック）"
    },
    /* Lesson (Long 4) */ {
        /* Scene */ &D_089d5684,
        /* Label */ "レッスン（じっせん１）"
    },
    /* Lesson (Long 2) */ {
        /* Scene */ &D_089d576c,
        /* Label */ "レッスン（じっせん２）"
    },
    /* Lesson (Long 3) */ {
        /* Scene */ &D_089d5854,
        /* Label */ "レッスン（じっせん３）"
    },
    /* Lesson (Long 1) */ {
        /* Scene */ &D_089d593c,
        /* Label */ "レッスン（じっせん４）"
    },
    /* Lesson (Long 5) */ {
        /* Scene */ &D_089d5a24,
        /* Label */ "レッスン（じっせん５）"
    },
    /* Lesson (Long 6) */ {
        /* Scene */ &D_089d5b0c,
        /* Label */ "レッスン（じっせん６）"
    },
    /* Lesson (High-Tech 1) */ {
        /* Scene */ &D_089d5bf4,
        /* Label */ "レッスン（じっせん７）"
    },
    /* Lesson (High-Tech 2) */ {
        /* Scene */ &D_089d5cdc,
        /* Label */ "レッスン（じっせん８）"
    },
    /* Studio Drummer */ {
        /* Scene */ &D_089d48ec,
        /* Label */ "スタジオドラマー"
    },
    /* Check Machine (Click) */ {
        /* Scene */ &D_089d4464,
        /* Label */ "チェックマシン　（クリック）"
    },
    /* Rhythm Test (Cue) */ {
        /* Scene */ &D_089d454c,
        /* Label */ "チェックマシン　（キューフ）"
    },
    /* Rhythm Test (Trick) */ {
        /* Scene */ &D_089d4634,
        /* Label */ "チェックマシン　（トリッキー）"
    },
    /* Rhythm Test (Total) */ {
        /* Scene */ &D_089d4804,
        /* Label */ "チェックマシン　（トータル）"
    },
    /* Reading Material */ {
        /* Scene */ &scene_reading,
        /* Label */ "テキスト"
    },
    /* Quiz Show */ {
        /* Scene */ &scene_quiz_show,
        /* Label */ "クイズ"
    },
    /* Rap Men */ {
        /* Scene */ &scene_rap_men,
        /* Label */ "ラップメン"
    },
    /* Rap Women (by YONE) */ {
        /* Scene */ &scene_rap_women,
        /* Label */ "ラップ　ウィメン（ｂｙ　ＹＯＮＥ）"
    },
    /* Rap Women (by KAZU) */ {
        /* Scene */ &D_089d6534,
        /* Label */ "ラップ　ウィメン（ｂｙ　ＫＡＺＵ）"
    },
    /* Space Dance */ {
        /* Scene */ &scene_space_dance,
        /* Label */ "スペースダンス"
    },
    /* Cosmic Dance */ {
        /* Scene */ &scene_cosmic_dance,
        /* Label */ "コスモダンス"
    },
    /* Showtime */ {
        /* Scene */ &scene_showtime,
        /* Label */ "ショータイム"
    },
    /* RIQ Data Check */ {
        /* Scene */ &scene_data_check,
        /* Label */ "ＲＩＱデータチェック"
    },
    /* Opening (B Type) */ {
        /* Scene */ &D_089d3a6c,
        /* Label */ "オープニング　（Ｂ　Ｔｙｐｅ）"
    },
    /* Opening (A Type) */ {
        /* Scene */ &D_089d3984,
        /* Label */ "オープニング　（Ａ　Ｔｙｐｅ）"
    },
    /* Tram & Pauline */ {
        /* Scene */ &scene_tram_pauline,
        /* Label */ "トランとポリン"
    },
    /* Toss Boys */ {
        /* Scene */ &scene_toss_boys,
        /* Label */ "トスボーイズ"
    },
    /* Toss Boys 2 */ {
        /* Scene */ &scene_toss_boys_2,
        /* Label */ "トスボーイズ　２"
    },
    /* Drum Girls LIVE */ {
        /* Scene */ &D_089d2f98,
        /* Label */ "ドラムガールズ"
    },
    /* Power Calligraphy */ {
        /* Scene */ &scene_power_calligraphy,
        /* Label */ "リズム　おしゅうじ"
    },
    /* Rat Race */ {
        /* Scene */ &scene_rat_race,
        /* Label */ "こっそりラット"
    },
    /* Flash Memory Test */ {
        /* Scene */ &D_089de05c,
        /* Label */ "フラッシュメモリテスト"
    },
    /* Fireworks */ {
        /* Scene */ &scene_fireworks,
        /* Label */ "ハナビ"
    },
    /* Metronome */ {
        /* Scene */ &D_089d2940,
        /* Label */ "メトロノーム"
    },
    /* Bunny Hop */ {
        /* Scene */ &scene_bunny_hop,
        /* Label */ "ウサギとび"
    },
    /* Dance Lesson 1 */ {
        /* Scene */ &D_089d2670,
        /* Label */ "ダンスレッスン　１"
    },
    /* Wizard's Waltz */ {
        /* Scene */ &scene_wizards_waltz,
        /* Label */ "まほうつかい"
    },
    /* Marching Orders */ {
        /* Scene */ &scene_marching_orders,
        /* Label */ "マーチャ"
    },
    /* Marching Orders 2 */ {
        /* Scene */ &scene_marching_orders_2,
        /* Label */ "マーチャ　２"
    },
    /* Horse Machine */ {
        /* Scene */ &D_089d1f18,
        /* Label */ "うま（スピード）"
    },
    /* Tap Trial */ {
        /* Scene */ &scene_tap_trial,
        /* Label */ "タップダンズ"
    },
    /* Tap Trial 2 */ {
        /* Scene */ &scene_tap_trial_2,
        /* Label */ "スーパータップ"
    },
    /* Samurai Slice */ {
        /* Scene */ &scene_samurai_slice,
        /* Label */ "いあいぎり"
    },
    /* Spaceball */ {
        /* Scene */ &scene_spaceball,
        /* Label */ "エアーバッター"
    },
    /* Spaceball 2 */ {
        /* Scene */ &scene_spaceball_2,
        /* Label */ "エアーバッター２"
    },
    /* Sneaky Spirits */ {
        /* Scene */ &scene_sneaky_spirits,
        /* Label */ "しろいおばけ"
    },
    /* Sneaky Spirits 2 */ {
        /* Scene */ &scene_sneaky_spirits_2,
        /* Label */ "しろいおばけ　２"
    },
    /* Ninja Bodyguard */ {
        /* Scene */ &scene_ninja_bodyguard,
        /* Label */ "ニンジャ"
    },
    /* Ninja Bodyguard 2 */ {
        /* Scene */ &scene_ninja_reincarnate,
        /* Label */ "ニンジャ　２"
    },
    /* Bouncy Road */ {
        /* Scene */ &scene_bouncy_road,
        /* Label */ "ホッピングロード"
    },
    /* Bouncy Road 2 */ {
        /* Scene */ &scene_bouncy_road_2,
        /* Label */ "ホッピングロード　２"
    },
    /* Sick Beats */ {
        /* Scene */ &scene_sick_beats,
        /* Label */ "バイキン　はかせ"
    },
    /* Rhythm Tweezers */ {
        /* Scene */ &scene_rhythm_tweezers,
        /* Label */ "リズムだつもう"
    },
    /* Rhythm Tweezers 2 */ {
        /* Scene */ &scene_rhythm_tweezers_2,
        /* Label */ "リズムだつもう　２"
    },
    /* Night Walk */ {
        /* Scene */ &scene_night_walk,
        /* Label */ "ナイト　ウォーク"
    },
    /* Night Walk 2 */ {
        /* Scene */ &scene_night_walk_2,
        /* Label */ "ナイト　ウォーク　２"
    },
    /* Polyrhythm */ {
        /* Scene */ &scene_polyrhythm,
        /* Label */ "ポリリズム"
    },
    /* Polyrhythm 2 */ {
        /* Scene */ &scene_polyrhythm_2,
        /* Label */ "ポリリズム　２"
    },
    /* The Clappy Trio */ {
        /* Scene */ &scene_clappy_trio,
        /* Label */ "パチパチ３にんしゅう"
    },
    /* The Snappy Trio */ {
        /* Scene */ &scene_snappy_trio,
        /* Label */ "バリバリ３にんしゅう"
    },
    /* Karate Man */ {
        /* Scene */ &scene_karate_man,
        /* Label */ "カラテカ"
    },
    /* Karate Man 2 */ {
        /* Scene */ &scene_karate_man_2,
        /* Label */ "カラテカ　２"
    },
    /* R-IQ (Title Screen) */ {
        /* Scene */ &scene_title,
        /* Label */ "Ｒ−ＩＱ　（タイトル）"
    },
    /* R-IQ (Main Menu) */ {
        /* Scene */ &scene_main_menu,
        /* Label */ "Ｒ−ＩＱ　（メニュー）"
    },
    /* R-IQ (Game Select) */ {
        /* Scene */ &scene_game_select,
        /* Label */ "Ｒ−ＩＱ　（ゲーム）"
    },
    /* R-IQ (Rhythm Data Room) */ {
        /* Scene */ &scene_data_room,
        /* Label */ "Ｒ−ＩＱ　（しりょうしつ）"
    },
    /* R-IQ (Studio) */ {
        /* Scene */ &scene_studio,
        /* Label */ "Ｒ−ＩＱ　（スタジオ）"
    },
    /* R-IQ (Options) */ {
        /* Scene */ &scene_options_menu,
        /* Label */ "Ｒ−ＩＱ　（オプション）"
    },
    /* R-IQ (Result [1]) */ {
        /* Scene */ &scene_results_ver_debug,
        /* Label */ "Ｒ−ＩＱ　（リザルト）"
    },
    /* R-IQ (Result 2) */ {
        /* Scene */ &scene_results_ver_rank,
        /* Label */ "Ｒ−ＩＱ　（リザルト２）"
    },
    /* R-IQ (Result 3) */ {
        /* Scene */ &scene_results_ver_score,
        /* Label */ "Ｒ−ＩＱ　（リザルト３）"
    },
    /* R-IQ (Result 4) */ {
        /* Scene */ &scene_epilogue,
        /* Label */ "Ｒ−ＩＱ　（リザルト４）"
    },
    /* R-IQ (Rhythm Library) */ {
        /* Scene */ &scene_arrival,
        /* Label */ "Ｒ−ＩＱ　（にゅうか）"
    },
    /* R-IQ (Perfect) */ {
        /* Scene */ &scene_perfect,
        /* Label */ "Ｒ−ＩＱ　（パーフェクト）"
    },
    /* R-IQ (Cafe) */ {
        /* Scene */ &scene_cafe,
        /* Label */ "Ｒ−ＩＱ　（カウンセラー）"
    },
    /* R-IQ (Endless Games) */ {
        /* Scene */ &scene_endless_menu,
        /* Label */ "Ｒ−ＩＱ　（ミニゲーム）"
    },
    /* R-IQ (Drum Lessons) */ {
        /* Scene */ &scene_lessons_menu,
        /* Label */ "Ｒ−ＩＱ　（ドラムレッスン）"
    },
    /* R-IQ (Rhythm Toys) */ {
        /* Scene */ &scene_toys_menu,
        /* Label */ "Ｒ−ＩＱ　（おもちゃ）"
    },
    /* R-IQ (Cafe) */ {
        /* Scene */ &scene_cafe,
        /* Label */ "Ｒ−ＩＱ　（カウンセラー）"
    },
    /* Ending (from clearing Remix 6) */ {
        /* Scene */ &D_089d6d74,
        /* Label */ "エンディング（クリアご）"
    },
    /* Ending (from Game Select) */ {
        /* Scene */ &scene_staff_credit,
        /* Label */ "エンディング（おまけから）"
    },
    /* Data Clear */ {
        /* Scene */ &scene_data_clear,
        /* Label */ "データクリア"
    },
    END_OF_DEBUG_ENTRIES
};


// Backslash
const char D_08059f8c[] = "／";


// [D_089ddf60] Fullwidth Arabic Numerals and Uppercase Latin Alphabet Characters
char debug_menu_fullwidth_char[] = "０１２３４５６７８９ＡＢＣＤＥＦＧＨＩＪＫＬＭＮＯＰＱＲＳＴＵＶＷＸＹＺ";
