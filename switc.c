#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter Your age");
    scanf("%d", &a);
    switch (a)
    {
        case 3:
           printf("The age is 3");
           break;
        case 13:
            printf("The age is 13");
            break;
        case 31:
            printf("The age is 31");
            break;
        default:
            printf("The age is not 3,13 or 31");
        break;
    }
    return 0;
}
