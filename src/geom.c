#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "func.h"

float A[5][5];

int intersects[5][5];

int main()

{
    int N = 0, stop = 0;

    float S[5], P[5];

    char name[20];

    printf("Enter the figures: \n");

    do

    {
        for (int i = 0; name[i - 1] != 41; i++)

        {
            scanf("%c", &name[i]);

            if (name[i] == '0')

            {
                stop = 1;

                break;
            }
        }

        check(name, N, A);

        N++;

    } while (stop == 0);

    for (int i = 0; i < N - 1; i++)

    {
        for (int j = 0; j < N - 1; j++)

        {
            intersects[i][j] = 0;
        }
    }

    intersect(N - 1, A, intersects);

    for (int i = 0; i < N - 1; i++)

    {
        if ((int)A[i][1] == 1)

        {
            printf("%d. circle(%.2f %.2f, %.2f)\n",
                   i + 1,
                   A[i][2],
                   A[i][3],
                   A[i][4]);

            S[i] = Area(A[i][4]);

            P[i] = Perimeter(A[i][4]);

            printf(" perimeter = %.3f\n area = %.3f\n intersects:\n",
                   P[i],
                   S[i]);

            for (int j = 0; j < N - 1; j++)

            {
                if (intersects[i][j] == 1)

                {
                    if (A[j][1] == 1)

                    {
                        printf("%d. circle\n", j + 1);
                    }
                }
            }

            printf("\n");

        }

        else

        {
            printf("WRONG FIGURE!\n");
        }
    }

    return 0;
}
