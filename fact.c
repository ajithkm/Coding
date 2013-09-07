#include<stdio.h>
unsigned long long int zerofact(unsigned long int input)
{
        unsigned long long int count=0,fact=1,i=4;
        while(i<=input)
        {
            fact=fact*i;
            --input;
            if( ((fact%10)==0) )
            {
                ++count;
                fact=1;
            }

        }
        return count;
}

main()
{
    unsigned long int lines;
    scanf("%d",&lines);
    printf("%d",zerofact(lines));
    return 0;

}
