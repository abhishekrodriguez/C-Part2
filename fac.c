#include <stdio.h>
 int factorial(int number)
{
     if (number ==1 || number == 0){
         return 1;
    }
     else{
         return (number * factorial(number-1));
    }
}
  
int main(){
    int a;
    printf("Enter the number you want factorial of\n",a);
    scanf("%d",&a);
    printf("The factorial of %d is %d\n",a,factorial(a));
}