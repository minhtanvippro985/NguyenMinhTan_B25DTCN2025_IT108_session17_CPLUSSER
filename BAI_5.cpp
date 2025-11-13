#include<stdio.h>
#include<string.h>
#include <ctype.h>
int comparestrings(char stringtemp1[] , char stringtemp2[]){
	if(strlen(stringtemp1) != strlen(stringtemp2) ) return 0;
	for (int i = 0 ; stringtemp1[i] != '\0' ; i++  ){
		if(tolower(stringtemp1[i]) != tolower(stringtemp2[i])){
			return 0;
		} 
	} 
	return 1;
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
        if (comparestrings(sentence , sentence2)){
            printf("hai chuoi giong nhau \n");
		} else{
			printf("\n hai chuoi khac nhau ");
		}
        
        
        
        
    }










