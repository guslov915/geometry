#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float A[5][5];
int intersects[5][5];

int main()
{
    int N = 0, stop = 0;
    float S[5], P[5];
    char name[20];
    printf("Enter the figures: \n");
    do {
        for (int i = 0; name[i - 1] != 41; i++) {
            scanf("%c", &name[i]);
            if (name[i] == '0') {
                stop = 1;
                break;
            }
        }
        check(name, N);
        N++;
    } while (stop == 0);
    system("PAUSE");
    return 0;
}
