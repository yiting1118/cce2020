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
