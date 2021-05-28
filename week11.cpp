##第一題
```c
#include <stdio.h>
#include <string.h>//qsort()
#include <stdlib.h>//strcmp()
char line[2000][80];
char other[80];//把後面資料讀掉
int compare(const void *p1,const void *p2){
  char *s1=(char*)p1;
  char *s2=(char*)p2;
  int result = strcmp(s1,s2);
  if(result>0) return 1;
  if(result==0) return 0;
  if(result<0) return -1;
}
int main()
{
   int n,ans=1;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
   scanf("%s",line[i]);
   gets(other);//把後面資料讀掉
   }
   qsort(line,n,80,compare);//排序
   for(int i=0;i<n;i++){
   if(strcmp(line[i],line[i+1])==0){
   ans++;
   }
   else{
   printf("%s %d\n",line[i],ans);
   ans=1;
   }
  }
}
```
##第二題
```c
#include <stdio.h>
struct data
{
    int ans;
    char c;
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%c %d\n",box.c,box.ans);
}
```
##第三題
```c
#include <stdio.h>
typedef struct data
{
    int ans;//有幾個
    char c;//字母
}DATA;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%c %d\n",box.c,box.ans);
}
```
##第四題
```c
#include <stdio.h>
char line[2000];
int ans[256];//統計有幾個字母
int main()
{///Input 一次1整行
    
    for(int t=0;gets(line);t++){//清乾淨
 
     for(int i=0;i<256;i++)ans[i]=0;//字串的迴圈
     for(int i=0;line[i]!=0;i++){//第i個字母
         char c=line[i];//統計到ans裡面
         ans[c]++;
     }
 
     if(t>0) printf("\n");
     for(int i=0;i<256;i++){//印出
     if(ans[i]>0)printf("%d %d\n",i,ans[i]);
     }
}
}
```

