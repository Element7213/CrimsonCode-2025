#include "Header.h" 




#pragma region security pic

void pic_security() {
    printf(
        RED  // Background Red
        "BBBBBBBBBBBBBBBGGGGGGGGGGGGPPPPPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGGGGPJ ? !!? YGBBBB############BBPPGGGGG\n"
        CYAN  // Details/Outfit Cyan
        "BGGGGGGGGGGGGGGGGGGGGGGGGPPPPPPPPPPPPPPPPPPPPPPGGGGGGGGGGGGGGGGGGJ7!7J5PGB####&&&&&&&&&&&&##BPPBGGGG\n"
        PURPLE  // Face Purple
        "5PGGGGGGGGPPPPPPGGGGGGGPPPPPPPPGGGPPPPPPPPPPGGGGGGGGGGGGGPPGGGPJ7!?5GBB#&&&&&&&&&&&&&&&&&&##B5PGGGGG\n"
        GREEN  // Hair/Head Green
        "5GB#####BBBBGGGPPP555PPPPPGGGGGGGGGGGPPPPPPPPPPPPPPPG5Y?7?YY55J7YGBBB#&&&&&&&&&&&&&&&#&&&&##B5PBGGGB\n"
        CYAN  // Details Cyan
        "P#&&####&&######BBBGGP5555PGGGGGGGGPPPPPPPPPPPPJYY??!~^~!JY5555PGGGB#&&&&&&&&&&&&&&&#&&&&##BBYGGGGGB\n"
        "P#&#####&&&&&&&&#####BBBGPP555PPP5JJJJ?J?7?JYYJ~~~~~7JYPGGBGGGGGGGGGGGB#######&&&&&##&&&&##BGYBGGGGG\n"
        PURPLE  // Face Purple
        "PB&######################BBGGPPGGGGGGGG5YJJYJ?J7!7?YPGGGGGGPPGGGGGGGGGGPGB###&&&&&&###&&&#BB55GGGGGG\n"
        "5G&&#####################BBBBBGGGGGGGGGGGGGGGGB5JYPGGGGGPPPPGBBBBBBBBGGGGGGB####&&&##&&&&#BBYPGGGGPP\n"
        CYAN  // Details Cyan
        "?P#&##################BGGBBGGGPPPPPGGGGGGGGGGGGYJPGGGPPPPGB#&&&&&&&&&#BBGBGGG#&###&##&&&&#BPYPPPPPPP\n"
        "JB&&##&############B5PBBGPPGGBBBBBBGGPPGGGGGGGYPGPPPPPGB#&&&@@@@@@@@@&&#BBBGGB#&####&&&##B55PPPPPPP\n"
        CYAN  // Eyes White
        "Y!P#&##&###########PYGBGPGGB##########BGGGGGGGGPPPPPPPGB&&&@@@@@@@@@@@@@@&BGBBGG#&####&###GYPGGGGGGP\n"
        "P!?B#&##########&BPGBBGGB######&&&&&&&&#BGGGGGGGPPPPPGB#&&@@@@@@@@@@@@@@@@&#BBBBGB###&####PYGGGGGGGG\n"
        GREEN  // Hair/Head Green
        "G5~Y#&##########BPGBBGB####&&&&&&&&&&&&&&BGGGGGGPPPPPB#&&@@@@@@@@@@@@@@@@@@@#BBBBPP#&####BY5GGGGGGGG\n"
        "GG7~5##########B5PBBGB&&&&&&&&&@@@@@@@@@@&#BGGGGGPPPG#&&@@@@@@@@@@@@@@@@@@@@@&BBBBPYB####PJGGGGGGGGG\n"
        CYAN  // Details Cyan
        "GGY~!P##&&#####55BBGB&&&&&&@@@@@@@@@@@@@@@&#GGGGGPPPB#&&@@@@@@@@&&@@@@@@@@@@@@@#GGBBP?YBG5GGGGGGGGGB\n"
        "GGGP?7P##&&###5YGBBB&&@@@@@@@@@@@@@@@@@@@@&#BGGPPPPPG#&&@@@@@@@@&&&&@@@@@@@@@@@@@#GGBBP?YBG5GGGGGGGGG\n"
        RESET_COLOR  // Eyes White
        "PPPPGY!P##&&&GJ5BBG&@@@@@@@@@@@@@@@@@@@@@@&&BGGPPPPPGB&&&@@@&&BYYJJ5B&@@@@@@@@@&BGGGBGYYP55555PGGGGG\n"
        "PPPPPP?!PB#&#JYGBB#@@@@@@@@@@@@@&&&&@@@@@@&&BGGPPPPPGB#&&&@&#P^?GGG?~G&@@@@@@@&&#BGGGP5JJJ?7!!!?PBBB\n"
        RESET_COLOR  // Mouth Black 
        "PPPPPP5!~YGBY?GBBB&@@@@@@@@@@&BY??5BB&&@@&&#BGGPPPPPPGB#&&&&#Y.JPBBB!G&@@@@@@&&#BBGPPPGGGGGP5J!75GGG\n"
        "PPPPPP57~~?J7PBBBB&&@@@@@@@@&B7!5GBP^5#&&&#BGGGP5555PPGB##&&#B57!7JB#&@@@@@@&&#BBBGPGGGGB##BBGP7JGGG\n"
        "PPPPPPPP5?!!JBBBGB&&&@@@@@@@&B~7B#BJ:5#&&#BGGP5YJJJJY5PGGB##&&&&#B#&&@@@&&&&##BBBGGGPGB#&&&&#BG5?5GG\n"
        PURPLE  // Face Purple
        "PPPP5YJJJ?!!YGBBBB#&&&&@@@@@&&BYBBBJP##&#BGP5YYYYYYYYYY5PPGGGGBBB##&&&&&###BBBBGGGPPB#&&&&&&&#BP5PGG\n"
        "PPPPJ~^!?J55PPPPGB###&&&&&&&&&&&&&&&##BGGPP5555PPPGGGGGGGP555555555PPPGGGGGGGGGGP5P#&&&&&&&&&&BG5PPG\n"
        "PPPY!~YGBBBBBBGGGGBB####&&&&&&&&&#BGPPPP555GB#&&&@@@&&&#PYYYYYY55555555555555PP55B&&&&&&&&&&&&BGPPPP\n"
        CYAN  // Details Cyan
        "PPPY~JBB#&&&#BBGGGGBBBBBBB####BBGPPP55555YYY5G#&@@@&&&B5JJJJJJJJJYYYYYYYYYYYYY5G#&&&&&&&&&&&&&BGPPPP\n"
        "PPPJ~5G#&&&&&&&#BGPPGGGGGGGGPPPP5555YYYYYYYJJJYP#&&&&GJJJJJ?????JJJJJJJJJYY5G#&&&&&&&&&&&&&&&&BPPPPP\n"
        "PPP5JYP#&&&&&&&&&&#GP55555555555YYYYJJJJJJJJJJJJ?P&&BJJJJJYYJJJJJJJJJJJYPB#&&&&&&&&&&&&&&&&&&#GPPPPP\n"
        "PGGBGJYB@&&&&&&&&&&&&#GP5YYYYYYYYYJJJJJJYYYYYYY5G#&&&&##BBBBBGGGGGGBB#&&&&&&&&&&&&&&&&&&@@@@&BGPPPPP\n"
        "PPGGG5?P#@&&&&&&&&&&&&&&&#BGP5YYJJJJJYY5PPGB##&&@&&&&&@@@@@@@@@@@@@@@@&&&&&&&@@@@@@@@@@@@@@@#GPPPPPP\n"
        "PPPPPGY?G&@&&&&&&&&&&&&&&&&&&#######&&&&@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&BPPPPPPP\n"
        "GGPPGGBJJG&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#GPPPPPPP\n"
        "GPPPPGGG?JG&@@&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#GPPGGGPPP\n"
        "GGPPPPPGP?JG&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#GPGGGGGGGG\n"
        "PPPPGGGGGGJJG&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#GPGGGGGGGGG\n"
        "PPGGGGGGBBG?JP#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&BPPGGGGGGGGGG\n"
        "GGGGGGGGPJ?JJJ5B&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#G55GGGGGGGGGGG\n"
        "GGGPPP5Y?J5PGPYYG#&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#B5Y5GGGGGGGGGGGG\n"
        "PPPPP5Y??5PGGG#GJYG#&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&##GPY5GBGGGGGGGGGGGG\n"
        "PPPPPPPY5PPGGGB&&PJYG#&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&##BG5Y5PGGGGGGGGGGGGGBB\n"
        "PPPPPPYYPPGGGGB#&&#PJYPB&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&##BG5Y5PGGGGGGGGGGGGGGBBB\n"
        "PPPPP5YYPGGGGBBB#&&@&B5YYPB#&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&##BBGP5YJJYGGGGGGGGGGGGGGBBBBB\n"
        "PPPPPP55BGPGBBBBB#&&&@@&BPYY5PBB##&&&&&&&&&&&&&&&&&&@@@@@&&&&&&&&##BBGGP5YY5GBJ5PPGGGGGGGGGGGBBBBBBB\n"
        "PPPPPY5BBGGGBBBBBB###&&&@@&#G5YYY5PGGGBBBB######&&&&&######BBBGGPP55YYY5PB#&&BP5GGGGGGGGGGGBBBBBBBBB\n"
        "PPPP5GBGGGGGGGGG####&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n"
        RESET_COLOR);
}



#pragma endregion 





