#include <stdio.h>

int main(){
	int arr[50];
	int i,sum=0,zero=0,neg=0,pos=0;
	for(i=0;i<8;i++){
		printf("Enter the value %d: ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			sum=sum+arr[i];
			pos++;
		}
		else if(arr[i]<0){
			neg++;
		}
		else{
			zero++;
		}
	}
	printf("\nPositive Numbers: %d",pos);
	printf("\nNegative Numbers: %d",neg);
	printf("\nZero Numbers: %d",zero);
	printf("\nSum positive numbers are: %d",sum);
	
	
	
	
	return 0;
}
