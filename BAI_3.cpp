#include<stdio.h>
#include<string.h>
#include <ctype.h>



/*int main(){

   printf("nhap string thu nhat  ");
   char sentence[50];
   char sentence2[50];
   fgets(sentence , sizeof(sentence) , stdin );
   //int leng = sizeof(sentence) / sizeof(char);
   //int leng2 = sizeof(sentence2) /sizeof(char);
  // printf("\n text cua ban la \n ");
   //fputs(sentence , stdout);
   printf("tu thu nhat la \n ");
   for ( int i = 0 ; i < strlen(sentence) ; i ++){
   	printf("%c" ,sentence[i]);
   	
   }
 //  	for (int i = 0 ; sentence[i] != '\0' ; i++  ){
	//	if(sentence[i] == '\n' ){
		//	sentence[i] = '\0';
	//	}
//	}
   
   printf("nhap string thu hai cua ban ");
   fgets(sentence2 , strlen(sentence2) , stdin);
   printf("tu thu hai la %s \n",sentence2 );
   for (int i = 0 ; i < strlen(sentence2) ; i++ ){
   	printf("%c",sentence2[i]);
   	
   }
   // xoa xuong n
   
  // 	for (int i = 0 ; sentence2[i] != '\0' ; i++  ){
	//	if(sentence2[i] == '\n' ){
		//	sentence2[i] = '\0';
	//	}
//	}
	strcat(sentence, sentence2);;
	printf("2 tu noi lai voi nhau la %s",sentence );
} */
   
   

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
    strcat(sentence, " ");
    strcat(sentence, sentence2);
    printf("\nhai chuoi noi lai voi nhau la: %s\n", sentence);

    return 0;
} 
