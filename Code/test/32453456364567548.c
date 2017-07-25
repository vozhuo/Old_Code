#include <stdio.h>
#include <math.h>

int main() {
    int x,y,n,a,b,i,j;
    double diff,mindiff;
    while(scanf("%d%d%d",&x,&y,&n) == 3) {
        if(n >= y) {
            printf("%d/%d\n",x,y);
            continue;
        }
        a = x, b = y;
        mindiff = (double)a/b;
        for(i = 1; i < 10000; ++i) {
            for(j = 0; j < 100000; ++j) {
                diff =  fabs((double)x/y - (double)j/i);
                if(diff < mindiff) {
                    mindiff = diff;
                    a = j, b = i;
                }
            }
        }
        printf("%d/%d\n",a,b);
    }
    return 0;
}
