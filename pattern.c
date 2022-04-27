#include<stdio.h>
main()
{
    int i,j,k,h,l,m;
    for(j=10,i=0;i<j;i++,j--)
    {
        h=j;
        l=j;
        m=j*2;
        while(h>0)
        {
            printf(" ");
            h--;
        }
        printf("*");
        k=i*2;
        while(k>0)
        {
            printf(" ");
            k--;
        }
        printf("*");
        printf("\n");
    }
    if(i<(j+1))
    {
        while(l>0)
        {
            printf(" ");
            l--;
        }
    }
    if(i<(j+1))
    {
        m=m-3;
        while(m>0)
        {
            printf("_");
            m--;
        }
    }

}

