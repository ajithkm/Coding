#include<stdio.h>
main()
{
    int input[100],i=0;
    scanf("%d",&input[i]);
    while(input[i++]!=42)
        scanf("%d",&input[i]);
    i=0;
    while(input[i]!=42)
        printf("%d\n",input[i++]);

}
