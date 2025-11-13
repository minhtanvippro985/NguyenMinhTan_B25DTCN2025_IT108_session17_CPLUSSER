#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define BACKGROUND_BRIGHT_GREEN "\x1b[102m"
#define BRIGHT_GREEN "\x1b[92m"



int doixung1(char c[]){
    int l = 0, r = strlen(c) - 1;
    while(l <= r){
        if(c[l] != c[r]){
            return 0;
        }
        ++l; --r;
    }
    return 1;
}

int main(){
	printf("nhap text vao day ");
	char sentence[50];
	fgets(sentence , sizeof(sentence) , stdin );
	int length = sizeof(sentence) / sizeof(char);
	printf("text cua ban la \n \n ");
	for ( int i = 0 ; i < strlen(sentence) ; i++){
		 printf("%c",sentence[i] )  ;
	}
	// xoa xuong \n
	for (int i = 0 ; sentence[i] != '\0' ; i++  ){
		if(sentence[i] == '\n' ){
			sentence[i] = '\0';
		}
	}
	if(doixung1(sentence)){
		printf("%s la palindrome !",sentence );
		
	} else {
		printf("%s khong phai palindrome ", sentence );
	}
}