## 02
```c
void setup(){//設定，只做一次
     size(400,200);
     textSize(40);
}
String line="";
String Q="world";
void draw(){//每秒60次
     background(0);
     text("Q: "+Q,100,100);
     text("You: "+line,100,150);
}
void mousePressed(){
     line=line+"a";
}
```
## 03打字
```c
void setup(){//設定，只做一次
     size(400,200);
     textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
     background(0);
     text("Q: "+Q,100,100);
     text("A: "+line,100,150);
}
void keyPressed(){
     line=line+key";
}
```
## 04
```C
void setup(){//設定，只做一次
     size(400,200);
     textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
     background(0);
     text("Q: "+Q,100,100);
     text("A: "+line,100,150);
}
void keyPressed(){
     int len=line.length();
     if(key>='a' && key<='z')line=line+key;//小寫
     if(key>='A' && key<='Z')line=line+key;//大寫
     if(key ==BACKSPACE) line=line.substring(0,len-1);//刪除，功能等同delete
}
```
## 05
```c
void setup(){//設定，只做一次
     size(400,200);
     textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
     background(0);
     int len=line.length();text(len,100,50);//0
     text("Q: "+Q,100,100);
     text("A: "+line,100,150);
}
void keyPressed(){
     int len=line.length();text(len,100,50);
     if(key>='a' && key<='z')line=line+key;//小寫
     if(key>='A' && key<='Z')line=line+key;//大寫
     if(key ==BACKSPACE && len>0) line=line.substring(0,len-1);//刪除，功能等同delete
}
```
## 06
```c
void setup(){//設定，只做一次
     size(400,200);
     textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
     background(0);
     text("Score: "+score,100,50);
     text("Q: "+Q,100,100);
     text("A: "+line,100,150);
}
int score=0;
void keyPressed(){
     int len=line.length();text(len,100,50);
     if(key>='a' && key<='z')line=line+key;//小寫
     if(key>='A' && key<='Z')line=line+key;//大寫
     if(key ==BACKSPACE && len>0) line=line.substring(0,len-1);//刪除，功能等同delete
     if(key == ENTER){//算分數
       if( line.equals(Q)==true ){
         score++;
       }
       else score--;
     }
}
```
## 07
```c
void setup(){//設定，只做一次
     size(400,200);
     textSize(40);
}
String line="";
String []Q={"hello","world","other"};
int Qi=0;
void draw(){//每秒60次
     background(0);
     text("Score: "+score,100,50);
     text("Q: "+Q[Qi],100,100);
     text("A: "+line,100,150);
}
int score=0;
void keyPressed(){
     int len=line.length();
     if(key>='a' && key<='z')line=line+key;//小寫
     if(key>='A' && key<='Z')line=line+key;//大寫
     if(key ==BACKSPACE && len>0) line=line.substring(0,len-1);//刪除，功能等同delete
     if(key == ENTER){//算分數
       if( line.equals(Q[Qi])==true ){
         score++;
         Qi++;
         line="";
       }
       else score--;
     }
}
```
