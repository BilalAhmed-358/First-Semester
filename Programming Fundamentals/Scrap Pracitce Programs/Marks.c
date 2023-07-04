#include<stdio.h>
#include<conio.h>
float distance_calculator(float s1,float s2,float d,float spd_bee);
int main()
{
    float s1=50,s2=70,d=100,spd_bee=80;
    //printf("%f %f %f %f",s1,s2,d,spd_bee);
    printf("The total distance travelled by the bee is %lf",distance_calculator(s1,s2,d,spd_bee));

}
float distance_calculator(float s1,float s2,float d,float spd_bee)
{
    static float partial_distance=0;static float sum=0;
    if(partial_distance<100.001)
    {   //printf("%f %f %f %f\n",s1,s2,d,spd_bee);
        sum=(spd_bee*partial_distance)/(s1+s2);
        partial_distance+=25;
        printf("%f\n",sum);
        distance_calculator(s1,s2,d,spd_bee);
    }
    else
    return sum;
    
}

