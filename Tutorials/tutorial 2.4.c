#include <stdio.h>
int main()
{
    struct item{
           int itemNo;
           double price;
           int quantity;
           }item1,item2;
           
    printf("Enter first item No : ",item1.itemNo);
    scanf("%d",&item1.itemNo);
    
    printf("Enter first item Price : ",item1.price);
    scanf("%lf",&item1.price);
    
    printf("Enter first item quantity : ",item1.quantity);
    scanf("%d",&item1.quantity);
    
    printf("Enter second item No : ",item2.itemNo);
    scanf("%d",&item1.itemNo);
    
    printf("Enter second price : ",item2.price);
    scanf("%lf",&item2.price);
    
    printf("Enter second item quantity : ",item2.quantity);
    scanf("%d",&item2.quantity);
    
    printf("\nItem No \t Price \t\t Quantity\n");
    printf("\t\t%d    \t\t\t  %.2lf     \t\t %d \n",item1.itemNo,item1.price,item1.quantity);
    
    printf("\t\t%d    \t\t\t  %.2lf     \t\t %d \n",item2.itemNo,item2.price,item2.quantity);
    
    
    return 0;
    
}
