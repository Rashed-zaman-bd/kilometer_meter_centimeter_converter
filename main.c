#include <stdio.h>

int main(){
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed: %d\n", reversed);
    return 0;
}


/*
int main()
{
    int choice;
    float num, result;

    printf("\n===============  Choice converter  =============\n");
    printf("1. Centimeter to  Meter\n");
    printf("2. Centimeter to Kilometer\n");
    printf("3. Meter to Centimeter\n");
    printf("4. Meter to Kilometer\n");
    printf("5. Kilometer to meter\n");
    printf("6. Kilometer to Centimeter\n");
    printf("Enter your choice (1, 2, 3, 4, 5, 6): ");


    if(scanf("%d", &choice) != 1){
        printf("Invalid input.\n");
        return 1;
    }

    switch(choice){

        case 1:
            printf("Enter number Centimeter to Meter: ");
            if (scanf("%f", &num) != 1 ){
                printf("Invalid number.\n");
                return 1;
            }
            result = num / 100.0f;
            printf("%.2f Centimeter = %.2f Meter\n", num, result);
            break;

        case 2:
            printf("Enter number Centimeter to Kilometer: ");
            if(scanf("%f", &num) != 1){
                printf("Invalid number.\n");
                return 1;
            }
            result = num / 100000.0f;
            printf("%f Centimeter = %f Kilometer\n", num, result);
            break;

        case 3:
            printf("Enter number Meter to Centimeter: ");
            if (scanf("%f", &num) != 1 ){
                printf("Invalid number.\n");
                return 1;
            }
            result = num * 100.0f;
            printf("%.2f Meter = %.2f Centimeter\n", num, result);
            break;

        case 4:
            printf("Enter number Meter to Kilometer: ");
            if (scanf("%f", &num) != 1){
                printf("Invalid number.\n");
                return 1;
            }
            result = num / 1000.0f;
            printf("%.2f Meter = %.2f Kilometer\n", num, result);
            break;

        case 5:
            printf("Enter number Kilometer to Meter: ");
            if (scanf("%f", &num) != 1 ){
                printf("Invalid number\n");
            }
            result = num * 1000.0f;
            printf("%.2f Kilometer = %.2f Meter\n", num, result);
            break;

        case 6:
            printf("Enter number Kilometer to Centimeter: ");
            if  (scanf("%f", &num) != 1 ){
                printf("Invalid number.\n");
            }
            result = num * 100000.0f;
            printf("%.2f Kilometer = %.2f Centimeter\n", num, result);
            break;


        default:
            printf("Invalid choice.\n");
            return 1;
     }


    return 0;
}
*/

/*
Find even or odd number

int main(void){
    printf("Find a Event or Odd number\n");

    int num, result;

    printf("Enter your number: ");
    if (scanf(" %d", &num) != 1 ){
        printf("Invalid number.\n");
        return 1;
    }

    result = num % 2 == 0;

    if(result){
        printf("%d is even number", num);
    }else{
        printf("%d is odd number", num);
    }

    return 0;
}

*/
/*
Find even or odd number

int main(void){
    printf("Find a Even or Odd number\n");

    int num;

    printf("Enter your number: ");
    if(scanf(" %d", &num) != 1 ){
        printf("Invalid number\n");
        return 1;
    }

    if(num % 2 == 0){

        printf("%d is a Even number", num);
    }else{
        printf("%d id Odd number", num);
    }
    return 0;
}
*/

/*
Leap year

int main(void){

    printf("Search Leap Year\n");

    int num, result;

    printf("Enter year: ");
    if(scanf(" %d", &num) != 1){
        printf("Invalid number\n");
        return 1;
    }

        result = (num % 400 == 0) || (num % 4 == 0 && num % 100 !=0);

        if(result){
            printf("%d is leap year\n", num);
        } else{
            printf("%d is not leap year\n", num);
        }



    return 0;
}
*/


/*
Temperature converter

int main(){
    printf("Welcome to temperature converter\n");

    float tem, result;
    int choice;

    printf("1. Celsius to Kelvin\n");
    printf("2. Kelvin to Celsius\n");
    printf("Enter your choice(1 or 2): ");

    if(scanf(" %d", &choice) != 1){
        printf("Invalid number.\n");
        return 1;
    }

    switch(choice){

        case 1:
            printf("Enter number Celsius to Kelvin: ");
            if(scanf("%f", &tem) != 1){
                printf("Invalid number.\n");
                return 1;
            }
            result = tem + 273.15f;
            printf("%.2f Celsius = %.2f Kelvin\n", tem, result);
            break;

        case 2:
            printf("Enter number Kelvin to Celsius: ");
            if(scanf("%f", &tem) != 1){
                printf("Invalid number.\n");
                return 1;
            }
            result = tem - 273.15f;
            printf("%.2f Kelvin = %.2f Celsius\n", tem, result);
            break;


        default:
                printf("Invalid choice.\n");
                return 1;
    }

    return 0;
}

*/

/*
Calculator

int main(void){

    float num, result;
    char operator;

    printf("Enter first number: ");
    if (scanf("%f", &result) != 1 ){
        printf("Invalid number.\n");
        return 1;
    }

    while(1){
        printf("Enter operator (+, -, *, /) or = to finish: ");
        if (scanf(" %c", &operator) != 1 || operator == '=')
            break;

        printf("Enter second number: ");
        if (scanf("%f", &num) != 1){
            printf("Invalid number.\n");
            return 1;
        }

        switch(operator){

            case '+':
                result += num;
                break;

            case '-':
                result -= num;
                break;

            case '*':
                result *= num;
                break;
            case '/':
                if( num == 0){
                    printf("Error: Cannot divided by zero\n");
                    return 1;
                }
                result /= num;
                break;

            default:
                printf("Invalid number.\n");
                return 1;
        }

        printf("Current result = %.2f\n", result);
    }


    printf("Final result = %.2f\n", result);

    return 0;
}

*/

/*

int main()
{
    int num;
    int even;

    printf("Welcome to Even and Odd Checker\n");

    printf("\nEnter your number: ");

    if (scanf("%d", &num) != 1)
    {
        printf("Invalid number.\n");
        return 1;
    }

    even = num % 2 == 0;

    if (even)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
*/

