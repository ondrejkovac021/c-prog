#include <stdio.h>
#include<math.h>

int main() {
float x1 = 1.32, y1 = 1.56, x2 = 2.93, y2 = 3.12;
float distance;

distance =sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
printf ("vzdálenost mezi (%.2f, %.2f) a (%.2f, %.2f) is %f\n", x1, y1, x2, y2, distance );
    return 0;
}
