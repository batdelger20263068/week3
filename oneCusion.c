#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void print_angle(int bx, int by, int tx, int ty, const char* wall)
{
    double dx = (double)tx - bx;
    double dy = (double)ty - by;
    double angle;
    int lower, upper;

    angle = atan2(dy, dx) * 180.0 / acos(-1.0);

    if (angle < 0.0)
        angle += 360.0;

    lower = (int)floor(angle);
    upper = lower + 1;

    printf("%s : %d~%d도 사이\n", wall, lower, upper);
}

int main(void)
{
    int bx, by, tx, ty;

    printf("공의 위치를 입력하세요: ");
    scanf("%d %d", &bx, &by);

    printf("목표 지점의 좌표를 입력하세요: ");
    scanf("%d %d", &tx, &ty);

    print_angle(bx, by, tx, 200 - ty, "위쪽");  // 위쪽 벽 (y = 100)

    print_angle(bx, by, 200 - tx, ty, "오른쪽");   // 오른쪽 벽 (x = 100)

    print_angle(bx, by, tx, -ty, "아래쪽");  // 아래쪽 벽 (y = 0)

    print_angle(bx, by, -tx, ty, "왼쪽");  // 왼쪽 벽 (x = 0)

    return 0;
}