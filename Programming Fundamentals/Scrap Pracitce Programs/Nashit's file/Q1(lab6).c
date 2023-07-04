#include <stdio.h>
#include <stdlib.h>


int main(){
	int i;
	int arr[10];
	int value;
	
	
	for(i=0;i<10;i++){
		arr[i]=rand()%5;
		
	}
	
	for(i=0;i<10;i++){
	printf("Enter the value: ");
		scanf("%d",&value);
	if(arr[i]==value){
		break;
	}

}

printf("Value found!");
	
	
	
	












   return 0;
}
