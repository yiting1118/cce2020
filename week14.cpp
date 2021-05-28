##01
```C
void setup(){//設定 只做一次
  size(300,200);
  float ans = random(60);//亂數取<60的數
  textSize(30);
  text( ans,0,30);
}

```
##02
```C
void setup(){
  size(300,200);
  textSize(30);
}
int ans=0;
void draw(){//畫圖每秒60次(60fps)
     background(#C68EFF);
     //int ans = (int) random(60);強制轉型casting
     text(ans,30,30);//會跳很快
}
void mousePressed(){//按滑鼠才做亂數
     ans = (int)random(60);
}
```
##03
```C
int []a={1,2,3,4,5,6,7,8,9,10};
void setup(){
  size(400,200);
  textSize(30);
}
void draw(){
     background(#C68EFF);
     for(int i=0;i<10;i++){
     text( a[i] , i*40 , 100 );
     }
}
void mousePressed(){
  int i1 = (int)random(10);
  int i2 = (int)random(10);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;//交換
     
}
```
##04
```C
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;
}
void draw(){
     background(#C68EFF);
     for(int i=0;i<6;i++){//49只秀6個數
     text( a[i] , i*40 , 100 );
     }
}
void mousePressed(){
  for(int i=0;i<1000;i++){
  int i1 = (int)random(49),i2 = (int)random(49);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }  
}
```
##05

int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;
  for(int i=0; i<10000; i++){//抽獎前先排好
    int i1=(int)random(49),i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2]=a[i2]=temp;
  }
}
int N=0;
void draw(){
     background(#C68EFF);
     for(int i=0;i<N;i++){//49只秀6個數
     fill(255);ellipse(50+i*50,100,40,40);
     textAlign(CENTER,CENTER);//文字對齊
     fill(0); text( a[i] , 50+i*50 , 100 );
     }
}
void mousePressed(){
  N++;//數字已經決定了，只是把它印出來
  }  

  ```
