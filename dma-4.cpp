#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));

    if (p == NULL) {
        printf("Memory not available");
    } else {
        for (int i = 0; i < n; i++) {
            scanf("%d", p + i);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    int m;
    scanf("%d", &m);

    p = (int *)realloc(p, m * sizeof(int));

    if (p == NULL) {
        printf("Memory not available");
    } else {
        for (int i = n; i < m + n; i++) {
            scanf("%d", p + i);
        }

        for (int i = 0; i < m + n; i++) {
            printf("%d ", *(p + i));
        }
    }
    free(p);

    return 0;
}
