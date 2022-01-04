#include <stdio.h>
#include <stdlib.h>

int main()
{
    char type;
    float hour;
    printf("What type of car? Pick the initial\nSedan(S)\nLuxury(L)\nMPV(M)\nYour choice is: ");
    scanf("%c", &type);
    printf("\nHow long will you rent it (Hour)? ");
    scanf("%f", &hour);
    printf('user 2');
    
    if('S'==type||'s'==type){
        float rate = 20.00;
        if(hour>18){
            float total = rate*hour;
            float discount = total-total*10/100;
            printf("%.2f", discount);
            exit(0);
        }
        float total = rate*hour;
        printf("%.2f", total);
    }
    
    if('L'==type||'l'==type){
        float rate = 35.00;
        if(hour>18){
            float total = rate*hour;
            float discount = total-total*15/100;
            printf("%.2f", discount);
            exit(0);
        }
        float total = rate*hour;
        printf("%.2f", total);
    }
    
    if('M'==type||'m'==type){
        float rate = 45.00;
        if(hour>18){
            float total = rate*hour;
            float discount = total-total*20/100;
            printf("%.2f", discount);
            exit(0);
        }
        float total = rate*hour;
        printf("%.2f", total);
    }
}
