#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "proof_of_work.h"

int main(){
    char *challenge = "201928732019283320192836";
    char sha256Hash[65];
    char nonce[20];

    int difficulty;
    int startNonce = 0;
    int nonceRange = 1000000000;

    printf("difficulty: ");
    scanf("%d", &difficulty);

    clock_t start = clock();

    findNonce(nonce, sha256Hash, challenge, difficulty,startNonce,nonceRange);

    clock_t end = clock();

    printf("Challenge + Nonce: %s + %s\n", challenge, nonce);
    printf("Hash: %s\n", sha256Hash);
    printf("Total Time: %lf\n", (double)(end - start)/ CLOCKS_PER_SEC);

    return 0;
}