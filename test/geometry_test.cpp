#include "../thirdparty/ctest.h"
#include <math.h>

CTEST(only_test, check_test_OK)
{
    // Given
    const double x0 = 1;
    const double y0 = 1;
    const double r = 5;
    const double x1 = 4.47;
    const double y1 = 2.67;
    const double x2 = 8.27;
    const double y2 = 3.18;
    const double x3 = 5.97;
    const double y3 = 0.49;
    int rezult;

    // When
    if (((sqrt((x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1)) > r)
         && (sqrt((x0 - x2) * (x0 - x2) + (y0 - y2) * (y0 - y2)) > r)
         && (sqrt((x0 - x3) * (x0 - x3) + (y0 - y3) * (y0 - y3)) > r))
        || ((sqrt((x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1)) < r)
            && (sqrt((x0 - x2) * (x0 - x2) + (y0 - y2) * (y0 - y2)) < r)
            && (sqrt((x0 - x3) * (x0 - x3) + (y0 - y3) * (y0 - y3)) < r))) {
        rezult = 1;
    } else {
        rezult = 0;
    }

    // Then
    const int expexted = 0;
    ASSERT_EQUAL(expexted, rezult);
}

CTEST(only_test, check_test_FAIL)
{
    // Given
    const double x0 = 1;
    const double y0 = 1;
    const double r = 5;
    const double x1 = 4.47;
    const double y1 = 2.67;
    const double x2 = 8.27;
    const double y2 = 3.18;
    const double x3 = 5.97;
    const double y3 = 0.49;
    int rezult;

    // When
    if (((sqrt((x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1)) > r)
         && (sqrt((x0 - x2) * (x0 - x2) + (y0 - y2) * (y0 - y2)) > r)
         && (sqrt((x0 - x3) * (x0 - x3) + (y0 - y3) * (y0 - y3)) > r))
        || ((sqrt((x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1)) < r)
            && (sqrt((x0 - x2) * (x0 - x2) + (y0 - y2) * (y0 - y2)) < r)
            && (sqrt((x0 - x3) * (x0 - x3) + (y0 - y3) * (y0 - y3)) < r))) {
        rezult = 1;
    } else {
        rezult = 0;
    }

    // Then
    const int expexted = 1;
    ASSERT_EQUAL(expexted, rezult);
}
