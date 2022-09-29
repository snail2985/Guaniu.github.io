#include<stdio.h>

int main()
{   /*u   v    t
    10  16  10
    16  10  6
    10  6   4
    6   4   2
    4   2   0
    2   0*/     
    int u;
    int v;
    scanf("%d %d", &u,&v);
    while(v!=0)
    {
        int temp=u%v;
        u=v;
        v=temp;
    }
    printf("%d",u);
    return 0;
}
  
