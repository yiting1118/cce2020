##01
```C
import processing.sound.*;
SoundFile player;
void setup(){ //設定 只做一次
  size(400,200);
  textSize(40); //字型大小
  player= new SoundFile(this,"tada.mp3");
}

void draw(){ //畫圖,每秒60次
  background(#DBA6F2);
  int s = second(); // 秒鐘
  text(9-s%10,100,100);
  if(9-s%10==0)player.play();
}
```
##
```c
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"bell.mp3");
}
void draw(){
  background(#DBA6F2);
}
void mousePressed(){
  if(player.isPlaying()){
    player.stop(); 
  }else{
   player.play(); 
  }
}
```
##03(java)
```c
function setup(){ //設定 只做一次
  createCanvas(400,200);
  textSize(40); //字型大小
}

function draw(){ //畫圖,每秒60次
  background(219,166,242);
  let s = second(); // 秒鐘
  text(s,100,100);
}
```

