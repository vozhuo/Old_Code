#include<stdio.h>

typedef struct {
    double x,y;
} Point;
int convex(Point *p,int n)
{
    int i,j,k;
    int flag = 0;
    double z;
    if (n < 3)
        return(0);
    for (i=0;i<n;i++) {
        j = (i + 1) % n;
        k = (i + 2) % n;
        z = (p[j].x - p[i].x) * (p[k].y - p[j].y);
        z -= (p[j].y - p[i].y) * (p[k].x - p[j].x);
        if (z < 0)
            flag |= 1;
        else if (z > 0)
            flag |= 2;
        if (flag == 3)
            return -1; //CONCAVE
        }
    if (flag != 0)
        return 1; //CONVEX
    else
    return 0;
}
