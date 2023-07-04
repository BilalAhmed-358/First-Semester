#include <stdio.h>

int main(){
	int base,power,i,ans;
	printf("Enter the base: ");
	scanf("%d",&base);
	
	printf("Enter the power: ");
	scanf("%d",&power);
	
    for(i=1;i<=power;i++){
    	if(i==1)
    	ans=base*1;
    	else if(i!=1)
    	ans=ans*base;
	}
	printf("Answer = %d",ans);
	
	
	
	
	
	return 0;
}
