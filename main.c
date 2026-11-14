#include <stdio.h>

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
