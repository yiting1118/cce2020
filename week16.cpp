## 01
```c
void setup(){//設定  只做一次
     size(400,200);
}
void draw(){//畫圖  每秒60次
     background(209,167,255);//RGB 3色
     ellipse(50,50,80,80);
}//  畫圓     圓心 寬 高
```
## 02
```C
void setup(){//設定  只做一次
     size(400,200);
}
void draw(){//畫圖  每秒60次
     background(209,167,255);//RGB 3色
     fill(255);//白
     ellipse(50,50,80,80);
     fill(255,0,0);//紅
     float stop=mouseX/50.0;
     text(stop, 200,100);
     arc(100,100,180,180,0,stop);
}
```
## 03
```c
void setup(){//設定  只做一次
     size(400,200);
     fill(255,0,0);
     textSize(40);
}
int degree=0;
void draw(){//畫圖  每秒60次
     background(209,167,255);//RGB 3色
     arc(100,100,180,180,radians(90),radians(180));
}
```
## 04
```c
void setup(){//設定  只做一次
     size(400,200);
     fill(255,0,0);
     textSize(40);
}
float shift=0;
void draw(){//畫圖  每秒60次
     background(209,167,255);//RGB 3色
     float start = radians(90+shift);
     float stop = radians(180+shift);
     arc(100,100,180,180,start,stop);
     shift+=1;//轉動的速度
}
```
## 05
```C
void setup(){//設定  只做一次
     size(400,200);
     fill(255,0,0);
     textSize(40);
}
float shift=0,v=10;
void draw(){//畫圖  每秒60次
     background(209,167,255);//RGB 3色
     float start = radians(90+shift);
     float stop = radians(180+shift);
     arc(100,100,180,180,start,stop);
     if(v>0.0001){
     shift+=v;//轉動的速度
     v=v*0.99;//速度會慢慢減速
    }
     text(shift,200,100);//印出shift
     text(v,200,150);
}
```
## 06
```C
float shift=0,v=0;
void mousePressed(){
     v=random(10)+5;
}
void draw(){//畫圖  每秒60次
     background(209,167,255);//RGB 3色
     float start = radians(90+shift);
     float stop = radians(180+shift);
     arc(100,100,180,180,start,stop);
     if(v>0.1){
     shift+=v;//轉動的速度
     v=v*0.99;//速度會慢慢減速
    }
     text(shift,200,100);//印出shift
     text(v,200,150);
}
```
## 07
```c
void setup(){//設定  只做一次
     size(400,200);
     fill(255,0,0);
     textSize(40);
}
float shift=0,v=0;
void mousePressed(){
     v=random(10)+5;
}
void draw(){//畫圖  每秒60次
     background(209,167,255);//RGB 3色
     for(int i=0;i<24;i++){
       if(i%3==0)fill(0);
       if(i%3==1)fill(255);
       if(i%3==2)fill(200,180,0);
     float start = radians(0+shift+i*360/24);
     float stop = radians(360/24+shift+i*360/24);
     arc(100,100,180,180,start,stop);
     }
     if(v>0.1){
     shift+=v;//轉動的速度
     v=v*0.99;//速度會慢慢減速
    }
     text(shift,200,100);//印出shift
     text(v,200,150);
}
```
