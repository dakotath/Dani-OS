#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_BLACK);
    print_str("                 ..:::.                                               \n");
    print_str("             .75G#&&&&##P?^                                           \n\0");
    print_str("           :Y&G7~^^^^^~?P@@G!                                         \n\0 ");
    print_str("          7&@@:          ^B@@P.                                       \n\0 ");
    print_str("         !@@@@:   .PP^    ^@@@P                                       \n\0 ");
    print_str("         G@@@@:   .&@#.   .#@@@~                                      \n\0");
    print_str("         #@@@@^   .#@@~    #@@@!  ####### ^## ##~ .#####   ######          \n\0 ");
    print_str("         Y@@@@!    G@#:   ^&@@&:  ####### ?## ##? ^## ##?: ##              \n\0 ");
    print_str("         .G@@@?    :^.   :B@@@7     ###   ?## ##? ^#####~: ######          \n\0");
    print_str("          .Y&@G:...  .:!5&@@B~     .###   ?## ##7 ~## ##?. ##              \n\0");
    print_str("            :JB&&&&#&&@@@&P!       :###   :?####. :#####^  ######          \n\0");
    print_str("               :!?YY5YJ7^.                                            \n\0");
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str("Beta Testers: Dakotath GreenyOfficial\n\0");
    print_set_color(PRINT_COLOR_PINK, PRINT_COLOR_BLACK);
    print_str("Lol no terminal yet!\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("Never gonna give you up, Never gonna let you down, Never gonna run around\n\0");
    print_str("and desert you!\n\0");
}
