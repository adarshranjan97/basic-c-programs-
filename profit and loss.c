#include <stdio.h>

int main()
{
    
    int cp;
    int sp;
    int amount;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the selling price: ");
    scanf("%d", &sp);

     if (sp > cp) {
        
        amount = sp - cp;
        printf("profit = %d", amount);
    }
    
    else if (cp > sp) {
       
        amount = cp - sp;
        printf("loss = %d", amount);
    }
   
    else {
        printf("No profit no loss\n");
    }
    return 0;
}
