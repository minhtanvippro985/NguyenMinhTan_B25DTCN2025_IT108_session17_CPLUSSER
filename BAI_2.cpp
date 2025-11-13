#include<stdio.h>
#include<string.h>
#include <ctype.h>

void showmenu(){
	printf("\n --------------------------------------------\n");
	printf("1.in HOA ky tu \n");
	printf("2.in THUONG ky tu \n");
	printf("3.thoat\n");
}

void upperletter( char stringtemplate[]){
     
       for (int i = 0; i < strlen(stringtemplate); i++){
        stringtemplate[i] = toupper(stringtemplate[i]);
	 }
	 
}
void lowletters( char stringtemplate[]){
     
       for (int i = 0; i < strlen(stringtemplate); i++){
        stringtemplate[i] = tolower(stringtemplate[i]);
	 }
	 
}
int main(){
   int choice;
   printf("nhap text cua ban vao day ");
   char sentence[50];
   fgets(sentence , sizeof(sentence) , stdin );
   int leng = sizeof(sentence) / sizeof(char);
  // printf("\n text cua ban la \n ");
   //fputs(sentence , stdout);
   for ( int i = 0 ; i < strlen(sentence) ; i ++){
   	printf("%c" ,sentence[i]);
   	  for (int i = 0; sentence[i] != '\0'; i++){
        if (sentence[i] == '\n'){
            sentence[i] = '\0';
            break;
        }
    }
   }
   do{
   	showmenu();
   	printf("lua chon cua ban la gi ?");
   	scanf("%d",&choice );
   	upperletter(sentence);
   	switch(choice){
	   
        	 case 1:
                upperletter(sentence);
                printf("sau khi in HOA: %s\n", sentence);
                break;

            case 2:
               lowletters(sentence);
                printf("sau khi in THUONG: %s\n", sentence);
                break;

            case 3:
                printf("Tam biet!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
            }
	   

   } while (choice != 3 );
}