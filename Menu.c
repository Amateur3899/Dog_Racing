#include <stdio.h>
#include <stdlib.h>

void new_game() {

}

void load() {

}

void print_menu() {
    printf("\033[2J");
    printf("\033[0;0f");
    printf("1. New Game\n");
    printf("2. Load Game\n");
    printf("3. Exit\n");
}

int get_variant(int count) {
    int variant;
    char s[100];
    scanf("%s", s);
    if(sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
        printf("Incorrect input. Try again: ");
        print_menu();
    }
    return variant;
}

int main() {
    int variant;
    do {
        print_menu();
        variant = get_variant(3);
        switch (variant) {
            case 1:
                new_game();
                break;
            case 2:
                load();
                break;
        }
    } while (variant != 3);
    return 0;
}