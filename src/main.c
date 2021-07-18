#include <stdio.h>
#include <stdlib.h>

#include "include/util.h"
#include "include/morse.h"

#define COLOR_RED_BACKGROUND    "\e[41m"
#define COLOR_GREEN_BACKGROUND  "\e[42m"
#define COLOR_RESET             "\x1b[0m"

void loop(char* input) {
    char* message = to_morse(input);
    
    for(;;) {
        for (size_t i = 0; i < strlen(message); i++) {
            switch (message[i]) {
                case '.':
                    printf("%s %s\n", COLOR_RED_BACKGROUND, COLOR_RESET);
                    wait(1000);
                    clear_screen();
                    wait(500);
                    break;
                case '-':
                    printf("%s %s\n", COLOR_RED_BACKGROUND, COLOR_RESET);
                    wait(3000);
                    clear_screen();
                    wait(500);
                    break;
                case ' ':
                    wait(4000);
                    clear_screen();
                    wait(500);
                    break;
                default:
                    printf("%s %s\n", COLOR_GREEN_BACKGROUND, COLOR_RESET);
                    wait(1000);
                    clear_screen();
                    wait(500);
                    break;
            }
        }
        clear_screen();
        wait(10000);
    }
}

int main() {
    char message[256];
    scanf("%s", message);
    for (size_t i = 0; i < strlen(message); i++) {
        message[i] = tolower(message[i]);
    }

    printf("%s", COLOR_RESET);
    clear_screen();
    loop(message);
}