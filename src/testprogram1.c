#include<stdio.h>

int fun(int x, int y)
{
        int val;
        if(y == 0)
        {
                printf("division not possible, as number divided by 0 give you a infine value...\n");
        }
        else
        {
                val = x/y;
                printf("output value is %d\n",val);
        }
}
