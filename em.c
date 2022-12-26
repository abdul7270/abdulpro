#include<lpc214x.h>
void delay(int k)
{
int i,j;
for(i=0;i<5000;i++)
for(j=0;j<5000;j++);
}
#define led1 1<<4
#define led2 1<<3
#define led3 1<<2
#define led4 1<<1

int main()
{
IO0DIR=led1|led2|led3|led4;
IO0CLR=led1|led2|led3|led4;
while(1)
{
delay(500);
IO0SET=led1|led2|led3|led4;
delay(500);
IO0CLR=led1|led2|led3|led4;
}
}


