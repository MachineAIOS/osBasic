#include "stdio.h"
#include "stdlib.h"
#include "string.h"
Inforamtion hugePool1;
cell hugePool2;
class cell
{
   int stop=0;
   int init()
   {
     stop=0;
     createThread(loopThread);
   }
   void loopThread()
   {
      initRobot();
      while(!stop)
      {
         inputInforamtion();//get information from pool
         work();
         outputInforamtion();//write information to pool
      }
   }
}

void main(int argc,char **argv)
{
  printf("a ai os system which it change world!\n");
  while(1)
  {
    input_image();
    input_audio();
    build_net();
    learn_net();
    cell_built();
    act();
    clear();
  }
}
