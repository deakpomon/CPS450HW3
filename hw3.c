#include <stdio.h>
#include <ctype.h>

int main() {
    char input[] = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";

    for (int i = 0; input[i] != ' '; i++) {
        if (input[i] == '/') {
            printf("\n");
        } 
        else if (isdigit(input[i])) {
            int num = input[i] - '0';
            for (int j = 0; j < num; j++) {
                printf("- ");
            }
        } 
        else {
            printf("%c ", input[i]);
        }
    }
    printf("\n");
    return 0;
}
