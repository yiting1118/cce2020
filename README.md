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
