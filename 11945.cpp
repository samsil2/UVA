#include <iostream>

using namespace std;
int main()
{
    double penny, sum, rem, dif;
    int n, i, j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=0;
        for(j=1; j<=12; j++)
        {
            scanf("%lf",&penny);
            sum=sum+penny;
        }
        sum=sum/12.00;
        if(sum>=1000)
        {
            rem=(int)(sum/1000.00);
            dif=sum-(1000*rem);
            printf("%d $%.0lf,%.2lf\n",i,rem,dif);
        }
        else
        {
            printf("%d $%.2lf\n",i,sum);
        }
    }
    return 0;
}
