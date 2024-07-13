#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[50];
    int distinctCount = 0;
    printf("Enter the sentence:\n");
    gets(s);
    for (int i = 0; s[i] != 0; i++) {
        char currentChar = tolower(s[i]);
        int isDistinct = 1;
        for (int j = 0; j < i; j++) {
            char previousChar = tolower(s[j]);
            if (currentChar == previousChar) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            distinctCount++;
        }
    }
    printf("Total distinct characters: %d\n", distinctCount);

    if (distinctCount%2==0){
        printf("it's an even so it's a female");
    }
    else{
        printf("it's an odd so it's a male");
    }
    return 0;
}
