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
