#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float A[5][5];
int intersects[5][5];

void check(char* name, int N)
{
    int k = 0, Y = 0;
    float M = 1;
    for (int i = 0; name[i] != '('; i++) {
        k = i + 1;
    }
    char copy[k];
    for (int i = 0; i < k; i++) { 
        copy[i] = name[i];
    }
    if (strstr(copy, "circle") != 0) {
        A[N][1] = 1;
    } else {
       printf("Wrong Figure! \n");
    }
if ((int)A[N][1] == 1) { 
        A[N][2] = 0;
        A[N][3] = 0;
        A[N][4] = 0;
        Y = 0;
        M = 1;
        for (int i = k + 1; (float)name[i] > 45 && (float)name[i] < 58; i++) { 
            k = i + 1;
            if (name[i] > 47) {
                A[N][2] = A[N][2] * 10 + (float)name[i] - 48;
                M /= 10;
            } else {
                Y = 1;
                M = 1;
            }
        }
        if (Y == 1) {
            A[N][2] = A[N][2] * M;
        }
        Y = 0;
        M = 1;
        for (int i = k + 1; (float)name[i] > 45 && (float)name[i] < 58; i++) { 
            k = i + 1;
            if (name[i] > 47) {
                A[N][3] = A[N][3] * 10 + (float)name[i] - 48;
                M /= 10;
            } else {
                Y = 1;
                M = 1;
            }
        }
        if (Y == 1) {
            A[N][3] = A[N][3] * M;
        }
        Y = 0;
        M = 1;
        for (int i = k + 2; (float)name[i] > 45 && (float)name[i] < 58; i++) { 
            k = i + 1;
            if (name[i] > 47) {
                A[N][4] = A[N][4] * 10 + (float)name[i] - 48;
                M /= 10;
            } else {
                Y = 1;
                M = 1;
            }
        }
        if (Y == 1) {
            A[N][4] = A[N][4] * M;
        }
        Y = 0;
        M = 1;
    }
}

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
