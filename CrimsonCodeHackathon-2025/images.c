#include "Header.h" 



#pragma region images
#pragma region security pic

void pic_security() {
    printf(
        RED  // Background Red
        "BBBBBBBBBBBBBBBGGGGGGGGGGGGPPPPPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGGGGPJ ? !!?"PURPLE"YGBBBB############"RED"BBPPGG\n"
        "BGGGGGGGGGGGGGGGGGGGGGGGGPPPPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGGGGGJ7!7J5PG"PURPLE"B####&&&&&&&&&&&&##"RED"BPPBGGGG\n"
        "5PGGGGGGGGPPPPPPGGGGGGGPPPPPPPPGGGPPPPPPPPPPGGGGGGGGGGGGGPPGGGPJ7!?5GB"PURPLE"B#&&&&&&&&&&&&&&&&&&##"RED"B5PGGGGG"PURPLE"\n"
        "5GB#####BBBBGGG"RED"PPP555PPPPPGGGGGGGGGGGPPPPPPPPPPPPPPPG5Y?7?YY55J7YGBB"PURPLE"B#&&&&&&&&&&&&&&&#&&&&##"RED"B5PBGGGB"PURPLE"\n"
        "P#&&####&&######"RED"BBBGGP5555PGGGGGGGGPPPPPPPPPPPPJYY??!~^~!JY5555PGGG"PURPLE"B#&&&&&&&&&&&&&&&#&&&&##"RED"BBYGGGGGB"PURPLE"\n"
        "P#&#####&&&&&&&&#####"RED"BBBGPP555PPP5JJJJ?J?7?JYYJ~~~~~7JYPGGBGGGGG"PURPLE"GGGGGGB#######&&&&&##&&&&##"RED"BGYBGGGGG"PURPLE"\n"
        "PB&######################"RED"BBGGPPGGGGGGGG5YJJYJ?J7!7?YPGGGGGG"PURPLE"PPGGGGGGGGGGPGB###&&&&&&###&&&#"RED"BB55GGGGGG"PURPLE"\n"
        "5G&&#####################"RED"BBBBBGGGGGGGGGGGGGGGGB5JYPGGGGG"PURPLE"PPPPGBBBBBBBBGGGGGGB####&&&##&&&&#"RED"BBYPGGGGPP"PURPLE"\n"
        "?P#&##################BGGBBGGGPPPPPGGGGGGGGGGGGYJPGGGPPPPGB#&&&&&&&&&#BBGBGGG#&###&##&&&&#"RED"BPYPPPPPPP"PURPLE"\n"
        "RED""J"PURPLE"B&&##&############B5PBBGPPGGBBBBBBGGPPGGGGGGGYPGPPPPPGB#&&&@@@@@@@@@&&#BBBGGB#&####&&&#"RED"B55PPPPPP\n"
        "Y"PURPLE"!P#&##&###########PYGBGPGGB"RESET_COLOR"##########"PURPLE"BGGGGGGGGPPPPPPPGB"RESET_COLOR"&&&@@@@@@@@@@@@@@&"PURPLE"BGBBGG#&####&###"RED"GYPGGGGGGP\n"
        "P!"PURPLE"?B#&##########&BPGBBGGB"RESET_COLOR"######&&&&&&&&#"PURPLE"BGGGGGGGPPPPPGB"RESET_COLOR"#&&@@@@@@@@@@@@@@@@&"PURPLE"#BBBBGB###&####"RED"PYGGGGGGGG\n"
        "G5~"PURPLE"Y#&##########BPGBBGB"RESET_COLOR"####&&&&&&&&&&&&&&"PURPLE"BGGGGGGPPPPPB"RESET_COLOR"#&&@@@@@@@@@@@@@@@@@@@#"PURPLE"BBBBPP#&####"RED"BY5GGGGGGGG\n"
        "GG7~"PURPLE"5##########B5PBBGB"RESET_COLOR"&&&&&&&&&@@@@@@@@@@&#"PURPLE"BGGGGGPPPG"RESET_COLOR"#&&@@@@@@@@@@@@@@@@@@@@@&"PURPLE"BBBBPYB####"RED"PJGGGGGGGGG\n"
        "GGY~"PURPLE"!P##&&#####55BBGB"RESET_COLOR"&&&&&&@@@@@@@@@@@@@@@&#"PURPLE"GGGGGPPPB"RESET_COLOR"#&&@@@@@@@@&&@@@@@@@@@@@@@#"PURPLE"GGBBP"RED"?YBG5GGGGGGGGGB\n"
        "GGGP?"PURPLE"7P##&&###5YGBBB"RESET_COLOR"&&@@@@@@@@@@@@@@@@@@@@&#"PURPLE"BGGPPPPPG"RESET_COLOR"#&&@@@@@@@@"BLACK"&&&&"RESET_COLOR"@@@@@@@@@@@@@"PURPLE"#GGBBP"RED"?YBG5GGGGGGGG\n"
        "PPPPGY!"PURPLE"P##&&&GJ5BBG"RESET_COLOR"&@@@@@@@@@@@@@@@@@@@@@@&&BG"PURPLE"GPPPPPG"RESET_COLOR"B&&&@@@&&"BLACK"BYYJJ5B&"RESET_COLOR"@@@@@@@@@&"PURPLE"BGGGBGYY"RED"P55555PGGGGG\n"
        "PPPPPP?"PURPLE"!PB#&#JYGBB"RESET_COLOR"#@@@@@@@@@@@@@&&&&@@@@@@&&BG"PURPLE"GPPPPPG"RESET_COLOR"B#&&&@&#"BLACK"P^?GGG?~G&"RESET_COLOR"@@@@@@@&&"PURPLE"#BGGGP5"RED"JJJ?7!!!?PBBB\n"
        "PPPPPP5!"PURPLE"~YGBY?GBBB"RESET_COLOR"&@@@@@@@@@@&BY"BLACK"??5BB"RESET_COLOR"&&@@&&#BG"PURPLE"GPPPPPPG"RESET_COLOR"B#&&&&"RESET_COLOR"#"BLACK"Y.JPBBB!G&"RESET_COLOR"@@@@@@&&"PURPLE"#BBGPPPGGGGGP5J!7"RED"5GGG\n"
        "PPPPPP57~~"PURPLE"?J7PBBBB"RESET_COLOR"&&@@@@@@@@&B7"BLACK"!5GBP^5"RESET_COLOR"#&&&#BG"PURPLE"GGP5555PPG"RESET_COLOR"B##&&#B"BLACK"57!7JB#&"RESET_COLOR"@@@@@@&&"PURPLE"#BBBGPGGGGB##BBGP7"RED"JGGG\n"
        "PPPPPPPP5?!!"PURPLE"JBBBGB"RESET_COLOR"&&&@@@@@@@&B"BLACK"~7B#BJ:5"RESET_COLOR"#&&#BGGP"PURPLE"5YJJJJY5PGG"RESET_COLOR"B##&&&&#"RESET_COLOR"B#&&@@@&&&&#"PURPLE"#BBBGGGPGB#&&&&#BG5?"RED"5GG\n"
        "PPPP5YJJJ?!!Y"PURPLE"GBBBB"RESET_COLOR"#&&&&@@@@@&&B"BLACK"YBBBJP"RESET_COLOR"##&#BGP5"PURPLE"YYYYYYYYYY5PPG"RESET_COLOR"GGGBBB##"RESET_COLOR"&&&&&###"PURPLE"BBBBGGGPPB#&&&&&&&#BP"RED"5PGG\n"
        "PPPPJ~^!"PURPLE"?J55PPPPGB"RESET_COLOR"###&&&&&&&&&&&&&&&##BGGP"PURPLE"P5555PPPGGGGGGGP555555555PPPGGGGGGGGGGP5P#&&&&&&&&&&BG"RED"5PPG\n"
        "PPPY!~"PURPLE"YGBBBBBBGGGGBB"RESET_COLOR"####&&&&&&&&&#BGPP"PURPLE"PP5Y"PURPLE""BLACK"55GB#&&&@@@&&&#"PURPLE"YYYYYY55555555555555PP55B&&&&&&&&&&&&BG"RED"PPPP\n"
        "PPPY~"PURPLE"JBB"BLACK"#&&&#"PURPLE"BBGGGGBBB"RESET_COLOR"BBBB####BBGPP"PURPLE"P55555YY"PURPLE""BLACK"Y5G#&@@@&&&B5"PURPLE"JJJJJJJJJYYYYYYYYYYYYY5G#&&&&&&&&&&&&&"PURPLE"BG"RED"PPP\n"
        "PPPJ~"PURPLE"5G"BLACK"#&&&&&&&#"PURPLE"BGPPGGGGGGGGPP"PURPLE"PP5555YYYYYYYJ"PURPLE""BLACK"JYP#&&&&GJ"PURPLE"JJJ?????JJJJJJJJJYY5G#"BLACK"&&&&&&& "PURPLE" &&&&&&&&B"RED"PPPPP\n"
        "PPP5JYP"PURPLE"#"BLACK"&&&&&&&&&&#"PURPLE"GP55555"PURPLE"555555YYYYJJJJJJJJJJ"PURPLE""BLACK"J?P&&B"PURPLE"JJJJJYYJJJJJJJJJJJYPB#"BLACK"&&&&&&&&&&&"PURPLE"&&&&&&&#"RED"GPPPPPP\n"
        "PGGBGJ"PURPLE"YB@"BLACK"&&&&&&&&&&&&#"PURPLE"GP5YYYYYYYYYJJJJJJYYYYYYY"PURPLE""BLACK"G#&&"PURPLE"&&##BBBBBGGGGGGBB#&&"BLACK"&&&&&&&&&&&&&&&"PURPLE"&@@@@&B"RED"GPPPPP\n"
        "PPGGG5?"PURPLE"P#@"BLACK"&&&&&&&&&&&&&&&#"PURPLE"BGP5YYJJJJJYY5PPGB##&&@&&&&&@@@@@@@@@@@@@@@@"BLACK"&&&&&&&@@@@@@@@@"PURPLE"@@@@@#"RED"GPPPPPP\n"
        "PPPPPGY?"PURPLE"G&@"BLACK"&&&&&&&&&&&&&&&&&&"PURPLE"#######&&&&@@@@&@@@@@@@@@@@@@@@@@@@@@@@"BLACK"@@@@@@@@@@@@@@@@@"PURPLE"  @@@@&B"RED"PPPPPPP\n"
        "GGPPGGBJ"PURPLE"JG&"BLACK"&&&&&&&&&&&&&&&&&&&&&&"PURPLE"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"BLACK"@@@@@@@@@@@@@@@@@@@@"PURPLE"  @@@@&#G"RED"PPPPPPP\n"
        "GPPPPGGG?"PURPLE"JG&"BLACK"@@&&&&&&&&&&&&&&&&&@@@@"PURPLE"@@@@@@@@@@@@@@@@@@@@@@@@@@@"BLACK"@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"@@@#G"RED"PPGGGPPP\n"
        "GGPPPPPGP?"PURPLE"JG&"BLACK"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"@@@@#G"RED"PGGGGGGGG\n"
        "PPPPGGGGGGJ"PURPLE"JG&"BLACK"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"@#G"RED"PGGGGGGGGG\n"
        "PPGGGGGGBBG?"PURPLE"JP#"BLACK"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"@&B"RED"PPGGGGGGGGGG\n"
        "GGGGGGGGPJ?JJJ"PURPLE"5B&"BLACK"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"&#G"RED"55GGGGGGGGGGG\n"
        "GGGPPP5Y?J5PGPY"PURPLE"YG#&"BLACK"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"&#B"RED"5Y5GGGGGGGGGGGG\n"
        "PPPPP5Y??5PGGG#G"PURPLE"JYG#&"BLACK"&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"&&##G"RED"PY5GBGGGGGGGGGGGG\n"
        "PPPPPPPY5PPGGGB&&P"PURPLE"JYG#&&"BLACK"&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"&&##BG"RED"5Y5PGGGGGGGGGGGGGBB\n"
        "PPPPPPYYPPGGGGB#&&#"PURPLE"PvJYPB"BLACK"&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"&&&&##BG"RED"5Y5PGGGGGGGGGGGGGGBBB\n"
        "PPPPP5YYPGGGGBBB#&&@&B"PURPLE"5YYPB#"BLACK"&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@"PURPLE"&&&&&&##BBG"RED"P5YJJYGGGGGGGGGGGGGGBBBBB\n"
        "PPPPPP55BGPGBBBBB#&&&@@&"PURPLE"BPYY5PBB##&&&&&&&&&&&&&&&&&&@@@@@&&&&&&&&##BBGG"RED"P5YY5GBJ5PPGGGGGGGGGGGBBBBBBB\n"
        "PPPPPY5BBGGGBBBBBB###&&&@@"PURPLE"&#G5YYY5PGGGBBBB######&&&&&######BBBGGPP55"RED"YYY5PB#&&BP5GGGGGGGGGGGBBBBBBBBB\n"
        ""RED"PPPP5GBGGGGGGGGG####&&&&&&&&&"PURPLE"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"RED"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n"
        RESET_COLOR);
}



#pragma endregion 
#pragma region Rocket Ship

void pic_rocket() {

    printf(
        ".......      .......      ........      .......      .......      ........      .......      .......\n"
        ".......      .......       ......       .......      .......       ......       .......      .......\n"
        ".......      .......       ......       .......      .......       ......       .......      .......\n"
        "      ........     ........      ........     ........         ....      ........     ........      \n"
        "       ......       .......      .......       ......    "RED".^7J55"RESET_COLOR"....      .......       ......       \n"
        "       ......       .......      .......       ..... "RED".^?PGPY7G@"RESET_COLOR":...      .......       ......       \n"
        "................................................  "RED".!YGPJ~"RED"   5@"RESET_COLOR":...................................\n"
        ".......      .......       ......       ....... "RED":JBG?^"RED""RESET_COLOR" .... "RED"P#"RESET_COLOR".   ......       .......      .......\n"
        ".......      .......       ......       ....."RED".^5BY^"RED""RESET_COLOR" .^:......"RED"#G"RESET_COLOR"    ......       .......      .......\n"
        ".......      .......      ........      ... "RED"^P#J~JY:7YP5~ "RESET_COLOR"."RED" ~@?"RESET_COLOR"   ........      .......      .......\n"
        "       ......       .......      .......  "RED".Y#Y:~#J:"RESET_COLOR"..  "RED"?&^"RED"  5@^"RESET_COLOR"....      .......       ......       \n"
        "       ......       .......      ......  "RED"!#G^"RED"  BP "RESET_COLOR"..."RED"  @7"RED"  ^@5"RESET_COLOR" ....      .......       ......       \n"
        "      ........      .......      .. "RED".:!?P&?"RED"    J#~"RESET_COLOR"...."RED"~GP."RED"  P&:"RESET_COLOR".....      .......      ........      \n"
        ".......      .......       ...... "RED"^?555@#~"RESET_COLOR" ... "RED"  !55YY55!"RESET_COLOR"."RED"  7@7"RED""RESET_COLOR"      ......       .......      .......\n"
        ".......      .......       ....."RED"!PP?"RED":^#G:"RESET_COLOR"... :"RED"?Y!"RED""RESET_COLOR" .::... "RED" ~@Y"RESET_COLOR"       ......       .......      .......\n"
        ".......      .......       .."RED" ^PG!"RED"  ^&G"RESET_COLOR"....."RED"?BJBG"RED""RESET_COLOR"    .."RED"  ^&P"RESET_COLOR".       ......       .......      .......\n"
        "       ......       .......  "RED"!#?"RED" .~?&P"RESET_COLOR" .  "RED"^GP:.&?"RED""RESET_COLOR" ... "RED"  ~&P"RESET_COLOR". .......      .......       ......       \n"
        "       ......       ....... "RED"J#"RED"~:JP5?P#?"RESET_COLOR": "RED"7#?  J#:"RED""RESET_COLOR"...."RED"  ?&@J"RESET_COLOR"  .......      .......       ......       \n"
        "       ......       ......."RED"J#?5P?"RESET_COLOR":. ."RED"!PGP#~"RESET_COLOR"  "RED"!&!"RED""RESET_COLOR".."RED"  :P&7GP"RESET_COLOR"  .......      .......       ......       \n"
        ".......      .......      "RED"7@#5!.       !@!"RESET_COLOR"  "RED"7&?"RED"    !&G^ #Y"RESET_COLOR" .       ......       .......      .......\n"
        ".......      .......      :"RED"!^"RESET_COLOR"....."RED"^   .BY"RESET_COLOR" "RED"^5BPP5?!5&?. ~@~"RESET_COLOR"..       ......       .......      .......\n"
        ".......      .......       ....."YELLOW"!GY   7@?5G?"RESET_COLOR"..:"RED"~JP#B  :B5"RESET_COLOR"...       ......       .......      .......\n"
        "      ........      .......    "YELLOW"7&!"RESET_COLOR" ..."YELLOW"^YJ~       "RED" GP :GP"RESET_COLOR".   .......      .......      ........      \n"
        "       ......       .......  "YELLOW" ^&7"RESET_COLOR" .....  "YELLOW"^J"RESET_COLOR".   .."RED"^@~~BY"RESET_COLOR"     .......      .......       ......       \n"
        "       ......       ....... "YELLOW" PB"RESET_COLOR" ......."YELLOW" ?@.   "RESET_COLOR".."RED"PBJ#7"RESET_COLOR"      .......      .......       ......       \n"
        ".......      .......      .."YELLOW" ~@!       :#Y"RESET_COLOR" ... "RED"~@#5"RESET_COLOR": ......      ........      .......      .......\n"
        ".......      .......       .."YELLOW"B5     ^P5BY"RESET_COLOR"..... ."RED"~^"RESET_COLOR"  .......       ......       .......      .......\n"
        ".......      .......       :"YELLOW"GB~?J  .?BJ?!"RESET_COLOR"......      .......       ......       .......      .......\n"
        ".......................... "YELLOW"5&5B@?~YGY^ "RESET_COLOR"  ...........................................................\n"
        "       ......       ........:"YELLOW"Y@B5Y!"RESET_COLOR": ...       ......       .......      .......       ......       \n"
        "       ......       ....... :"YELLOW"?~"RESET_COLOR":  ......       ......       .......      .......       ......       \n"
    );

    return 0;
}




#pragma endregion
#pragma region Science logo

void science_logo() {

    printf(CYAN"        ^J5YY555J~^GJ                 :G@@G:                                                              \n"
        "        :P&J:.  .^?B@@P                 ^&@@#:                                                              \n"
        "       :#@G        .5@P                  .~~.                                                               \n"
        "       7@@#:         PB                                                                                     \n"
        "       ^&@@#J^       .!     ^?J?7?Y7: :7JJJYJ     :7Y?7JY?^  ^?JJYY: ~J5GPY!      .!J?7?Y?^     ^?J??JY7:  \n"
        "        ~#@@@@#P?~:       ~G@P:  :&@&! :!#@@#.  .Y&#~.  7@@P..^Y@@@Y7!~~7#@@P   .Y&#!.  5@@Y  ^P@P^  .5@&?         \n"
        "         .!5B&@@@@&BY~   7@@G    ^@@@P   J@@B  .B@@^     P@@P  :&@@!     ~@@@~ :B@@~    P@@&.^&@#     .&@@?         \n"
        "             :~?5B@@@@P.:&@@?     ^7!.   J@@B  Y@@#!!!!!!5##B. :&@@~     :&@@7 5@@B     .!7: G@@G!!!777G##5        \n"
        "      !          :Y@@@5!@@@7            J@@B  G@@#:            :&@@~     :&@@7 B@@G         .&@@P                  \n"
        "       @Y           J@@G^@@@J            J@@B  5@@&:           :&@@~     :&@@7 P@@#.         B@@B                  \n"
        "       #@5.         ?@@7 5@@&:       !^  J@@B  ^&@@5        !. :&@@^     :&@@7 ~@@@J       ^!!@@@?       :7        \n"
        "       #@@#?:     .!&#7  .Y&@#7:..:~JJ.  5@@&^  ^G@@P~:..:~Y7 .~@@@?.   .!@@@Y. ~B@@P~:::~?Y^ !B@@5~:::^7Y^        \n"
        "       GG^75GPYYY5PP7.     ^JG##GP5?^  7JPGPG5?:  ~YB#BGPY7: ^?Y5555?~ ^?Y5555J!  !YGBGP5?^     !YGBGP5?~         \n"RESET_COLOR);



}


#pragma endregion
#pragma region art logo

void art_logo() {


    printf(
        ""RESET_COLOR"@@@@@@&BPYJ??7??J5G&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#"YELLOW"GY?7~~~~!7JP#"RESET_COLOR"@@@@@@\n"
        "@@@&B5"RED"J?777!!!!~~^^!"RESET_COLOR"JG&@@@@@@@@@@@@@@@@@@@@@@@@&"YELLOW"GJ!~^^^^^^:::::^"RESET_COLOR"75&@@@\n"
        "@@B5"RED"J???7777777777!^:^"RESET_COLOR"?G@@@@@@@@@@@@@@@@@@@@@@"YELLOW"BJ!~~~^^^^^^^^^^::..~"RESET_COLOR"P@@\n"
        "@G"RED"YJJ????777!!777777!^^"RESET_COLOR"7P@@@"GREEN"&BG5YYJJJYYPB&"RESET_COLOR"@@@"YELLOW"P?7!~~~~^^^^:::^^^^^..^"RESET_COLOR"J@\n"
        "B"RED"YYJJ????7:"RESET_COLOR"   "RED".7777777^~?"GREEN"BB5YJ??777!!~~^~!Y"YELLOW"BB?7!!!~~^.      :^^^^^::^"RESET_COLOR"5\n"
        "P"RED"YYJJJ???7"RESET_COLOR"     "RED".!7777?7?"GREEN"Y5YJJ??????????7!^:!"YELLOW"J?77!!!~~..   .^^^^^^^^:^!"RESET_COLOR"\n"
        "P"RED"YYJJJJ??!"RESET_COLOR"  "RED".."RESET_COLOR"  "RED"!77?JY"GREEN"55YJJJ???!~!!77????77J?"YELLOW"77!!!!~~~:   .^^^^^^^^^~"RESET_COLOR"7\n"
        "B5"RED"YYJJJJJ~"RESET_COLOR"  "RED"^:"RESET_COLOR"  "RED".:7?JY"GREEN"55YYJJJJJ!   . .^7??JYYJ?"YELLOW"777!!!!!~.  ^~~~~~~^~~"RESET_COLOR"P\n"
        "@B5"RED"YYJJJJ!~~!J?7???JY5"RESET_COLOR""GREEN"P5YYYJJJJ:  :7.  ~??JYYY"YELLOW"J?7777!!!!~^~~~~~~~~!!"RESET_COLOR"5@\n"
        "@@#P"RED"YYYJJJJJJJJJJJJJ5"RESET_COLOR""GREEN"5P5YYYYJJ7   .  .^???JYYY"YELLOW"5Y??77777!!!!!!!!!!7?"RESET_COLOR"G@@\n"
        "@@@@B"RED"P5YYYJJJJJJJJY5"RESET_COLOR"P#"GREEN"#55YYYYY~  ~!  :J???JJY55"YELLOW"BB5J?77777777777?Y"RESET_COLOR"G&@@@\n"
        "@@@@@@&"RED"#BGPP555PGB"RESET_COLOR"#&@@@B"GREEN"55YYYYJJ?JJ!!!?JJJJJY5B"RESET_COLOR"@@"YELLOW"@&BG55YJJYY5PB&"RESET_COLOR"@@@@@@\n"
        "@@@@@@@@@@@@@@@@@@@@@@#P"GREEN"55YYYYYYYYYYYJYYYY5B@@"RESET_COLOR"@@@@@@@@@@@@@@@@@@@@@@@@\n"
        "@@@@@@@@@@@@@@@@@@@@@@@@@@#"GREEN"GP55YYYYYYYYYY5PB"RESET_COLOR"@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"GREEN"#BGPP55PPGB#&"RESET_COLOR"@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");


}


#pragma endregion
#pragma region paintbrush
void paintbrush() {

    printf("\n"
        "................................................................................."YELLOW"!55P7"RESET_COLOR"..................................\n"       //
        "................................................................................."YELLOW"YG"RESET_COLOR"~"YELLOW"PP"RESET_COLOR"..................................\n"      //
        "................................................................................."YELLOW"5G"RESET_COLOR":"YELLOW"PP"RESET_COLOR":.................................\n"      //
        "................................................................................:"YELLOW"PP"RESET_COLOR":"YELLOW"5G"RESET_COLOR":.................................\n"      //
        "................................................:"YELLOW"^!?JY55YYYJJJJJJYY55YJ7~"RESET_COLOR".......:"YELLOW"P5"RESET_COLOR"."YELLOW"YG^"RESET_COLOR".................................\n"         //
        "............................................:"YELLOW"~?Y55Y?!~^^"RED"!?J?7^"RESET_COLOR".....::"YELLOW"^!J55?^"RESET_COLOR"...."YELLOW"^GY"RESET_COLOR"."YELLOW"JB^"RESET_COLOR".................................\n"   //              
        "........................................."YELLOW"^7Y5Y?~"RESET_COLOR":....."RED"~P57!7YG?"RESET_COLOR".........."YELLOW"~YG7"RESET_COLOR"..."YELLOW"^GJ"RESET_COLOR"."YELLOW"?B~"RESET_COLOR".................................\n"          //              
        "......................................."YELLOW"!YPY!"GREEN"~!77!"RESET_COLOR":...."RED"YB^"RESET_COLOR" . ."RED"5B^"RESET_COLOR"..........."YELLOW"7B?"RESET_COLOR".."YELLOW"~B?"RESET_COLOR" "YELLOW"7B!"RESET_COLOR".................................\n"     //                  
        "....................................."YELLOW"!5P?"RESET_COLOR":."GREEN"?PY??YP?"RESET_COLOR":.."RED"~P57!!YG?"RESET_COLOR"............."YELLOW"YB^"RESET_COLOR"."YELLOW"~B?"RESET_COLOR"."YELLOW"!B7"RESET_COLOR".................................\n"                  ///     
        "...................................:"YELLOW"YG?"RESET_COLOR":.."GREEN"!#?"RESET_COLOR" .. "GREEN"?#!"RESET_COLOR"...:"RED"!?JJ7^"RESET_COLOR".............."YELLOW"7B!"RESET_COLOR"."YELLOW"!B7"RESET_COLOR"."YELLOW"!B?"RESET_COLOR".................................\n"          //
        ".................................."YELLOW"^PP^"RESET_COLOR"...."GREEN"^PP!^^!PP^"RESET_COLOR"....... .:"BLUE"^^"RESET_COLOR":..........."YELLOW"YB~"RESET_COLOR"."YELLOW"7B!"RESET_COLOR"."YELLOW"~BJ"RESET_COLOR".................................\n"//
        "................................."YELLOW"^G5"RESET_COLOR":......:"GREEN"7YYYY7"RESET_COLOR":.......:"BLUE"!Y5YYPJ"RESET_COLOR":........"YELLOW"?B?"RESET_COLOR".."YELLOW"?B~"RESET_COLOR"."YELLOW"^GY"RESET_COLOR".................................\n"     //
        "................................:"YELLOW"5G^"RESET_COLOR"....:::. ............"BLUE"~PP7^"RESET_COLOR".."BLUE"!B?"RESET_COLOR".....:"YELLOW"!PP!"RESET_COLOR"..."YELLOW"JB^"RESET_COLOR".:"YELLOW"GY"RESET_COLOR".................................\n"//
        "................................"YELLOW"7B7"RESET_COLOR"..:"CYAN"?5555Y!"RESET_COLOR"..........."BLUE"~G5"RESET_COLOR":...."BLUE"!B7"RESET_COLOR"..."YELLOW"^?P57"RESET_COLOR":...."YELLOW"YG^"RESET_COLOR".:"YELLOW"P5"RESET_COLOR".................................\n" //
        "................................"YELLOW"5G"RESET_COLOR":.:"CYAN"5G!   ?B?"RESET_COLOR".........."BLUE"YG^"RESET_COLOR"...."BLUE"!G5"RESET_COLOR":."YELLOW"~YPY~"RESET_COLOR"......."YELLOW"5G"RESET_COLOR":.:"YELLOW"PP"RESET_COLOR":................................\n"//
        "...............................:"YELLOW"P5"RESET_COLOR":.:"CYAN"PP    !BJ"RESET_COLOR".........."BLUE"JB7"RESET_COLOR":"BLUE"^!YG?"RESET_COLOR":."YELLOW"?GJ^"RESET_COLOR"........:"YELLOW"PP"RESET_COLOR":.."YELLOW"5G"RESET_COLOR":................................\n"//
        "...............................:"YELLOW"P5"RESET_COLOR"..."CYAN"^YPYJ5P?"RESET_COLOR":..........:"BLUE"7YYYY7^"RESET_COLOR".."YELLOW"~BJ"RESET_COLOR"..........:"YELLOW"PP"RESET_COLOR"..."YELLOW"YG^"RESET_COLOR"................................\n"  //
        "................................"YELLOW"5G"RESET_COLOR":....:"CYAN"~~^"RESET_COLOR". ....................."YELLOW"~BY"RESET_COLOR"..........:"YELLOW"PGJJJPG^"RESET_COLOR"................................\n"      //
        "................................"YELLOW"7B7"RESET_COLOR".......:"PURPLE"!?J?!"RESET_COLOR":.................."YELLOW"?B!"RESET_COLOR".........:"YELLOW"5G!"RESET_COLOR"~"YELLOW"!PP"RESET_COLOR":................................\n"       //
        "................................:"YELLOW"5G^"RESET_COLOR"....."PURPLE"!P57!75P!"RESET_COLOR".................:"YELLOW"PP"RESET_COLOR":........."YELLOW"YG"RESET_COLOR":.:"YELLOW"P5"RESET_COLOR".................................\n"
        "................................."YELLOW"^G5"RESET_COLOR":...:"PURPLE"PP    G5"RESET_COLOR".....::..........."YELLOW"JB~"RESET_COLOR"........."YELLOW"JB^"RESET_COLOR".:"YELLOW"GY"RESET_COLOR".................................\n"
        ".................................."YELLOW"~G5"RESET_COLOR":..."PURPLE"7GY! !YG!"RESET_COLOR".."YELLOW"^?5555?^"RESET_COLOR"........"YELLOW"7B!"RESET_COLOR"........."YELLOW"?B!"RESET_COLOR"."YELLOW"~BJ"RESET_COLOR".................................\n"
        "..................................."YELLOW"^5G!"RESET_COLOR"..."PURPLE"^7JJJ7^"RESET_COLOR".."YELLOW"^G5~"RESET_COLOR"::"YELLOW"~5G~"RESET_COLOR"......."YELLOW"?B~"RESET_COLOR"........."RED"?B5Y5BY"RESET_COLOR".................................\n"
        "....................................:"YELLOW"?G5~"RESET_COLOR".........."YELLOW"!BJ....?B!"RESET_COLOR"......:"YELLOW"PP"RESET_COLOR":........"GREEN"!BJ"RESET_COLOR":"RED"^^?B7"RESET_COLOR"................................\n"
        "......................................"YELLOW"^JP5!"RESET_COLOR":........"YELLOW"7P5JJ5P7"RESET_COLOR"......"YELLOW"^5G~"RESET_COLOR"........."GREEN"YG^"RESET_COLOR"...:"RED"PP"RESET_COLOR":...............................\n"
        "........................................:"YELLOW"75PY7^"RESET_COLOR":......"YELLOW"^!!~"RESET_COLOR":....."YELLOW"^?GY^"RESET_COLOR".........:"GREEN"5P"RESET_COLOR":...."RED"5P"RESET_COLOR":...............................\n"
        "..........................................."YELLOW"^7J55Y?7!^^"RESET_COLOR"::..::"YELLOW"^!?5PY~"RESET_COLOR"............"GREEN"JB"RESET_COLOR"~..."GREEN"^GY"RESET_COLOR"................................\n"
        "..............................................."YELLOW"^~7?JYY55Y555YJ?~"RESET_COLOR":.............."GREEN"^G5"RESET_COLOR"..."GREEN"JB~"RESET_COLOR"................................\n"
        "......................................................::::::...................."GREEN"!BJ"RESET_COLOR"."GREEN"?B?"RESET_COLOR".................................\n"
        "................................................................................."GREEN"!GPG?"RESET_COLOR"..................................\n"
        ".................................................................................."GREEN"~J!"RESET_COLOR"...................................\n");





}

#pragma endregion
#pragma region Myth logo

void myth_logo() {

    printf(CYAN"                                                                                                                           \n"
        "              YJ     :P~ .!?.  .7!~:~?^^~ .!?:  .!?:   ^^^^^~.  .77.    .^^^^~^    .^^^^~7.^?^   ~!.     \n"
        "             .J?J   ^7Y?  .7Y..7~.  ^G: .  !G.   7P  :J^   .^5~  JY    ~J:   .!5: !J:    :. ^Y! ~7.     \n"
        "             ^? JY ^? !Y    ^5?.    ^G.    !P^:::?5  7P      ?Y  JY    5?      P7 P7    ~J^   JY~         \n"
        "             ?7  ?57  ^G:    5J     ^B:    7G    7P  .Y7.  .:J^  J5  . ^Y~.  .~?. ~Y~.  ~B.   ~B.             \n"
        "            .!~.  ~.  .7~.  .!!.    ~7^    ~7:   ~7:   ^^^:::    ~7^:^. .^^^:::    .^^^:^~    ~7^            \n"
        "                                                                                                                                                    \n" RESET_COLOR);





}




#pragma endregion
#pragma region bolt
void bolt() {

    printf(YELLOW"                                                                          \n"
        "                                           P@&&@&&&&@&&&@@@@7                                        \n"
        "                                          ?@@@@@@@@@@@@@@@@J                                         \n"
        "                                         ^&@@@@@@@@@@@@@@@5                                          \n"
        "                                         G@@@@@@@@@@@@@@@P                                           \n"
        "                                        ?@@@@@@@@@@@@@@@B.                                           \n"
        "                                       ^&@@@&&&@&&@&&&@B:                                            \n"
        "                                       G@@@@@@@@@@@@@@&^                                             \n"
        "                                      ?@@@@@@@@@@@@@@@@@~                                              \n"
        "                                     ^&@@@@@@@@@@@@@@@@7                                               \n"
        "                                     G@@@@@@@@@@@@@@@@7                                                \n"
        "                                    ?@@@@@@@&&&&&&@#JJJJJJ???????:                                  \n"
        "                                   ^&@@@@@@@@@@@@@@@@@@@@@@@@@@&?                                    \n"
        "                                   G@@@@@@@@@@@@@@@@@@@@@@@@@@P:                                     \n"
        "                                  ?@@@@@@@@@@@@@@@@@@@@@@@@@&?                                       \n"
        "                                 ^@@@@@@@@@@@@@@@@@@@@@@@@@G:                                        \n"
        "                                 P&&&&&&&&&&&#&@&&&&&@&&@&?                                          \n"
        "                                 ::::::::::::.P@@@@@@@@@G^                                           \n"
        "                                             !@@@@@@@@@J                                             \n"
        "                                            :&@@@@@@@G^                                              \n"
        "                                            P@@@@@@@J                                                \n"
        "                                           ?@@@@@@B^                                                 \n"
        "                                          ^&@@@@&J                                                   \n"
        "                                          G@@@@B~                                                    \n"
        "                                         J@@@@Y.                                                     \n"
        "                                        ~@@@B~                                                       \n"
        "                                       .B@@Y.                                                        \n"
        "                                       Y@#!                                                          \n"
        "                                      !@5.                                                           \n"
        "                                     :G!                                                             \n"
        "                                     !:                                                              \n" RESET_COLOR);





}

#pragma endregion
#pragma region geography LOGO
void geography_logo() {
    printf(GREEN"        :?Y55?~                                                                           ?#BP.                    \n"
        "       Y&@@@@@@G                                                                          ?@@@:                    \n"
        "      G@@@   #@@#                                                                         7@@@^                    \n"
        "     Y@@@Y   Y@@@                                                                         7@@@^       \n"
        "    :&@@&    !555    5@@&@@&7   !B@@#@@G:   ~B@@&@#G5   BG7#@@@^  J@@&@@@J   :@@@B&@@@B   !@@@B@@@@5.  B@@?  !@@&:  \n"
        "    !@@@G           P@@G  @@#  7@@@! P@@G  !@@@  @@&:  &@@@?    ?@@?  @@&:  ^@@@#  #@@P   7@@@@J7@@@7  J@@P  B@@7   \n"
        "    !@@@G  B@@@@@@  @@@   @@@  @@@P  ?@@@  &@@    @@B   B@@P       7?JP@@@^  ~@@@   P@@G  7@@@J :&@@J  :@@&.!@@G    \n"
        "    ^&@@&    J@@@&  @@@BGP5J?  &@@J  Y@@  @@@@   B@@B   B@@P     7B&&BB@@@^  ~@@@   #@@?  ?@@&: ^@@@?   5@@?G@@~    \n"
        "     J@@@5  !&@@P  ~@@@? ^PP!  G@@G :&@@  G@@@7 B@@@B   B@@P     @@&  7@@&:  ~@@@  P@@G   J@@#. ^@@@7   :#@&@@P     \n"
        "      7B@@@@@@#?    7#@@#@@G^  ^B@@#&@&?   J#@@&5J@@P   #@@P     Y&@&&#@@&   ~@@@@@@&5.   5@@B  ~&&@~    ^#@@@^     \n"
        "        ^7?J?~       .~77!:       ^7J?!.         5@@?   ~77~       ^~^.~7!   ~@@@7~!                      Y@@5      \n"
        "                                           B&5  ?@@#.                        ~@@@^                      :&@@^      \n"
        "                                           !G@@@@@B^                         ^@@@!                      5@@P       \n"
        "                                                                             .7?J^                    ~!7^    \n" RESET_COLOR);






}


#pragma endregion
#pragma region geography
//void geography();


#pragma endregion
#pragma region WORLD
void world() {

    printf("                                       .7!^:.                                                \n"
        "                                               .7JY55Y?~.                                            \n"
        "                               "BLUE" .:~!7?YYYYY5YYJ?!^."RESET_COLOR".^?5P57:                                         \n"
        "                         "BLUE"   .^?5P5J?J##~::::^^~7JY55J!. "RESET_COLOR".!YGY~                                       \n"
        "              "GREEN"            ~YGPJ~: ^YG?:          "BLUE"  .:!YP5!. "RESET_COLOR":?G5~                                     \n"
        "                   "GREEN"     .7PG?^     ?B5^                "BLUE" .!5GJ: "RESET_COLOR".?BY.                                  \n"
        "                      "GREEN" ~GG!.       .~BB.                  "BLUE" ^YB?. "RESET_COLOR":PB^                                 \n"
        "                      "GREEN"JB?.       ^YP57:                 "BLUE"   :JBBG^ "RESET_COLOR" Y#!                                 \n"
        "                    "GREEN".5B^    .^~~?#Y:            :!JY5YYYJ5GJ^.Y#~  "RESET_COLOR"J#~                                \n"
        "                 "GREEN"   5B:   ~5PYJJY!            ^5PY7^:.:^~^.  "BLUE"   Y#^  "RESET_COLOR"5B:                               \n"
        "                   "GREEN"7&!   7&J.                .GG.              "BLUE" .GG  "RESET_COLOR":#Y                               \n"
        "                  "GREEN".BP    !P55Y:              :#Y                "BLUE" !&!  "RESET_COLOR"J#:                              \n"
        "                 "GREEN" ~&B7.    .^BP~!!!~.         !B5!^:^~^      "BLUE"    .B5  "RESET_COLOR"~&!                              \n"
        "                 "GREEN" !&J5PY!:.  :?J???5GJ~:.      .!JYYJG#:      "BLUE"  ^PBB^ "RESET_COLOR"^&7                              \n"
        "                "BLUE"  ~&! "GREEN":!Y5PY7^      :7Y55Y:      ""    ^#Y    "BLUE" .^JBY.GP "RESET_COLOR"~&!                              \n"
        "               "BLUE"   .B5    "GREEN"  :~?5G?.       ?@!        ~#Y   "YELLOW" ~YP5J~.:BG J#:                              \n"
        "                  "BLUE" ?#^        "GREEN" ~#Y     .J#?        ~#J  "YELLOW"  !&#5YYYYY55YGBJ!^.                           \n"
        "               "BLUE"    .PG.        "GREEN" 5B.   :PB^         J&: "YELLOW"~YP5?77??JJJ?J??77J5PJ^                        \n"
        "                  "BLUE"  :GP.       "GREEN"J#?   .GG.          "YELLOW":GPPP7~7Y5Y?7~7J7~!?Y55?!7PP~                       \n"
        "                  "BLUE"   .PB~      "GREEN"?BJ:  ~&!           "YELLOW"5#7^JGY~.   :BG#!   .~YGY^7B5:                    \n"
        "                     "BLUE"  ?BY^     "GREEN":PB~.:#Y         "YELLOW".PG:!#Y:      5#:5B:     :J#7:PG:                    \n"
        "                       "BLUE" :YBY~   "GREEN" .J555GG^     "YELLOW"   PB.7&7       !&7 :#Y       !#J.GG.                   \n"
        "                        "BLUE"  :?PPJ~.   ..          "YELLOW"!&!:#J    .:~B5:~:!&?::     7&~^&7                   \n"
        "                           "BLUE"  :75P5J7!^::....::^"YELLOW"~P#.7&^~?Y555YY?YGJP57JY555J?~:BYGP                   \n"
        "                    "RESET_COLOR"       ??^..:~7JYYY55555YYJ"YELLOW"P#.?&^?PGGP5YJ!YBJPB7?J5PGGPY:B5 GG                   \n"
        "                       "RESET_COLOR"    ~J5PY?!^..          "YELLOW"7&!^&?   ..::?&!:!~!#J^^:.   !&!:&J                   \n"
        "                          "RESET_COLOR"    .^7JYY55Y55Y55555Y"YELLOW"GG.J#~       5B:  GP       ^B5 5#:                   \n"
        "                            "RESET_COLOR"         :5#7:!BG~  :"YELLOW"BP.?#?.     :#5 ?&~     .7BY.Y#~                    \n"
        "                                "RESET_COLOR"  .~JG5^   .JG5?^^"YELLOW"PG~~5G?:    !#J#Y    :7PP~^PB~                     \n"
        "                       "RESET_COLOR"      ^7JY5P5?:       .~?Y5P#"YELLOW"#5~~J55J!~:?5Y^^!J5PJ~~YBJ.                      \n"
        "                       "RESET_COLOR"     ?#J~^.                .:7#"YELLOW"#PJ7!7?JYJJJYJ?7!7JPP7.                        \n"
        "                       "RESET_COLOR"     Y#YJJJJJJJJJJJJJJJJJJJJJJGG^"YELLOW"!JY5YYJJJJJYY55J7:                           \n"
        "                        "RESET_COLOR"    .^~~~~~~~~~~~~~~~~~~~~~~~^:   "YELLOW" .:^^~~~~^:.                               \n"RESET_COLOR);



}


#pragma endregion
#pragma region History logo
void history() {

    printf(YELLOW "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^:  \n"
        "?5^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^^~^^^^^^^~~~~~~~~^^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!5. \n"
        "JJ                               .~^^~~!!!!!!!!!!!!!7~                               .Y: \n"
        "JY                              :5~:::::::..........:??.                             .Y. \n"
        "JY                         ..:^!P?~~!!~~~~~~~!~!!!7!~~YY~~!~^^:.                     .Y. \n"
        "JY                    .^~777?P~^:::.J?.:::::::::.:P~.:.:::P?^~!!7J!^                 .Y. \n"
        "JY               .^!77JP^:."BLUE"  5^     !Y           !Y      .5.  "YELLOW"  7Y^7?!.              .Y. \n"
        "JY             ~7?P~. "BLUE" 5^    7J     :P.          ?7      ~5    :5.  "YELLOW".55!             .Y. \n"
        "JY           :Y7. "BLUE"~Y.  ^5.   :P.     5^          5~      ?7    Y!  "YELLOW" J7.7Y^           .Y. \n"
        "JY          ~5^   "BLUE" !Y.  J7    Y!     ?7         .P:      5~   !Y   Y7  "YELLOW" :Y7          .Y. \n"
        "JY         ^5:     "BLUE" 7Y  .P:   !Y     !J         :5.     :P.  .P^  J?    "YELLOW"  J?         .Y. \n"
        "JY        :5:       "BLUE" ?J  !J   .P.    ^P.        ^5      ~Y   ??  ?J      "YELLOW"  ??        .Y. \n"
        "JY        5! ..       5?~!G7!!!5?!77775777777777?5!!!!!!YY~^~G^.!Y          J7       .Y. \n"
        "JY       ?5!"BLUE"77777!!7!?"YELLOW"5^^^:::......... ................::^^^~!!7G"BLUE"!~!!!!!7777?"YELLOW"B^    "YELLOW"  .Y. \n"
        "JY      ^5.          ~Y                                         5"BLUE"!::::...... ~5     "YELLOW" .Y. \n"
        "JY      Y?"BLUE".::.:......"YELLOW"~P^~~~~~~~~~~!!!!!!!!!!!!!!!!!!!!!~~~~~~~^:5"BLUE"~ ...::::^^^:"YELLOW"P^    "YELLOW" .Y. \n"
        "JY     :P7"BLUE"!!77777777!"YELLOW"JP^^^^:::::::::::::::::::::::::::::::^^^^~~55"BLUE"!77!!~~~~~~~YJ    "YELLOW" .Y. \n"
        "JY     7J            :5.                                        ??            :5.  "YELLOW"  .Y. \n"
        "JY     5^            :P:    .::::..               .^~~!~~:.     !J             5^  "YELLOW"  .Y. \n"
        "JY    :P"BLUE"::::::...... ."YELLOW"5^ !J555555YYJ~           :Y5YYJJJY55Y~   !J       ..... ??    "YELLOW".Y. \n"
        "JY    7Y"BLUE"~!!!77777!!77!"YELLOW"P~.7~:.    :~?7   .       .~^....    :^   !P!77!!!!!!!!!!YY    "YELLOW".Y. \n"
        "JY    5^         !7777P?    .75GP5?^    7?       ^?G###G?.      !5777?~        .5.   .Y. \n"
        "JY   :G"BLUE"7!77!!!!~YJ.  "YELLOW" 75 :^75#@@@@&?P^  :P.     J5?@@@@@G57!.   ?Y.  .Y7.::^^^^~G^   "YELLOW".Y. \n"
        "JY   7Y"BLUE" ....::::P~   "YELLOW" .5.:~~7YB##BP7!.   5:     .^!YPP5J!^::.   J7    !G!!!~~~^^Y7  "YELLOW" .Y. \n"
        "JY   Y~         J?     5^      ..        5^                     Y^    7J        !J  "YELLOW" .Y. \n"
        "JY  .P:         ^5     J7               :5.                    .P:    Y~        ^5. "YELLOW" .Y. \n"
        "JY  ^P"BLUE"^^~~~~~~!!~P7    ~5               Y!                     ^5    ~5....     .P:"YELLOW"  .Y. \n"
        "JY  ^5"BLUE"^^^^^^^^^^:^5!   .5:             ~Y                      7?   :5?!777777!!!G^ "YELLOW" .Y. \n"
        "JY  ~Y            :J?~~~G!             ?J.   .::!:             P7::~Y~           J? "YELLOW" .Y. \n"
        "JY  ^P"BLUE"!777777777!!!!?JJJY5             .!^   ~!!!.            ~GJYYY?777777!!!!!!YJ  "YELLOW".Y. \n"
        "JY  ~Y"BLUE"......             5^               ...                 5~     ............!Y  "YELLOW".Y. \n"
        "JY  ~Y                   7J             ~?7!777!.            !Y                  ~Y "YELLOW" .Y. \n"
        "JY  ~Y      ....:::::::^^~G:          ^Y7:. ..:75~          .5^ .                ~Y  "YELLOW".Y. \n"
        "JY  ^P"BLUE"!777!!!!!!77!!~~~~~^7Y          GY~!!!!!!!55          YY!!!!!!!!77777777777YY  "YELLOW".Y. \n"
        "JY  ~Y"BLUE" .                   ??         ^J7~:..:^7J:         ??                    ~Y  "YELLOW".Y. \n"
        "JY  ~Y   ......:::^^^^~~~!!!PJ.         :~!!!!~:         .Y5~^^^^^^^:::::....... !Y "YELLOW" .Y. \n"
        "JY  ~P"BLUE"!77777!!!!!!~~~^^^^^::.~Y!                        ~Y!:^^~^~~~~!!!!!!!!!!!!!YY "YELLOW" .Y. \n"
        "JY  ~Y                        .7J~.                   ^J?.                       ~Y "YELLOW" .Y. \n"
        "JY  ~Y                           Y5!^.             .~?PJ                         ~Y "YELLOW" .Y. \n"
        "JY  ^5"BLUE"~:         ......::^^^^^~~~JJ:7?7~^..    .:^7?!.!5^~^^^^^^^^^^^^::.....    ~5 "YELLOW" .Y. \n"
        "JY   :~77?J7"BLUE"!!777777!!!!!!~~^^^^:7Y   :^!!77!!77!~:   ~5^^^^^^^^^^~~!!!!!!!!?Y5J77~ "YELLOW" .Y. \n"
        "JY       ^?J!.                   ^5                   ~5                  .7?!^.    "YELLOW" .Y. \n"
        "JY         .!Y"BLUE"^.:::::^^^^~~~~~~!!7G.                  :P~^^:::::::...... ~Y~      "YELLOW"   .Y. \n"
        "JY           :G?"BLUE"~!~~~~~~~^^^^^^::^P:                  .P!~~~~~~!!!!!77777P:       "YELLOW"   .Y. \n"
        "JY            ^5.                 5:                   5:               ^5          "YELLOW" .Y. \n"
        "JY             !Y                 5:                   5^               !J           "YELLOW".Y. \n"
        "JY              J7                5^                   Y!.....          Y7          "YELLOW" .Y. \n"
        "JY              .P:   .....:::^^^^P^                   ?P77!!!!!!!777777P.        "YELLOW"   .Y. \n"
        "JY               !P"BLUE"!7!777!!!!!~~~~P:                   7J           ...Y?       "YELLOW"     .Y. \n"
        "JY                Y!              5:                   ~Y             ~5.          "YELLOW"  .Y. \n"
        "JY                :P.            :P:                   ^P^::::::::::.^5:           "YELLOW"  .Y. \n"
        "JY                 7Y"BLUE"^~!!!!!!777!?P                    .G7~~~~~~~~~~?G^       "YELLOW"       .Y. \n"
        "JY                  J5"BLUE"^:::.....  !J                     5^         ~Y:        "YELLOW"       .Y. \n"
        "JY                   7J.         Y~                     J?        7J.              "YELLOW"  .Y: \n"
        "?5~!!!!!!!!!!~~~~~~!~~JP!!!!!!!!7G!!!!!!!!!!!!!!!!!!!!!!?5!!!!!!!55!!!!!!!!!!!!!!!!!!7Y. \n"
        ".:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::.:::::::::::::::::::. \n" RESET_COLOR);
}

#pragma endregion
#pragma region history  
void history_logo() {


    printf(CYAN"GGGGG5GGGGGGBBBGGGGGGGGGPGGPPPPPPPPPPP5555PPP5555PP5555PGGP5YYY5PP5555555555PPGP5YJJYPGGPP555YYY5PPG55555PPP5555PPPGGGPPPPPGGGGGGGGGGGGGGGGGGGGG5GGGGG\n"
        "GGGGG5GGGGGGGBBBGGGGGPPPPGGPPPPGPPPPGP~..!GGG~  !G5:. ?BY^..::. YY....  ....5G?:  .. .~YGG^  .....^?P~ .:PBP^..?PPPPPGGGGGGGPGGGGGGGGGGGGGGGGGGG5GGGGG\n"
        "GGGGG5GGGGGGGGGBBBGGGGGGPGGGGGGPPPPPGG~  !555~  7BG:  JB^  .?5PYY55PP^  !PP5P!  ^5GPJ.  JB~  !BGY.  YB!  ~P~ .JGGPPPPPPPPGGGGGGGGGGGGGGGGGGGGGGG5GGGGG\n"
        "GGGGG5GGGGGGGGGGGGGBBBGGGGGGGGPPPPPPGG~ ..:...  !BG:  JBP7^.  :~YGPGG~  7GPGP.  JBGGB^  ~B~  ^77~ .~PGG?. : :YGPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGG5GGGGG\n"
        "GGGGG5GGGGGGGGGGGGGGGGGGGPPPPPPPPPPPGG~  7GPG~  7BG:  JG75GPY!   PGPG^  7GPPG~  ^PGGY.  JB~  :!.  ?BGPPB?  .5GPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGG5GGGGG\n"
        "GGGGG5GGGGGGGGGGGGGGPPPPPPPPPPPPPPPPGG^. !GGG~  ~GP.  ?B~ :::. :7GPPP^  !GPPPP7:  :. .^JGG^  !BJ. .JPPPGJ..:5GPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGG5GGGGG\n"
        "GGGGG5GGGGGGGGGGGGGGGPPPPPPPPPPPPPPPPP5555PPPY55YP5Y5Y5PP5YYJY5PGPPPPYYYYPPPPPGP5YJJY5GGPPY55YPG55YYPPPP55555PPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGG5GGGGG\n");


}

#pragma endregion
#pragma region not a vagay vagay 
void trophy() {

    printf(BLACK".....  ............"YELLOW"~J!^^"BLACK"........................................:"YELLOW" ^^?7"BLACK".................\n"
        "................."YELLOW"!J5?Y7??~"BLACK"......................................"YELLOW"^77?J?5YJ"BLACK".................\n"
        "...............:"YELLOW"!?!!777?Y5~"BLACK"....................................."YELLOW"?J777!7?5?"BLACK":...............\n"
        "..............:"YELLOW"?7!?Y7~7Y7YY^~!!!777!77777777777777777777777!!   "YELLOW"Y?5J~!77!Y5^"BLACK"..............\n"
        ".............."YELLOW"77775^"BLACK".."YELLOW"?Y?J5!777!~!!!~^"RESET_COLOR":"YELLOW" ^ ~~!!!!!!!!!!7777 ? ? ? ? 777PY7Y5^ "YELLOW""YELLOW""BLACK"..............\n"
        ".............."YELLOW"?!!JJ"BLACK"...:"YELLOW"^~^J?777~^~!!~^"RESET_COLOR":"YELLOW"^~~~~~~~~~!!!!!77????7775^~~^"BLACK"..."YELLOW"~?~J5"BLACK"..............\n"
        ".............."YELLOW"~?^?Y"BLACK"......."YELLOW"7?~!!~~~~~^^^"RESET_COLOR":::"YELLOW"^^^^^^~~~~~!!!7777!!7Y"BLACK"......."YELLOW"77^Y?"BLACK"..............\n"
        "..............."YELLOW"?7^Y7"BLACK"......"YELLOW"^J~!!~~~~^^^"RESET_COLOR":.:::"YELLOW"^^^^~~~~~~!!!7777!!Y7"BLACK"......"YELLOW"^J^?Y"BLACK":..............\n"
        "................"YELLOW"77~J?"BLACK":....."YELLOW"J7!!~~~~^^"RESET_COLOR":..:::"YELLOW"^^^^~~~~~~!!!777!!!5"BLACK":....."YELLOW"~? ~JJ"BLACK" : ...............\n"
        "................."YELLOW"~7!?J~"BLACK"...."YELLOW"!J!!!~~~~^"RESET_COLOR"::.::::"YELLOW"^^^~~~~~~!!!777!!J?"BLACK"...."YELLOW"^777Y7"BLACK".................\n"
        "..................:"YELLOW"!77??~"BLACK"..."YELLOW"J7!!~~~~^"RESET_COLOR":::::::"YELLOW"^^^~~!~~!!!777!!!5^"BLACK".."YELLOW"^!77J?"BLACK":..................\n"
        "....................:"YELLOW"!77??~"BLACK"."YELLOW" ^ Y!!!~~~^^"RESET_COLOR":::::"YELLOW"^^^~~~~~~!!!7 ? 7!!Y7"BLACK"."YELLOW"   "BLACK"....................\n"
        "......................:"YELLOW"!?7?J^7J!!!~~~^^"RESET_COLOR"::::"YELLOW"^^~~~~~~!!!7?7!!?Y:!??J?^"BLACK"......................\n"
        "........................:"YELLOW"!7~Y7J?!!!~^^^^^^^^~~~~~~!!!7?7!!75~?JY?^"BLACK"........................\n"
        "...........::::::...:::..."YELLOW"J7!YYP7!!!~^^~~~~~~~~~~!!!7777~7G5??JP^"BLACK".::......................\n"
        "..........:::.....:::.:::."YELLOW"~JJ?P?JJ!77!~~^^^^~~~!!!!7?777J5?Y?Y5!"BLACK":::::::::::::.............\n"
        "..........:::....:::....::"YELLOW"~!YJP^.7J777!!!~~!!!!!!!77!!?5J: ??P?!^"BLACK"...:::.::::..............\n"
        "...........::::::::::::::"YELLOW"~Y5YYJ::.^?J?!!7!!!!!!77!!!7YY!.::~YJY5Y"BLACK".:::::::.:::.............\n"
        ".........................."YELLOW"^!!^......^!???7!!!!!!!7JY?~......:~!~"BLACK":.........................\n"
        "......................................."YELLOW"^!7????J5J7~"BLACK":......................................\n"
        "..........................................:"YELLOW"Y!7JG^"BLACK".........................................\n"
        "..........................................."YELLOW"JJ?5Y"BLACK":.........................................\n"
        ".........................................:"YELLOW"?7^~7JJ"BLACK".........................................\n"
        ".........................................."YELLOW"!?J?J?!"BLACK".........................................\n"
        "..........................................."YELLOW"~5?5~"BLACK":.........................................\n"
        "........................................"YELLOW"!7~^^~!???7"BLACK".......................................\n"
        "........................................"YELLOW"~J7!!!7JYJ!"BLACK".......................................\n"
        ".........................................:"YELLOW"~J?75?~"BLACK":........................................\n"
        "......................................:"YELLOW"7777?~7YJ7?J~"BLACK"......................................\n"
        "...................................."YELLOW"^~??!~7?J7???JJY?~"BLACK":...................................\n"
        "................................:"YELLOW"^!????7^~!?7??J?JJJJYY?~^"BLACK"::::::::::......................\n"
        "..........................::"YELLOW"    7YJ?7~~~~!!!7?????????JJY55J"BLACK":...............\n"
        "...........................::"YELLOW"   !7777????????JJJJYJJJJJ??7!!"BLACK"::...............\n");
}
#pragma endregion 
#pragma region game over

void game_over() {

    printf(RED
        "                  .^^~Y#@&&&@@@@@@@@@@@@@#!:^^^?B@&&&@@@@@&&&&&&&?:  ^?G@&&&&&@@@@@&&&&&&&&@@@@@&&&&&&#7.  ^^^?G@&&&&@@@@@@@@@@@@&Y^                   \n"
        "                  ^5&&&&@@@@&##&&&&&&&&&BJ!^J#&&&@@@@&###&@@@@@@@&7. 7B&@@@@@@&###&@@@@@@@@&###&@@@@@@@#! .?#&&&@@@@&###&&&&&&&&&57^                   \n"
        "                   .?G@@@@@@#B?~^^^^^^^^^^  .!P&@@@@@&#Y~^?G@&&&@@#G^.^Y#@@@@@&#P!~?P&@@@@@##J~~JB@@@@@&#P:.~5&@@@@@&#5~^^^^^^^^^^.                    \n"
        "                    ^5@@@@@&@@J!~!!!!!!!!!:  .J&@@@@@@@G?!?P@&@@@@@@J: 7B@@@&&@@B7 :Y&@@@&@@@5~ !G@@@@@@@&?: ?#@@@@@@@BJ!!!!:                          \n"
        "                   !YG@@&&&@&GYP&@@@@@@@@#5~~JP&@@&&&@@@@@@&@&&&&@#P?~?P#@&@&&@B57!JG&@&&&@&GJ!75B@&&&&@#P?~?P&@&&&&&@@@@@@#5~.                        \n"
        "                   7B@@@@@@@#77B#@@@@@@@@P!.~P@@@@@@@&####&@&@@&@@B!:^Y@@@@@@@@Y~.!G@@@@@@@#7^.J&@&@@@@@P!.~5@@@@@@@@######5!:.                        \n"
        "                   .J#@@@@@@&5. ^P&@@@@@@#J  !B@@@@@@@G!^:Y#@@@@@@&5. ^G&@&@@&@B7  7B@@@@@@&G^ .5&@@@@&@#Y. ~G&@@@@@@G7::::::                          \n"
        "                  !J5B@@@@@&##YJYP&@@@@@#B57?5G@&&@@&BG?7J5#@@@&@&GP7?YP&@@@@@BBY7?5B@@@@@&BG?7J5#@@@&@#G57?5G&@@@@@&&5?777777?7^                      \n"
        "                  ^Y#&@@@@@@@@@@@@@@@@@@P!.!P@@@@@@@@J^.?#@@@@@@@B7:^5@@@@@@@@5~.7G@@@@@@@&?^:J&@@@@@@@G!::7B&@@@@@@@&@@@@@@@@@@#!.                    \n"
        "                    :?G#################5! .7GB#####BJ^ ^YB######G?..~PB######5! :?G######BJ: ^5B######P7   .~PB################G?:                    \n"
        "                              \n"


        CYAN  "                        .^!Y#&&&&&&&&&&&&&&&G~.  .Y#&&&&&&#J: ~P&&&&&&&#!. ^^?G&&&&&&&&&&&&&&&&&#?: !P&&&&&&&&&&&&&&&&&#Y^.                            \n"
        "                        :?B#@@@@@@@@&&&&@@@@@&B!:.!B&@@@@@@G?.:J&&@@@@@@5! ~P#&@@@@@@@@&&&&&&&&&@P! ^Y&&@@@@@@@@&&&@@@@@&&P~:                          \n"
        "                         :7#@@@@@@@G?!!Y&@&@@@&#7..!G@@&@&&&G~ :?&@@@@@&&J: ~5@@@@@@@&Y7!!!!!!!!!^   ^J&@@@@@@@57~!P@@&@@@&B~.                        \n"
        "                          J#@@@@@@@5: ^P@&&@@@@&?. 7B@@@@@@@B^ .Y&@@@&@@@Y: ~P@@@@@&&#7^^^~:         :5&@@@@@@&J^^?G@@@@@@&#!.                       \n"
        "                         ~?Y5&@&&@&BB5?JYG@&&@@#GBJ?J5B@&&@@BBPJJYP&@&&@&BB5?JYG@@&&&@@@&&&#GG?:     !JYP&@@&&@@@&&&&&@&@BBG?!~.                       \n"
        "                         7B@@@@&@@#7::J&@@@@@&@P!.~P@@@@@@@&J^.?#@@@@@@@#7:^Y@@@@@@@@&#&&&&B7::.    .J#@@@@@@@&#&&&@@@@@@5!..                          \n"
        "                         :J#&@@&&@&Y^ ^P&@@@@&@BJ .!B&@@@@@@P! :Y#&@@@@@#Y: ~G&@@@@@@GJ~~~~~^        ^5#@@@@&@#Y!~!B&@@@@&&Y~                          \n"
        "                        :!?5&@&&&&&&577JG@&&@@&#B7!7Y#@&&&@&&G77?P&@@@@@##J!7YB@@&@@&&B7!~~~~!~!^.  ^!JP@&@&@&##7!7YB@@&&@&#G!.                        \n"
        "                        :?#&@@@@@@&&&@@@@@@@&#B?~^Y&@@@@@@@&&&@@@@@@@@##Y!:~P&&@@@@@@&&@@@@@@@@@@Y: !G@@@@@@@&J~^J#@@@@@@@B7^^.                        \n"
        "                          :7B#&&&&&&&&&&&&&&B?~^..!G#&&&&&&&&&&&&&&&&#J!^:   ^Y#&&&&&&&&&&&&&&&&&P! :J#&&&&&&#J: ~P#&&&&&&G7                           \n"
        "                            .^^^^^^^^^^^^^^^^^     .:^^^^^^^^^^^^^^^^^^.       :^^^^^^^^^^^^^^^^^^:   .^^^^^^^^.   :^^^^^^^^            \n"

        RESET_COLOR);


}

#pragma endregion




#pragma endregion 



