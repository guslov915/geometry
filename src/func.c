#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intersect(int N, float (*A)[5], int (*intersects)[5])
{
    float total, distance;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            total = A[i][4] + A[j][4];
            distance
                    = sqrt((A[j][2] - A[i][2]) * (A[j][2] - A[i][2])
                           + (A[j][3] - A[i][3]) * (A[j][3] - A[i][3]));
            if (distance < total) {
                intersects[i][j] = 1;
                intersects[j][i] = 1;
            }
        }
    }
}

void check(char* name, int N, float (*A)[5])
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

float Perimeter(int A) {
	float p=2*3.14*A;
return p;	
}

float Area(int A) {
	float a=3.14*A*A;
return a;
}
