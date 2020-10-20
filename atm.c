#include<stdio.h>
int atm(){
    int pin,k=1,choice,withdeaw,deposit;
    while(pin != 1520){
        printf("Enter your secret pin number: ");
        scanf("%d",&pin);
        if(pin != 1520){
            printf("Please enter valid password\n");
        }
    }
    do{
        printf("****Welcome To ATM Service**** \n");
        printf("1. check Balance\n");
        printf("2. Withdrew Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("***********************************\n\n");
        printf("Enter your Choice: \n");
        scanf("%d", &choice);
        switch(choice)
        {
    case 1:
            printf("\m Your Balance in rs : %lu"amount);
            break;
    case 2:
            printf("\n Enter The Amount To Withdraw: ");
            scanf("%lu",withdraw);
            if(withdeaw % 100 !=0){
                printf("\n Please Enter The Amount In Multiples Of 100");
            }
            else if(withdraw>(amount - 500)) {
        }
            break;
        }
        printf("\n Do You Wish To Have Another Transaction?(Y/N): \n");
        scanf("%c",&transaction);
        if(transaction == 'n' || transaction == 'n'){

        }
    }
    while(!k);
    printf("\n\nThank For using our ATM ");

    return 0;
}
