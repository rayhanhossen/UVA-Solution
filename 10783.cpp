#include<stdio.h>

int main()
{
    int i,a,b,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        int sum=0;
        scanf("%d %d",&a,&b);
        for(;a<=b;a++){
            if(a%2==1)
                sum+=a;
        }
    printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
