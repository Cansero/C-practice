#include <stdio.h>
#define MAXLINE 1000
#define ABCLEN 27

int get_message(char message[], int lim) {
    int i, c;

    for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        message[i] = c;
    }
    message[i] = '\0';

    return i;
}


void encrypt_abc(char abc[], char encrypt_abc[],  int encrypt) {
    int i, ci;

    for (i = 0; i < ABCLEN - 1; i++) {
        ci = (i + encrypt) % (ABCLEN - 1);
        encrypt_abc[i] = abc[ci];
    }
    encrypt_abc[i] = '\0';
}


void encrypting(char abc[], char encrypt_abc[], char message[], char output[], int message_len) {
    int i, i2;

    for (i = 0; i < message_len; i++) {
        if (message[i] == ' ') {
            output[i] = ' ';
        }
        else if (message[i] == ',') {
            output[i] = ',';
        }
        else {
            for (i2 = 0; i2 < ABCLEN -1; i2++) {
                if (message[i] == abc[i2]) {
                    output[i] = encrypt_abc[i2];
                    break;
                }
            }
        }
    }
    output[i] = '\n';
}


int main() {
    int encrypt, message_len;
    char message[MAXLINE];
    char encrypted_message[MAXLINE];
    char abc[ABCLEN] = "abcdefghijklmnopqrstuvwxyz";
    char encrypted_abc[ABCLEN];

    printf("Enter message to encrypt: ");
    message_len = get_message(message, MAXLINE);

    printf("Encrypt method: ");
    encrypt = getchar();
    encrypt = encrypt - 48;

    encrypt_abc(abc, encrypted_abc, encrypt);

    encrypting(abc, encrypted_abc, message, encrypted_message, message_len);

    printf("%s:\n%s", message, encrypted_message);

    return 0;
}
