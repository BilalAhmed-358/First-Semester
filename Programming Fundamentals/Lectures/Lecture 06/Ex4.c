
main()
{	int n_o_s;
	printf("Eneter the Number of subjects \n");
	scanf("%d", &n_o_s);
 float marks[n_o_s], sum=0;
int i;
  float avg;	  	
	for(i=0; i<n_o_s; i++)
	{ printf("Enter Marks of Subject %d:",i+1);
	  scanf("%f",&marks[i]);
	  sum = sum + marks[i];
	  }
		  avg = sum	/ n_o_s;
		printf("\nTotal Marks:%1.f",sum);
		printf("\nAverage Marks:%1.f \n",avg);
	for(i= n_o_s-1 ; i >= 0; i--)
		printf("Marks are %f \n", marks[i]); 







	if(n_o_s % 2 == 1)
		printf("Median is : %f" ,marks[n_o_s/2]);
	else
		printf("Median is : %f" ,((marks[n_o_s/2]+ marks[(n_o_s-2)/2])/2));
 // getch();
 
}
	

