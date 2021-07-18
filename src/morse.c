#include "include/morse.h"

char* to_morse(char* input) {
    char *output = malloc(sizeof(char) * (strlen(input) * 5));
    int i = 0;
    for (; *input != '\0'; input++) {
        if (*input == ' ') {
            output[i++] = ' ';
        }
        else {
            switch (*input) {
                case 'a':
					output[i++] = '.';
					output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'b':
					output[i++] = '-';
					output[i++] = '.';
					output[i++] = '.';
					output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'c':
					output[i++] = '-';
					output[i++] = '.';
					output[i++] = '-';
					output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'd':
					output[i++] = '-';
					output[i++] = '.';
					output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'e':
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'f':
                    output[i++] = '.';
                    output[i++] = '.';
                    output[i++] = '-';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'g':
                    output[i++] = '-';
                    output[i++] = '-';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'h':
                    output[i++] = '.';
                    output[i++] = '.';
                    output[i++] = '.';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'i':
                    output[i++] = '.';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'j':
                    output[i++] = '.';
                    output[i++] = '-';
                    output[i++] = '-';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'k':
                    output[i++] = '-';
                    output[i++] = '.';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'l':
                    output[i++] = '.';
                    output[i++] = '-';
                    output[i++] = '.';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'm':
                    output[i++] = '-';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'n':
                    output[i++] = '-';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'o':
                    output[i++] = '-';
                    output[i++] = '-';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'p':
                    output[i++] = '.';
                    output[i++] = '-';
                    output[i++] = '-';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 'q':
                    output[i++] = '-';
                    output[i++] = '-';
                    output[i++] = '.';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'r':
                    output[i++] = '.';
                    output[i++] = '-';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 's':
                    output[i++] = '.';
                    output[i++] = '.';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case 't':
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'u':
                    output[i++] = '.';
                    output[i++] = '.';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'v':
                    output[i++] = '.';
                    output[i++] = '.';
                    output[i++] = '.';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'w':
                    output[i++] = '.';
                    output[i++] = '-';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'x':
                    output[i++] = '-';
                    output[i++] = '.';
                    output[i++] = '.';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'y':
                    output[i++] = '-';
                    output[i++] = '.';
                    output[i++] = '-';
                    output[i++] = '-';
					output[i++] = ' ';
                    break;
                case 'z':
                    output[i++] = '-';
                    output[i++] = '-';
                    output[i++] = '.';
                    output[i++] = '.';
					output[i++] = ' ';
                    break;
                case ' ':
                    output[i++] = ' ';
                    break;
                default:
                    output[i++] = '?';
					output[i++] = ' ';
                    break;
            }
        }
    }
    output[i] = '\0';
    return output;
}