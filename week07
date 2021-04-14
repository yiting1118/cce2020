## 進階題：迴文判斷
```c
#include <stdio.h>
#include <string.h>
int main()
{
   char a[3];
   for(int i=0;i<4;i++){//讀入字元
   scanf("%c",&a[i]);
   }
   if(a[0] == a[3] &&a[1]==a[2])printf("YES\n");//判斷1跟4，2跟3是否一樣
   else printf("NO\n");
}
```
## 進階題：函數反序排列數字
```c
#include <stdio.h>
int f(int n)
{
   int p;
   int m=0;
   while(n>0)
   {
      p=n%10;
      n=n/10;
      m=p+m*10;
   }
   return m;
}
int main()
{
   int n,m;
   scanf("%d",&n);
   printf("%d\n",f(m));
}
```
## 進階題：陣列找出現次數
```c
#include <stdio.h>
int main()
{
   char a[100];//包含0
   int i,x,n,count=0;
   for( i=0;i<100;i++){
       scanf("%d",&a[i]);
       if(a[i]==0) break;}
       
   scanf("%d",&x);//找X在數列中出現的次數
   n=i;//紀錄陣列個數
   
   for(int i=0;i<n;i++){
   if(a[i]==x) count++;
   }
   
   printf("%d\n",count);
}
```
## 進階題：判斷大小
```c
#include <stdio.h>
int f(int a,int b){
 if(a<b) return-1;
 if(a==b) return 0;
 if(a>b) return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```
## 進階題：計算一列整數的總和
```c
#include <stdio.h>
int main()
{
   int a,sum=0;
   while (a!=999)//999是終止條件
   {
      printf("Enter an integer ( 999 to end ): \n");
      scanf("%d",&a);//最後的a=999
      sum+=a;
   }
   printf("The total is: %d",sum-999);//減掉最後的a
}
```
## 基礎題：計算餘數 
```c
#include <stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   printf("%d",a%b);
}
```
## 基礎題：整數轉換等級 
```c
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n>=90) printf("A");
   else if(n<90 && n>=80) printf("B");
   else if(n<80 && n>=70) printf("C");
   else if(n<70 && n>=60) printf("D");
   else printf("F");
}
```
## 基礎題：計程車資計算
```c
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",(((n-1500)/250)*5)+100+5);
}
```
## 基礎題：找零錢 
```c
#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,(n%50)/10,((n%50)%10)/5,(((n%50)%10)%5)/1);
}
```
