#include <stdio.h>
int main()
{
 int choice,qty,rate,price;
 printf("\nMENU CARD \nSelect your food item \n1.Pizza\n2.Burger \n3.Pasta \n4.French Fries \n5.Sandwich\n ");
 printf("\n enter your choice :\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
    printf("\nfood item:pizza.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=239;
    price=qty*rate;
    printf("\nprice :%d",price);
    break;
  case 2:
    printf("\nfood item:burger.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=129;
    price=qty*rate;
    printf("\nprice :%d",price);
    break;
  case 3:
    printf("\nfood item:pasta.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=179;
    price=qty*rate;
    printf("\nprice :%d",price);
    break;
  case 4:
    printf("\nfood item:french fries.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=99;
    price=qty*rate;
    printf("\nprice :%d",price);
    break;
  case 5:
    printf("\nfood item:sandwich.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=149;
    price=qty*rate;
    printf("\nprice :%d",price);
    break;
  default:
    printf("\nSorry Unavailable...%ds",choice);
    break;
 }
return 0;
}
