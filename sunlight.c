 #define _CRT_SECURE_NO_WARNINGS

 #include <stdio.h>

int main() {
    double speed, distance, time;
        
    speed = 300000.0;  // km/s
    distance = 149600000.0; // km/s

    time = distance / speed;
        
    printf ("빛의 속도는 %fkm/s\n", speed);
    printf("태양과 지구와의 거리 %fkm\n", distance);
    printf("도달 시간은 %f초\n", time);

    return 0;
}