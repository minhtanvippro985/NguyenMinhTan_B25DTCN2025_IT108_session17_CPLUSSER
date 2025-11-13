#include<stdio.h>
#include<string.h>
#include <ctype.h>


int count_words(char s[]) {
    int dem = 0, inWord = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isspace(s[i]) && inWord == 0) {
            dem++;
            inWord = 1;
        } else if (isspace(s[i])) {
            inWord = 0;
        }
    }
    return dem;
}





int main() {
    char sentence[100]; 
    char sentence2[50];

    printf("nhap string thu nhat: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == '\n') {
            sentence[i] = '\0';
            break;
        }
    }

    printf("nhap string thu hai: ");
    fgets(sentence2, sizeof(sentence2), stdin);

    for (int i = 0; sentence2[i] != '\0'; i++) {
        if (sentence2[i] == '\n') {
            sentence2[i] = '\0';
            break;
        }
    }
    
    
    int countsen1 = count_words(sentence);
    int countsen2 = count_words(sentence2);
    
    
    if (countsen2 > countsen1)
        printf(" \"%s\" DAI HON chuoi \"%s\" (nhieu tu hon)\n", sentence2, sentence);
    else if (countsen2 == countsen1)
        printf(" \"%s\" BANG chuoi \"%s\" (so tu bang nhau)\n", sentence2, sentence);
    else
        printf(" \"%s\" DAI HON chuoi \"%s\" (nhieu tu hon)\n", sentence, sentence2);
}


