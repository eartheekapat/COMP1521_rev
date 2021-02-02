#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 100

bool isVowel (char ch);

int main(void) {
    char charBuff[MAX_LEN];
    while (1) {
        fgets(charBuff, MAX_LEN, stdin);
        // loop through charBuff
        for (int i = 0; charBuff[i] != '\0'; i++) {
            if (!isVowel(charBuff[i])) {
                printf("%c", charBuff[i]);
            }
        }
    }

    return 0;
}

bool isVowel (char ch) {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        return true;
    }
    return false;
}
