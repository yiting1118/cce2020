# cce2020
程式碼
## 第一題
```C
#include <stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   printf("%d=50*%d+5*%d+1*%d\n",a,a/50,(a%50)/5,(a%5)/1);
}
```
## 第二題
```C
#include <stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   printf("%d=50*%d+5*%d+1*%d\n",a,a/50,(a%50)/5,(a%5)/1);
}
```
## 第三題
```C
#include <stdio.h>
int main()
{
   int ans=0,a[10];
   for(int i=0;i<10;i++){
      scanf("%d",&a[i]);
      if(a[i]%3==0) ans=ans++;
   }
   printf("%d\n",ans);
}
```
##第四題
```C
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>90||n==90)printf("A");
    else if(n<90||n==80)printf("B");
    else if(n<80||n==60)printf("C");
    else printf("F");

}
```
## 第五題
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
