# include <stdio.h>
# include <stdlib.h>
# include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
    char *s[n];
    int i, j;
    for (i = 0; i < n; i++) {
        s[i] = (char *)malloc(sizeof(char)*20);
        scanf("%s", s[i]);
    }
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1; j++) {
            if (strcmp(s[j], s[j+1]) > 0) {
                char t[20];
                strcpy(t, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], t);
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%s ", s[i]);
    }
    for (i = 0; i < n; i++) {
        free(s[i]);
    }
 
    return 0;
}
