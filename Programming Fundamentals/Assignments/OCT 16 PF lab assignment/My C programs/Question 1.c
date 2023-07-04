#include <stdio.h>
#include <conio.h>>
int main()
{ int tshirt,formal_shirt,wrist_watch,price_of_tshirt,price_of_formal_shirt,price_of_wrist_watch,total,total_price,money,money_returned;
printf("How much money do you have?");
scanf("%d",&money);
printf("Enter the number of T-shirts you bought\n");
scanf("%d",&tshirt);
printf("Enter the number of Formal Shirts you bought\n");
scanf("%d",&formal_shirt);
printf("Enter the number of Wrist watches you bought\n");
scanf("%d",&wrist_watch);
price_of_tshirt=500*tshirt;
price_of_formal_shirt=1000*formal_shirt;
price_of_wrist_watch=500*wrist_watch;
total= tshirt+formal_shirt+wrist_watch;
total_price=price_of_tshirt+price_of_formal_shirt+price_of_wrist_watch;
money_returned=money-total_price;
printf("You bought a total number of %d items and your total bill is %d\nYou will get %d money back\n",total,total_price,money_returned);
if(total_price>3000)
 {total_price=total_price*0.9;
 money_returned=money-total_price;
 printf("Since your bill is more than 3000 we will give you a 10%% discount on your total bill\nYour new bill is %d, The money returned to you will be %d",total_price,money_returned);}
else
 ("Thanks for shopping! Hope to see you soon!");
getch();
return 0;

}
