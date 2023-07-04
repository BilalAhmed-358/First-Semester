#include <stdio.h>
#include <conio.h>

float distance_calculator(float s1, float s2, float d, float spd_bee);
int main()
{
    float s1 = 50, s2 = 70, d =0, spd_bee = 80;
    //printf("%f %f %f %f",s1,s2,d,spd_bee);
    printf("The total distance travelled by the bee is %lf", distance_calculator(s1, s2, d, spd_bee));
}
float distance_calculator(float s1, float s2, float d, float spd_bee)
{
    static float sum = 0;
    if (d< 100.01)
    { //printf("%f %f %f %f\n",s1,s2,d,spd_bee);
        sum = (spd_bee * d) / (s1 + s2);
        d+=25;
        printf("%f\n", sum);
        distance_calculator(s1, s2, d, spd_bee);
    }
    return sum;
}
