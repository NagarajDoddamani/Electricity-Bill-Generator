#include<stdio.h>
#define mini 100
int main()
{
    char name[50];
    int unit;
    float amount,bill,tax=0;
    
    printf("\n\n\t Electricity Bill Generator\n");
    
    printf("Enter your name : ");
    scanf(" %s",&name);
    printf("Enter Consumed Unit : ");
    scanf("%d",&unit);
    
    if(unit>0)
    {
            if(unit<=200)
            amount=(unit*.80);
        
            else if(unit<=300)
            amount=(160+((unit-200)*0.90));
        
            else if(unit>300)
            amount=(250+(unit-300)*1);
        
            else
            printf("\nThe %d is below the 0 unit",unit);
        
            if(amount+mini>400)
            {
                tax=((amount + mini)/100)*15;
                bill = tax + amount + mini;
            }
        
            else 
                bill = amount + mini;
                
        printf("\n\nThe Amount = %f\n",amount);
        printf("The Minimum Charge = %d\n",mini);    
        printf("TAX = %f\n\n",tax);
        
        printf("Name of Holder :- %s\n",name);
        printf("The Charge Of Electricity Bill = %f\n",bill);
    }
        
    else
    {    
        bill = mini;
        printf("Name of Holder :- %s\n",name);
        printf("The Charge Of Electricity Bill = %f\n",bill);
    }   
    printf("\tTHANK YOU\n");

    return 0;
}