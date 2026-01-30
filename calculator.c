#include <stdio.h>

int main() {
  int choice;
  int a, b;
    
        printf("\nCalculator Menu for two numbers:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("Enter first  number: ");
         scanf("%d",&a);
         printf("Enter  Second number:");
         scanf("%d",&b);
     
        switch (choice) {
            case 1:
                printf("Summation of %d and %d is : %d\n",a,b, a + b);
                break;
            case 2:
                printf("Subtraction of %d and %d is : %d\n",a,b, a - b);
                break;
            case 3:
                printf("Multiplication of %d and %d is : %d\n",a,b, a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Division of %d and %d is : %d\n",a,b, a / b);
                else
                    printf("Error!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
   

    return 0;
}
