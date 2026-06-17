#include<stdio.h>
int main()
{

    char op,ch;
    //hellooo
    printf("<------WELCOME TO MY DHABA------>\n");
    printf("Enter your choice: ");
    printf("1.Starter\n2.Main Course\n3.Dessert\n4.Exit\n");
    scanf(" %c", &op);

    switch (op)
    {
        case '1':
        printf("You have choosen Starter\n");
        printf("1.Chicken 65\n2.Dargon Chicken\n3.Panner Pakoda\n");
        //scanf(" %c", &ch);
        break;
 
        case '2':
        printf("You have choosen Main Course\n");
        printf("1.ChickenBiryani\n2.Mutton Biryani\n3.Prawns Biryani\n");
        //scanf(" %c", &ch);
        break;

        case '3':
        printf("You have choosen Dessert\n");
        printf("1.Gulab Jamun\n2.Rasgulla\n3.Kheer\n");
        //scanf(" %c", &ch);
        break;

        case '4':
        printf("You have choosen Exit\n");
        break;
    }
}