#include <stdio.h>

void checkPrime(int N) {
    int i = 2;
    int flag = 1;
    do {
        if (N % i == 0) {
            flag = 0;
            break;
        }
        i++;
    } while (i <= N / 2);
    if (flag) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return;
}

int main() {
    int N;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &N);
    checkPrime(N);
    return 0;
}