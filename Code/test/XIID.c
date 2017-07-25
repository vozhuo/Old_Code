#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double x,y,n;
    while(~scanf("%lf%lf%lf",&x,&y,&n))
    {
        int a,b,i,p,q;
        double min=100,ave,ave1,a1,a2;
        for(i=1; i<=n; i++)
        {
            a1=(x*1.0/y)*i;
            if(a1-(int)a1>0.5)
                a=(int)a1+1;
            else
                a=(int)a1;
            ave=fabs((a*1.0/i-x/y));
            if(ave==min)
                continue;
            if (ave<min)
            {
                p=a;
                q=i;
                min=ave;
            }

        }
        printf("%d/%d\n",p,q);
    }
}
