#include<stdio.h>
#include<stdlib.h>
main()
{
    int no_lines;
    int count=0,temp,i;
    scanf("%d",&no_lines);
    for(i=0;i<no_lines;++i)
    {
        scanf("%d",&temp);
        count=0;
        while(temp>0)
        {
            temp=temp/5;
            count+=temp;

        }
        printf("%d\n",count);

    }
    return 0;
}
