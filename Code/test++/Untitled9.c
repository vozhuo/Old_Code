#include<stdio.h>
int main()
{
    int num;
    done:
        scanf("%d",&num);
        printf("%d\n",num*2);
        if((getchar())==EOF)
            break;
        else
            goto done;

    }
}
