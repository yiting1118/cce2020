##第一題
```C
#include <stdio.h>
char line[2000];
int main()
{
   for(int t=0;gets(line);t++){//Input
      int ans[256]={};
   for(int i=0;line[i]!=0;i++){
      char c=line[i];
      ans[c]++;
   }//字串迴圈
   if(t>0)printf("\n");//前面的空白
   for(int i=0;i<256;i++){//Output
   if(ans[i]>0)printf("%d %d\n",i,ans[i]);
   }
 }
}
```
##第二題
```C
#include <stdio.h>
char line[2000];
int main()
{
   for(int t=0;gets(line);t++){//Input
      int ans[256]={};//{0,0,0,0...}
      char c[256]={};//{0,1,2,3....}
      for(int i=0;i<256;i++)c[i]=i;
      
   for(int i=0;line[i]!=0;i++){
      char c=line[i];
      ans[c]++;
   }//字串迴圈
   
   for(int i=0;i<256;i++){
      for(int j=i+1;j<256;j++){
          if(ans[i]>ans[j]){
          int temp=ans[i];//交換ans[]
          ans[i]=ans[j];
          ans[j]=temp;
          char t=c[i];//交換字母
          c[i]=c[j];
          c[j]=t;
      }
      if(ans[i]==ans[j]&&c[i]<c[j]){
          int temp=ans[i];//交換ans
          ans[i]=ans[j];
          ans[j]=temp;
          char t=c[i];//交換字母
          c[i]=c[j];
          c[j]=t;
   }
 }
 }

   if(t>0)printf("\n");//前面的空白
   for(int i=0;i<256;i++){//Output
   if(ans[i]>0)printf("%d %d\n",c[i],ans[i]);
   }
}
}
```
##第三題
```C
#include <stdio.h>
int a[100];
int main()
{
   int T;//Input有幾筆
   scanf("%d",&T);
   for(int t=0;t<T;t++){
       int N;
       scanf("%d",&N);
       for(int i=0;i<N;i++){//input到陣列
           scanf("%d",&a[i]);
       }
       int ans=0;
       
       for(int k=0;k<N-1;k++){
           for(int i=0;i<N-1;i++){//泡泡排序
               if(a[i]>a[i+1]){
               int temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
               ans++;
               }
            }
       }
           
       
       printf("Optimal train swapping takes %d swaps.\n",ans);
   }
}
```
