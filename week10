```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void *p1,const void*p2){
     return strcmp ((char*)p1,(char*)p2);
}
int main()
{
   int T;
   scanf("%d\n",&T);//讀資料
   
   for(int t=0;t<T;t++){//讀資料 get()一整行
       int N=0;//需要知道有幾棵樹
       while(gets(line)!=NULL){//讀失敗會變NULL
             if(strcmp(line,"")==0)break;//空行要離開
             
             strcpy(tree[N],line);//把樹的名字放到tree
             
             N++;//樹的統計
       }
       
       qsort(tree,N,32,compare);
       
       if(t>0)printf("\n");//前面有空白
       int ans=1;//新的開始
       printf("%s ",tree[0]);
       for(int i=0;i<N-1;i++){
          if(strcmp(tree[i],tree[i+1])==0){
             ans++;
          }else{//不相同，收尾+新的開始
                printf("%.4f\n",100*ans/(float)N);//收尾
                ans=1;
                printf("%s ",tree[i+1]);//新的開始
           }

       }
       printf("%.4f\n",100*ans/(float)N);//最後收尾
   }   
}
```
