#include <stdio.h>
//pattern problems
int main() {
    int N;
    printf("Enter an odd number (N): ");
    scanf("%d", &N);

    if (N % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 0;
    }

    int i, j;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {   
            if (i == 1 || i == N || j == 1 || j == N || (i == j && i == (N + 1) / 2))
                printf("%-4d", j * 10);
            else
                printf("    "); // spaces for alignment
        }
        printf("\n");
    }

    return 0;
}
