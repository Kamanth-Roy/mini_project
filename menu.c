#include<stdio.h>
int main()
{

    char op,ch;
    //hellooo
    printf("<------WELCOME TO MY ROYAL SPICE------>\n");
    printf("Enter your choice: ");
    printf("1.Starter\n2.Main Course\n3.Bevarages\n4.Dessert\n5.exit\n");
    scanf("%c",&op);

    switch (op)
    {
        case '1':
        printf("You have choosen Starter\n");
        printf("1.Chicken 65\n2.Dargon Chicken\n3.chicken lollipop\n,4.paneer tikka\n");
        scanf(" %c", &ch);

        switch(ch)
        {
            case '1':
            printf("your oder is chicken 65\n");
            break;
            case '2':
            printf("your oder is Dragon chicken\n");
            break;
            case '3':
            printf("your oder is chicken lollipop\n");
            break;
            case '4':
            printf("your oder is panner tikka\n");
            break;
            default:
            printf("you have choosen wrong option.\n");
        }
        break;
 
        case '2':
        printf("You have choosen Main Course\n");
        printf("1.Chicken Biryani\n2.Mutton Biryani\n3.Prawns Biryani\n4.paneer Biriyani\n");
        scanf(" %c", &ch);

        switch(op)
        {
            case '1':
            printf("your oder is chicken Biriyani\n");
            break;
            case '2':
            printf("your oder isyour oder is Mutton Biriyani\n");
            break;
            case '3':
            printf("your oder is Prawns biriyani\n");
            break;
            case '4':
            printf("your oder is paneer Biriyani\n");
            break;
            default:
            printf("you have choosen wrong option.\n");
        }
        
        break;

        case '3':
        printf("You have choosen Beverages\n");
        printf("1.Fresh Lime Soda\n2.Watermelon Juice\n3.Mango Shake\n4.Oreo Shake\n");
        scanf(" %c", &ch);

        switch(op)
        {
            case '1':
            printf("your oder is Fresh Lime Soda\n");
            break;
            case'2':
            printf("your oder is Watermelon Juice\n");
            break;
            case '3':
            printf("your oder is Mango Shake\n");
            break;
            case '4':
            printf("your oder is Oreo Shake\n");
            break;
            default:
            printf("your oder is you choosen wrong option.\n");

        }
        break;

        case '4':
        printf("You have choosen Desserts\n");
        printf("1.Gulab Jamun\n2.Rasmalai\n3.Ice Cream\n4.Kulfi\n");
        scanf(" %c",&ch);

        switch(op)
        {
            case '1':
            printf("your oder is Gulab Jamun\n");
            break;
            case '2':
            printf("your oder is Rasmalai\n");
            break;
            case '3':
            printf("your oder is Ice Cream\n");
            break;
            case '4':
            printf("your oder is Kulfi\n");
            break;
            default:
            printf("you choosen wrong option.\n");
        }
        break;

        default:
        printf("sorry it is not avalaible present.\n");
        printf("Thank you visit again.\n");

    }
    return 0;
}