#include<stdio.h>
#include<conio.h>
float distance_calculator(float s1,float s2,float d,float spd_bee);
int main()
{
    float s1=50,s2=70,d=100,spd_bee=80;
    //printf("%f %f %f %f",s1,s2,d,spd_bee);
    printf("The distance covered by the bee is %.3f meters",distance_calculator(s1,s2,d,spd_bee));

}
float distance_calculator(float s1,float s2,float d,float spd_bee)
{
    static float partial_distance=0.1;float static sum=0;
    if (100.1>partial_distance)
    {
        //printf("%f %f %f %f\n",s1,s2,d,spd_bee);
        sum=(spd_bee*partial_distance)/(s1+s2);
        //printf("%f\n",sum);
        partial_distance+=25;
        distance_calculator(s1,s2,d,spd_bee);
    }
    else
    return sum;
    
    
}
