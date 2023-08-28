#include<stdio.h>
#include<string.h>

int main(){
    char msg[] = "PRAJWAL";
    char key[] = "HELLO";
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
 
    char newKey[msgLen], encryptedTxt[msgLen], decryptedTxt[msgLen];
 
    for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
 
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 

    for(i = 0; i < msgLen; ++i)
        encryptedTxt[i] = ((msg[i] + newKey[i]) % 26) + 'A';
 
    encryptedTxt[i] = '\0';
 
    for(i = 0; i < msgLen; ++i)
        decryptedTxt[i] = (((encryptedTxt[i] - newKey[i]) + 26) % 26) + 'A';
 
    decryptedTxt[i] = '\0';
 
    printf("Original Message: %s", msg);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nEncrypted Message: %s", encryptedTxt);
    printf("\nDecrypted Message: %s", decryptedTxt);
 
return 0;
}