#include <stdio.h>

int main() {


char name[100];   
printf("What's your name?\n");
fgets(name,sizeof(name), stdin);
printf("Hello,%s.\n",name);




char confirmation='Y';
do{


  int choice;
  int a,b;
  printf("This is Calculator Menu. What do you want to do ,%s?\n",name);
  printf("1. For addition, enter 1\n");
  printf("2. For substraction ,enter 2\n");
  printf("3. For multiplication, enter 3\n");
  printf("4. For division , enter 4\n");
  printf("Enter your choice: ");
  scanf(" %d", &choice);




if(choice==1){
int count,i;
printf("How many numbers: ");
scanf(" %d",&count);
int numbers[count],summation=0;

for(i=1;i<=count;i++)
 {
 printf("Enter %d number:",i);
 scanf(" %d",&numbers[i-1]);
 }

for (i=1;i<=count;i++){
summation=summation+numbers[i-1];
}

printf("The summation is : %d\n",summation);

}




else if(choice==2){
int num1,num2;
printf("Enter 1st Number :");
scanf(" %d",&num1);
printf("Enter 2nd Number :");
scanf(" %d",&num2);
printf("Subtraction of %d and %d is : %d\n",num1,num2,num1-num2);
}




else if (choice==3){
int count,i;
printf("How many numbers: ");
scanf(" %d",&count);
int numbers[count],multiplication=1;

for(i=1;i<=count;i++)
 {printf("Enter %d number:",i);
 scanf("%d",&numbers[i-1]);}

for (i=1;i<=count;i++){
multiplication=multiplication*numbers[i-1];
}

printf("The multiplication is : %d\n",multiplication);            
}





else if (choice==4){
int num1,num2;
printf("Enter 1st Number :");
scanf(" %d",&num1);
printf("Enter 2nd Number :");
scanf(" %d",&num2);

if (num2!= 0)
 printf("Division of %d and %d is : %d\n",num1,num2, num1/num2 );
else
printf("Error!\n");
}





else{
   printf("Invalid choice! Try again.\n");
}




printf("Do you want do any calculation ? Enter Y for yes and N for no : \n");   
scanf(" %c", &confirmation);



}while(confirmation=='Y');

 
 
 return 0;
}
