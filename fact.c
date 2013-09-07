#include<stdio.h>
int zerofact(unsigned long int input)
{
        unsigned long long fact=1,i=1;
        int count=0;
        while(input>0)
        {
            fact*=input;
            printf("%d\n ",fact);
            --input;
            while( ((fact%10)==0) && (fact>1))
            {
                ++count;
                fact=(fact/10);
                if( ((fact%2)!=0) || ((fact%5)!=0) )
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
