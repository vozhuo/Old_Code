#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int T,j=0;
    double x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        if((((y2-y1)/(y3-y1)-(x2-x1)/(x3-x1))*((y4-y1)/(y3-y1)-(x4-x1)/(x3-x1))>0)||(((y1-y2)/(y4-y2)-(x1-x2)/(x4-x2))*((y3-y2)/(y4-y2)-(x3-x2)/(x4-x2)))>0)
            printf("Case %d: concave\n",++j);
        else
            printf("Case %d: convex\n",++j);
    }
}
