#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, y1, x2, y2;
    double angle;
    int lower, upper;

    printf("공의 좌표를 입력하세요: ");
    scanf("%d %d", &x1, &y1);

    printf("목표지점의 좌표를 입력하세요: ");
    scanf("%d %d", &x2, &y2);

    angle = atan2(y2 - y1, x2 - x1) * 180.0 / acos(-1.0);

    if (angle < 0)
        angle += 360.0;

    lower = (int)angle;
    upper = lower + 1;

    printf("목표: %d-%d도 사이\n", lower, upper);

    return 0;
}
