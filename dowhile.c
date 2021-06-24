#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, i = 1;
    printf("Enter the nuber you want the series upto\n");
    scanf("%d", &a);
    do
    {
        printf("%d\n", i);
        i += 1;
    } while (i <= a);
    return 0;
}
