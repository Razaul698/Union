#include<stdio.h>

union test
{
    int x,y,z;
};

int main()
{

    union test t1;
    t1.x = 30;
    printf("X = %d\n",t1.x);
    printf("Y = %d\n",t1.y);
    printf("Z = %d\n",t1.z);


    return 0;
}
