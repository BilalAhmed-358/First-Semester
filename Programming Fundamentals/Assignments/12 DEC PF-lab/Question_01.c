#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
  {
      char name[100];
      int roll_number;
      float attendence_marks;
      float test1_marks;
      float test2_marks;
      float test3_marks;
  };
int main()
{
  
  struct student student1,student2;  
  //filling the date for student 1
  printf("Enter the name of the first student\n");
  gets(student1.name);
  printf("Enter the Roll No. of the first student\n");
  scanf("%d",&student1.roll_number);
  printf("Enter the attendence marks of student 01\n");
  scanf("%f",&student1.attendence_marks);
  printf("Enter the marks of the  student in First subject\n");
  scanf("%f",& student1.test1_marks);
  printf("Enter the marks of the student in 2nd subject\n");
  scanf("%f",& student1.test2_marks);
  printf("Enter the marks of the student in 3rd subject\n");
  scanf("%f",& student1.test3_marks);
  //filling the date for student 2
  printf("Enter the name of the second student\n");
  fflush(stdin);
  gets(student2.name);
  printf("Enter the Roll No. of the second student\n");
  scanf("%d",&student2.roll_number);
  printf("Enter the attendence marks of student 02\n");
  scanf("%f",&student2.attendence_marks);
  printf("Enter the marks of the  student in First subject\n");
  scanf("%f",&student2.test1_marks);
  printf("Enter the marks of the student in 2nd subject\n");
  scanf("%f",&student2.test2_marks);
  printf("Enter the marks of the student in 3rd subject\n");
  scanf("%f",&student2.test3_marks);
  // printf("The Name of the 1st student is %s\nHis Roll no. is %d\nHis attendence marks are %.2f\nThe marks he obtained in Test 01 are: %.2f\nThe marks he obtained in Test 02 are: %.2f\nThe marks he obtained in Test 03 are: %.2f\n", student1.name,student1.roll_number,student1.attendence_marks,student1.test1_marks,student1.test2_marks,student1.test3_marks); 
  // printf("\n");
  //  printf("The Name of the 2nd student is %s\nHis Roll no. is %d\nHis attendence marks are %.2f\nThe marks he obtained in Test 01 are: %.2f\nThe marks he obtained in Test 02 are: %.2f\nThe marks he obtained in Test 03 are: %.2f\n", student2.name,student2.roll_number,student2.attendence_marks,student2.test1_marks,student2.test2_marks,student2.test3_marks);
  int sum1,sum2;
  sum1=student1.test1_marks+student1.test2_marks+student1.test3_marks;
  sum2=student2.test1_marks+student2.test2_marks+student2.test3_marks;
  printf("The name of the first student is %s, His Roll No. is %d and his total seasonal marks are %d\n",student1.name,student1.roll_number,sum1);
  printf("The name of the second student is %s, His Roll No. is %d and his total seasonal marks are %d\n",student2.name,student2.roll_number,sum2);
}