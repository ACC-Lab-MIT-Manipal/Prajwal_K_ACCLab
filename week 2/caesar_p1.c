
#include <stdio.h>

int main()
{
char pt[100],ch;
int shift;
   printf("Enter a message to encrypt: ");

    scanf("%s", pt);

    printf("Enter number of shift: ");

    scanf("%d",  &shift);
    for(int i=0;pt[i]!='\0';++i)
    {
        ch=pt[i];
        if(ch>='a' || ch<='z')
        {
            ch=ch+shift;
    
        if(ch>'z'){
            ch=ch-'z'+'a'-1;
        }
        pt[i] = ch;
        }
        else if(ch>='A' || ch<='Z'){
            ch=ch+shift;
        if(ch > 'Z'){
        ch = ch - 'Z' + 'A' - 1;
        }
        pt[i] = ch;
        }
    }
    printf("Encrypted message: %s", pt);
    //printf("Enter a message to decrypt: ");
    //printf("%s",pt);
    //printf("Enter shift: ");
    //scanf("%d", &shift);
    for(int i = 0; pt[i] != '\0'; ++i){
    ch = pt[i];
    if(ch >= 'a' && ch <= 'z'){
    ch = ch - shift;
    if(ch < 'a'){
    ch = ch + 'z' - 'a' + 1;
    }
    pt[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
    ch = ch - shift;
    if(ch < 'A'){
    ch = ch + 'Z' - 'A' + 1;
    }
    pt[i] = ch;
    }
    }
    printf("\nDecrypted message: %s", pt);
    return 0;
}
