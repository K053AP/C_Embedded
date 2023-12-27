#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];
    char result[1000] = "";

    printf("Enter: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int length = strlen(input);

    for (int i = 0; i < length; i++) {
        printf("%c - %d\n", input[i], (int)input[i]);
        char digit[4];
        sprintf(digit, "%d", (int)input[i]);
        strcat(result, digit);
        printf("%s\n", result);
    }

    printf("Result: %s\n", result);

    return 0;
}