#include <stdio.h>
#include <string.h>

int main() {
    char A[200], B[100];
    printf("chuoi A: ");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0'; 
    printf("chuoi B: ");
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = '\0';
    if (strstr(A, B) != NULL)
        printf("SIR YES SIR ORAHH\n");
    else
        printf("never again\n");

    return 0;
}
