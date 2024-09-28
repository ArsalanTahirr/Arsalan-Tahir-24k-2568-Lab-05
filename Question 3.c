#include <stdio.h>
int main() 
{
    char OC, EC, DC;
    int key;
    printf("Enter a character to encrypt: ");
    scanf(" %c", &OC);
    printf("Enter the encryption key: ");
    scanf("%d", &key);
    EC = OC ^ key;
    printf("Encrypted character: %c\n", EC);
    DC = EC ^ key;
    printf("Decrypted character: %c\n", DC);
    return 0;
}

