#include <stdio.h>

 int main(void)
 {
    int price;
    int q;
    int qp;
    int total;
    
    do
    {
    printf("Enter price : ");
    scanf("%d",&price);
    printf("Enter quantity : ");
    scanf("%d",&q);
    qp = price * q;
    total = total + qp;
    }while(price!=0);//enter 0 for break loop
    
    printf("Total bill is Rs.%d/-",total);

 }