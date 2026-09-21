#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n;
    printf("Enter a # of strings to store: ");
    scanf("%d", &n);
    getchar();

    char **words = malloc(n * sizeof(char *));
    char buff[513];
    printf("\nEnter you strings below\n---------------------\n");

    for (int i = 0; i < n; i++) {
        fgets(buff, sizeof(buff), stdin);
        size_t len = strlen(buff);
        if (len > 0 && buff[len - 1] == '\n') {
            buff[--len] = '\0';
        } else {
            int c;
            while ((c = getchar()) != '\n')
                ;
        }
        words[i] = malloc(len + 1);
        strcpy(words[i], buff);
    }

    printf("words stored:\n{");
    for (int i = 0; i < n - 1; i++) {
        printf("\'%s\', ", words[i]);
    }
    printf("\'%s\'}", words[n - 1]);

    return 0;
}
