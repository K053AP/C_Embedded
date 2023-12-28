#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char input_int[100];
    int result_int = 0;

    printf("Enter your number: ");
    fgets(input_int, sizeof(input_int), stdin);
    input_int[strcspn(input_int, "\n")] = '\0';

    int length_int = strlen(input_int);

    for (int i = 0; i < length_int; i++) {
        if ((int)input_int[i] >= 48 && (int)input_int[i] <= 57) {
            printf("%c - %d\n", input_int[i], (int)input_int[i]);
            result_int = result_int * 10 + (int)input_int[i] % 48;
        }
    }

    printf("Result text in int: %d\n", result_int);


    //Старий код я вирішив залишити
    char input_text[100];
    char result_text[1000] = "";

    printf("Enter your text: ");
    fgets(input_text, sizeof(input_text), stdin);
    input_text[strcspn(input_text, "\n")] = '\0';

    int length_text = strlen(input_text);

    for (int i = 0; i < length_text; i++) {
        printf("%c - %d\n", input_text[i], (int)input_text[i]);
        char digit[4];
        sprintf(digit, "%d", (int)input_text[i]);
        strcat(result_text, digit);
        printf("%s\n", result_text);
    }

    printf("Result text in ASCII: %s\n", result_text);

    return 0;
}