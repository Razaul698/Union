#include<stdio.h>

union test
{
    int x,y;
};

int main()
{
    union test t1;
    t1.x = 10;
    printf("X = %d\n",t1.x);
    printf("y = %d\n",t1.y);



    return 0;
}
