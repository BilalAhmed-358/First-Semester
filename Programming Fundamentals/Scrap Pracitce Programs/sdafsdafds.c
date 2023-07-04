//#include<stdio.h>
////int natural_sum(int n);
//int *getRandom()
//{
//	int static r[3]={1,2,4};
//	return r;
//}
//int main()
//{
//	// printf("Ente the natural number upto which you want to creat the sum of natural numbers\n");
//	// int n;
//	// scanf("%d",&n);
//	// printf("The sum of natural numbers upto %d is %d",n,natural_sum(n));
//	int *p;
//	int i;
//	p=getRandom();
//	for (i=0; i < 3; i++)
//	{
//		printf("*(p+%d):%d\n",i,*(p+i));
//	}
//	
//}
//// int natural_sum(int n)
//// {	
//// 	int static sum=0, i=1;
//// 	if(i<=n)
//// 	{
//// 		sum+=i;
//// 		i++;
//// 		natural_sum(n);
//// 	}
//// 	return sum;
//	
//
//// }
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  struct student
  {
      char name[100];
      int roll_number;
      float attendence_marks;
      float test1_marks;
      float test2_marks;
      float test3_marks;
  };
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
  printf("The Name of the 1st student is %s\nHis Roll no. is %d\nHis attendence marks are %.2f\nThe marks he obtained in Test 01 are: %.2f\nThe marks he obtained in Test 02 are: %.2f\nThe marks he obtained in Test 03 are: %.2f\n", student1.name,student1.roll_number,student1.attendence_marks,student1.test1_marks,student1.test2_marks,student1.test3_marks); 
  printf("\n");
   printf("The Name of the 2nd student is %s\nHis Roll no. is %d\nHis attendence marks are %.2f\nThe marks he obtained in Test 01 are: %.2f\nThe marks he obtained in Test 02 are: %.2f\nThe marks he obtained in Test 03 are: %.2f\n", student2.name,student2.roll_number,student2.attendence_marks,student2.test1_marks,student2.test2_marks,student2.test3_marks);
}
