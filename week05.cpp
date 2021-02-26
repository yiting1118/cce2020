#include <stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);

    if(b>a){
        for(int i;i<=a;i++){
            if(a%i==0&&b%i==0)
                temp=i;
        }
    }

    else if(a>b){
        for(int i;i<=b;i++){
            if(b%i==0&&a%i==0){
                temp=i;
                }
        }
    }
    a=a/temp;
    b=b/temp;
    printf("%d%d",a,b);
}



