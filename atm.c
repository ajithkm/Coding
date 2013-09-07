#include<stdio.h>
main()
{
    unsigned int wa;
    float ibalance;
    scanf("%d",&wa);
    scanf("%f",&ibalance);
    if( ((wa%5)==0) && (ibalance>=(wa+0.50)) )
    {
        ibalance-=(wa+0.50);
        printf("%0.2f",ibalance);

    }
    else
        printf("%0.2f",ibalance);
    return 0;

}

