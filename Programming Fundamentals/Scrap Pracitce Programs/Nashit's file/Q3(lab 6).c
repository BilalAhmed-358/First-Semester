#include <stdio.h>

int main(){
	int i;
	int arr[50];
	int temp,high=0,min=9999999;
	for(i=0;i<7;i++){
		printf("Enter the value of temprature on day %d: ",i+1);
		scanf("%d",&arr[i]);
	    if(arr[i]<min)
	    min=arr[i];
	    else if(arr[i]>high)
	    high = arr[i];
	}
	
	printf("\nHighest temprature: %d",high);
	printf("\nlowest temprature: %d",min);
	
	
	
	return 0;
}
