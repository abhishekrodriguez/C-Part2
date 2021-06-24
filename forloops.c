#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    b=1;
    printf("Enter the number you want up to\n");
    scanf("%d", &a);
    for (b=1;b<=a;b++){
        printf("%d",b);
    }
    return 0;
}
