#include<stdio.h>
#include<string.h>
#include <ctype.h>
void letterremoval(char stringtemplate[] , char targetnow ){
    int i , j = 0 ; 
    for ( i = 0 ; stringtemplate[i] != '\0' ; i++  ){
    	if(stringtemplate[i] != targetnow ){
    		stringtemplate[j++] = stringtemplate[i];
		}
	}
	stringtemplate[j] ='\0';
}
int main(){
   printf("nhap text cua ban vao day ");
   char sentence[50];
   fgets(sentence , sizeof(sentence) , stdin );
   int leng = sizeof(sentence) / sizeof(char);
  // printf("\n text cua ban la \n ");
   //fputs(sentence , stdout);
   for ( int i = 0 ; i < strlen(sentence) ; i ++){
   	printf("%c" ,sentence[i]);
   	
   }
   
   char target;
   printf("chon ky tu ma ban muon xoa : ...");
   scanf("%c",&target );
   letterremoval(sentence , target);
   printf("sau khi xoa la  %s", sentence );
   
}