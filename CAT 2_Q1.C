/*Emmanuel Mulei Nzuki 
CT101/G/26526/25

1(iii) */



#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    printf("Elements of the array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // move to next row
    }

    return 0;
}

