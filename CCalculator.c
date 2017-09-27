//---------------------------------libraries---------------------------------\\

#include <stdio.h>


//---------------------------------program begins---------------------------------\\

int main(){


//---------------------------------variable creation---------------------------------\\

    float numb1;
    float numb2;
    int action;
    int selection;
    float result;

//---------------------------------intro message---------------------------------\\

    printf("Greetings human!\n");
    printf("Let's begin by initializing our constants..\n");
    printf("------------------------------------------------------------------------------\n\n");
    printf("Give me the first number you want me to utilize: ");

//---------------------------------variable scan---------------------------------\\

    scanf("%f",&numb1);
    printf("And now the second one: ");
    scanf("%f",&numb2);
    printf("------------------------------------------------------------------------------\n\n");
    printf("now choose action!\n");
    printf("1) +\n");
    printf("2) -\n");
    printf("3) *\n");
    printf("4) /\n");

//---------------------------------action reading function---------------------------------\\

    do{
    scanf("%d",&action);
    if(action!=1 && action!=2 && action!=3 && action!=4){
            printf("This option is unavailable. Please choose a valid one. ");
    }
    }while (action!=1 && action!=2 && action!=3 && action!=4);

//---------------------------------resolver---------------------------------\\

    if (action == 1)
        result = numb1 + numb2;

    if (action == 2){
        printf("1) %.2f - %.2f\n",numb1,numb2);
        printf("or\n");
        printf("2) %.2f - %.2f\n",numb2,numb1);
        do{
        scanf("%d",&selection);
        if(selection!=1 && selection!=2){
            printf("This option is unavailable. Please choose a valid one.");
    }
    }while (selection!=1 && selection!=2);
        if (selection == 1)
            result= numb1 - numb2;
        if (selection == 2)
            result= numb2 - numb1;
    }

    if (action == 3)
        result = numb1 * numb2;

    if (action == 4){
        printf("1) %.2f / %.2f\n",numb1,numb2);
        printf("or\n");
        printf("2) %.2f / %.2f\n",numb2,numb1);
        do{
        scanf("%d",&selection);
        if(selection!=1 && selection!=2){
            printf("This option is unavailable. Please choose a valid one.");
    }
    }while (selection!=1 && selection!=2);

        if (selection == 1)
            result= numb1 / numb2;

        if (selection == 2)
            result= numb2 / numb1;
}

//---------------------------------result printer---------------------------------\\

    printf("\n------------------------------------------------------------------------------\n\n");
    if (action == 1)
        printf("-ADDITION-\n\n");
    if (action == 2)
        printf("-SUBTRACTION-\n\n");
    if (action == 3)
        printf("-MULTIPLICATION-\n\n");
    if (action == 4)
        printf("-DIVISION-\n\n");

    printf("Result: %.5f\n\n\n\n",result);

     printf("Use my calculating powers anytime!\n");

    printf("------------------------------------------------------------------------------\n\n");
    printf("Press ENTER to dismiss me\n\n");
    printf("------------------------------------------------------------------------------\n");
    printf("GitHub: creatorpanda\n");
    printf("creation of 2017\n");
    getch();
    return 0;
}
