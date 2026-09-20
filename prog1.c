#include <stdio.h>

int main() {

    int n = 100;
    printf("Enter a # of words to store: ");
    scanf("%d", &n);

    printf("\nEnter you words below\n---------------------\n");

    char words[n][512];
    for (int i = 0; i <= n; i++) {
        fgets(words[i], sizeof(words[i]), stdin);
    }
}
