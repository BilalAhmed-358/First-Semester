#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr,toy_size,box_size;
	printf("Enter The toy's approximate Size\n");
	scanf("%d",&toy_size);
	ptr=(int*)malloc(toy_size*sizeof(int));
	printf("Enter the size of the box\n");
	scanf("%d",&box_size);
	ptr=realloc(ptr,box_size*sizeof(int));
	free(ptr);
}
