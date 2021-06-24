#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=0;i<10;i++){
        printf("%d\nEnter the Age\n", i);
        scanf("%d",&j);
        // if (j>10)
        // {
        //     printf("Age greater than 10");
        //     break;
        // }
        if (j>10){
            continue;
        }
        printf("Age is lass than 10\n");
    }
    return 0;
}
