#include<stdio.h>
int main()
{
          int a,b;
          double c, C,F,i;
       char d, e;
       scanf("%c->%c", &d, &e);
           
             scanf("%d\n%d\n%lf", &a, &b, &c); 
             if(d=='C'&&e=='F')
          {   
             printf("C->F\n");
              for(i = a; i <= b; i+=c) 
        {
            F = i * 9 / 5 + 32;
            printf("%5.1lf -> %5.1lf\n", i, F);
        }
           }
    else
    {
        scanf("%lf\n%lf\n%lf", &a, &b, &c);
        printf("F->C\n");
        for(i = a; i <= b; i+=c)
        {
            C = (i - 32) * 5 / 9;
            printf("%5.1lf -> %5.1lf\n", i, C);
        }
    }
    return 0;
}


