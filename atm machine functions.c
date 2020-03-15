#include <stdio.h>

float accbal = 25000000;

void withdrawal(){
    printf("\n \t\tselect an option\n");
    printf("\n (a) savings account \t (b) current account");
}

void balance(){
    printf("\n (a) savings account\t (b) current account");
    printf("\n select option A or B: ");
}

void pincheck(){
    printf("\n enter your old pin\n : ");
}

void bye(){
    printf("\n thanks for banking with us.....");
    exit(0);
}

main()
{
    int pin, amt;
    float newaccbal;
    char choice, slt1, slt2, option;
    int temp, temp1, temp2;
    pin = 26034;

    char c;
    printf("\n \t\t APTECH ATM MACHINE\n");
    printf("\n WELCOME CUSTOMER\n");

    for(;;)
    {
    printf("\n please enter your pin \n :");
    scanf("%d", &temp);


    if(pin == temp)
    {
        printf("\n welcome kalino ");

    printf("\n \t\tselect an operation (a - d)\n");
    printf("\n (a) withdrawal \t (b) check account balance ");
    printf("\n (c) change pin \t (d) exit operation ");
    printf("\n enter an option: ");
    scanf(" %c", &choice);


    // switch case(choice) for a option: withdrawal
    switch(choice)
    {
    case 'a':
    case 'A':
        withdrawal(); //function call

        while(c = getchar()!='\n');
        printf("\n enter an option :");
        scanf(" %c", &slt1);
    //switch case of slt1 starts here
        switch(slt1)
        {
    case 'a':
    case 'A':

            printf("\n \t\t SAVINGS ACCOUNT\n");
            printf("\n (a) #500 \t (b) #1000");
            printf("\n (c) #5000 \t (d) #10000");
            printf("\n (e) #15000 \t (f) #20000");
            printf("\n (g) #40000 \t (h) others ");
            while(c = getchar()!='\n');
            printf("\n select an option(a-h): ");
            scanf(" %c", &slt1);

            switch(slt1)
            {
            case 'a':
            case 'A':

                accbal = accbal - 500;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 500;
                }
            break;

            case 'b':
            case 'B':

                accbal = accbal - 1000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 1000;
                }
            break;

            case 'c':
            case 'C':

                accbal = accbal - 5000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 5000;
                }
            break;

            case 'd':
            case 'D':

                accbal = accbal - 10000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 10000;
                }
            break;

            case 'e':
            case 'E':

                accbal = accbal - 15000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 15000;
                }
            break;

            case 'f':
            case 'F':

                accbal = accbal - 20000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 20000;
                }
            break;

            case 'g':
            case 'G':

                accbal = accbal - 40000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 40000;
                }
            break;

            case 'h':
            case 'H':

                {
                    printf("\n  enter cash amount \n : ");
                    scanf("%d", &amt);
                    newaccbal = 0;
                    accbal = accbal - amt;
                }
                if(accbal >= 1000)
                {
                    printf("\n please wait while your transaction is being processed...");
                    printf("\n here is your cash");
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance: ");
                    accbal = accbal + amt;
                }
            break;

            default:
                printf("\n invalid option ");
            break;
            }
            break;
        break;
    case 'b':
    case 'B':

        printf("\n \t\t CURRENT ACCOUNT\n");
            printf("\n (a) #500 \t (b) #1000");
            printf("\n (c) #5000 \t (d) #10000");
            printf("\n (e) #15000 \t (f) #20000");
            printf("\n (g) #40000 \t (h) others ");
            printf("\n select an option(a-h): ");
            scanf(" %c", &slt1);

            switch(slt1)
            {
            case 'a':
            case 'A':

                accbal = accbal - 500;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 500;
                }
            break;

            case 'b':
            case 'B':

                accbal = accbal - 1000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 1000;
                }
            break;

            case 'c':
            case 'C':

                accbal = accbal - 5000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 5000;
                }
            break;

            case 'd':
            case 'D':

                accbal = accbal - 10000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 10000;
                }
            break;

            case 'e':
            case 'E':

                accbal = accbal - 500;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 15000;
                }
            break;

            case 'f':
            case 'F':

                accbal = accbal - 20000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 20000;
                }
            break;

            case 'g':
            case 'G':

                accbal = accbal - 40000;
                if(accbal >= 1000)
                {
                    printf("\n  wait while your transaction is being processed...");
                    printf("\n here is your cash\n");
                    newaccbal = 0;
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance");
                    accbal = accbal + 40000;
                }
            break;

            case 'h':
            case 'H':

                {
                    printf("\n  enter cash amount \n : ");
                    scanf("%d", &amt);
                    newaccbal = 0;
                    accbal = accbal - amt;
                }
                if(accbal >= 1000)
                {
                    printf("\n please wait while your transaction is being processed...");
                    printf("\n here is your cash");
                    printf("\n new account balance is : %.2f", accbal);
                }
                else
                {
                    printf("\n insufficient balance: ");
                    accbal = accbal + amt;
                }
            break;

            default:
                printf("\n invalid option ");
            break;

        }
        break;
        default:
                printf("\n sorry invalid option");
            break;
            }
    break;

   //switch case(choice) for b option which is statement of account
    case 'b':
    case 'B':
        balance();

        while(c = getchar()!='\n');
        scanf("%c", &slt2);

            switch(slt2)
            {
            case 'a':
            case 'A':
                printf("\n your savings account balance is currently: %.2f", accbal);
            break;

            case 'b':
            case 'B':
                printf("\n your current account balance is currently: %.2f", accbal);
              break;

            default:

              break;
            }
    break;

    case 'c':
    case 'C':
        pincheck(); //function call

        scanf("%d", &temp);

        if(pin == temp){
            printf("\n enter your new pin\n : ");
            scanf("%d", &temp1);
            printf("\n re-enter new pin\n : ");
            scanf("%d", &temp2);
            if(temp1 == temp2){
                printf("\n confirmed!");
                printf("\n new pin successful");
                pin = temp2;
            }
            else {printf("\n pin not matched");}
        }
        else {printf("\n invalid pin");}
    break;

    case 'd':
    case 'D':
        bye();
    break;
    // here ends the switch(choice) case
    default:
        printf("\n invalid option");
    break;
    }
    //to either repeat or exit the program
    printf("\n do you want to perform another transaction");
    //from here now
    for(;;)
    {
        printf("\n enter Y to continue or N to exit: ");
    while(c = getchar()!='\n');
    scanf("%c", &slt2);
    //change was made from here
    if(slt2=='n'||slt2=='N'){
    exit(0);
    }else if(slt2=='y'||slt2=='Y'){
        break;
    }
    else{printf("\n invalid option");};
    }

    //to here
  }
    else{
        while(c = getchar()!='\n');

    printf("\n invalid pin \n");

    for(;;)
    {

        printf("\n do you want to try again");
        printf("\n select Y if yes or N to exit: ");

    scanf("%c", &slt2);

    if(slt2=='n'||slt2=='N'){
    exit(0);
    }
    else if(slt2=='y'||slt2=='Y'){
       break;
    }
    else {printf("\n invalid option");}
    while(c = getchar()!='\n');
    }
    }

//a 2nd loop

    }


}
