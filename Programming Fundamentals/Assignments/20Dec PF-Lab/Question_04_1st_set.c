#include<stdio.h>
#include<math.h>
struct Things_to_Cal_by_given_value   
{
    float Area_of_square;
    float Volume_of_cube;
    float Circumference_of_circle;
    float Hypotenuse_of_a_triangle;
};
void calculation_by_given_value(struct Things_to_Cal_by_given_value data, float value,float perp,float base)
{
    data.Area_of_square=pow(value,2);
    data.Volume_of_cube=pow(value,3);
    data.Circumference_of_circle=2*M_PI*value;
    data.Hypotenuse_of_a_triangle=sqrt((base*base)+(perp*perp));
    printf("\nThe area of cicle is whose side is %.3f %.2f.\nThe Volume of cube whose side is %.3f is %.2f.\nThe circumference of circle whose radius is %.3f is %.2f.\nThe hypotenuse of the triangle whose perp is %.3f and base is %.3f is %.3f.\n",value,data.Area_of_square,value,data.Volume_of_cube,value,data.Circumference_of_circle,perp,base,data.Hypotenuse_of_a_triangle);
}
int main()
{
    float value,perp,base;
    printf("Enter the value\n");
    scanf("%f",&value);
    printf("Enter the value of perpendicular\n");
    scanf("%f",&perp);
    printf("Enter the value of base\n");
    scanf("%f",&base);
    struct Things_to_Cal_by_given_value data;
    calculation_by_given_value(data,value,perp,base);
}
