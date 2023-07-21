#include <stdio.h>
int main() {
       int num , sum = 0 , i = 1;
       double amount = 0;

       while (i > 0)
       {
        printf("Enter Number : ");
        scanf("%d", &num);
        if(num<=0) break;
        sum += num;
        amount += 1;
       }

       printf("summation = %d\n", sum);
       printf("Average = %f\n", sum / amount);
       return 0;
       
        
}
