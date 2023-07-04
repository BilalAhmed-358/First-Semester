#include<stdio.h>
int main()
{
	int no_of_items,total;
	char item;
	printf("Please choose one of the following snacks\nB=Burger\nF=FrenchFries\nP=Pizza\nS=Sandwiches\nYou must select any of the given optios otherwise the program won't work\n");
	scanf("%c",&item);
	switch(item)
	{
			case 'B':
			printf("Please enter how many burgers you want...\n");
			scanf("%d",&no_of_items);
			total=no_of_items*200;
			printf("Your total bill is %d", total);break;
			
			case 'b':
			printf("Please enter how many burgers you want...\n");
			scanf("%d",&no_of_items);
			total=no_of_items*200;
			printf("Your total bill is %d", total);break;
			
			case 'F':
			printf("Please enter how many Frech fries you want...\n");
			scanf("%d",&no_of_items);
			total=no_of_items*50;
			printf("Your total bill is %d", total);break;
			
			case 'f':
			printf("Please enter how many Frech fries you want...\n");
			scanf("%d",&no_of_items);
			total=no_of_items*50;
			printf("Your total bill is %d", total);break;
			
			case 'P':
			printf("Please enter how many Pizzas you want...\n");
			scanf("%d",&no_of_items);
			total=no_of_items*500;
			printf("Your total bill is %d", total);break;
			
			case 'p':
			printf("Please enter how many Pizzas you want...\n");
			scanf("%d",&no_of_items);
			total=no_of_items*500;
			printf("Your total bill is %d", total);break;
			
			case 'S':
			printf("Please enter how many Sandwiches you want...\n");
			scanf("%d",&no_of_items);
			total=no_of_items*150;
			printf("Your total bill is %d", total);break;
			
			case 's':
			printf("Please enter how many Sandwiches you want...\n");
			scanf("%d",&no_of_items);
			total=no_of_items*150;
			printf("Your total bill is %d", total);break;
	}
	getch();
	return 0;
}
