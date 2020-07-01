#include "../src/func.h"
#include "../thirdparty/ctest.h"
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

CTEST(arithmetic_suite, intersect)
{
    int exp_intersects[5][5];
    exp_intersects[0][0] = 0;
    exp_intersects[0][1] = 0;
    exp_intersects[0][2] = 0;
    exp_intersects[1][0] = 0;
    exp_intersects[1][1] = 0;
    exp_intersects[1][2] = 1;
    exp_intersects[2][0] = 0;
    exp_intersects[2][1] = 1;
    exp_intersects[2][2] = 0;
    int intersects[5][5];
    float A[5][10];
    A[0][2] = 1;
    A[0][3] = 2;
    A[0][4] = 1;
    A[1][2] = 8;
    A[1][3] = 9;
    A[1][4] = 4;
    A[2][2] = 7;
    A[2][3] = 7;
    A[2][4] = 4;
    intersect(3, A, intersects);
    ASSERT_EQUAL(exp_intersects[0][0], intersects[0][0]);
    ASSERT_EQUAL(exp_intersects[0][1], intersects[0][1]);
    ASSERT_EQUAL(exp_intersects[0][2], intersects[0][2]);
    ASSERT_EQUAL(exp_intersects[1][0], intersects[1][0]);
    ASSERT_EQUAL(exp_intersects[1][1], intersects[1][1]);
    ASSERT_EQUAL(exp_intersects[1][2], intersects[1][2]);
    ASSERT_EQUAL(exp_intersects[2][0], intersects[2][0]);
    ASSERT_EQUAL(exp_intersects[2][1], intersects[2][1]);
    ASSERT_EQUAL(exp_intersects[2][2], intersects[2][2]);
}
