

#include <stdio.h>
#include <string.h>


const int a = 5;
const int b = 8;


void encryption(char *m, char *c) {
    int n = strlen(m);
    for (int i = 0; i < n; i++) {
        if (m[i] == ' ') {
            c[i] = m[i];
        } else {
            c[i] = (((a * (m[i] - 'A')) + b) % 26) + 'A';
        }
    }
    c[n] = '\0';
}


void decryption(char *c, char *m) {
    char aInverse = 0;
    char temp = 0;

   
    for (char i = 0; i < 26; i++) {
        temp = (a * i) % 26;
        // Check the condition (a*i)%26 == 1
        if (temp == 1) {
            aInverse = i;
            break;
        }
    }

    int n = strlen(c);
    for (int i = 0; i < n; i++) {
        if (c[i] == ' ') {
            m[i] = c[i];
        } else {
            m[i] = (((aInverse * ((c[i] - 'A' + 26 - b)) % 26)) + 'A');
        }
    }
    m[n] = '\0';
}

int main() {
    char message[] = "PRAJWAL";

    
    char c[100];
    encryption(message, c);
    printf("Encrypted Message is: %s\n", c);

    
    char decrypted[100];
    decryption(c, decrypted);
    printf("Decrypted Message is: %s\n", decrypted);

    return 0;
}
