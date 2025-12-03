#include <stdio.h>
// login
int verifyPin(int pin, int input){
    if(pin==input){
        printf("LOGGED IN \n");
        return 0;
    }else{
        printf("INCORRECT, PIN TRY AGAIN \n");
        return 1;
    }
}


int main(){
    int pin = 1234;
    int input;
    double account_balance = 0.0;
    double amount;
    int loggedIn;
    printf("Enter PIN to log in: \n");
    scanf("%d", &input);

    loggedIn = verifyPin(pin,input);

    while (loggedIn != 0){
        printf("\nEnter PIN to log in: ");
        scanf("%d", &input);
        loggedIn = verifyPin(pin, input);
    }

    char option;
    while (loggedIn == 0){
        printf("\nEnter an option: \n");
        printf("1. Balance Inquiry \n2. Deposit \n3. Withdraw \n4. Exit \n\n");
        scanf(" %c", &option);
        
        switch(option){
            case '1':
                printf("Your Balance is %f \n", account_balance);
                break;
            case '2':                               
                printf("Enter Amount to deposit \n");
                scanf("%lf", &amount);
                amount > 0  ?   account_balance += amount : printf("Enter a valid amount");
                printf("New Balance is: %f \n", account_balance);
                break;
            case '3':                
                printf("Enter Amount to Withdraw \n",option);
                scanf("%lf", &amount);
                amount > 0 & amount < account_balance ?   account_balance -= amount : printf("Enter a valid amount");
                printf("New Balance is %f \n",account_balance);
                break;
            case '4':
                printf("You have logged out");
                loggedIn = 1;
                break;
            default:
                option = '0';
        }

    }
        // return 0;
}