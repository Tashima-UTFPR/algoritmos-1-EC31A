#include <stdio.h>
#include <termios.h>
#include <stdlib.h>

static struct termios old, new;

void initTermios(int echo)
{
  tcgetattr(0, &old);
  new = old;
  new.c_lflag &= ~ICANON;
  new.c_lflag &= echo ? ECHO : ~ECHO;
  tcsetattr(0, TCSANOW, &new);
}

void resetTermios(void)
{
  tcsetattr(0, TCSANOW, &old);
}

char getch_(int echo)
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

char getch(void)
{
  return getch_(0);
}

char getche(void)
{
  return getch_(1);
}

void gotoxy(int x, int y){
  printf("%c[%d;%df", 0x1B,y,x);
}

int main(){
  char dia[3], mes[3], ano[5];
  int d, m, a, i;
  printf("Digite uma data DD/MM/AAAA -->   /  /    ");

  gotoxy(32,4);
  for(i = 0;i <= 1;i++)
  	dia[i] = getch();
  dia[i] = '\0';
  d = atoi(dia);

  gotoxy(35,1);
  for(i = 0;i <= 1;i++)
  	mes[i] = getch();
  mes[i] = '\0';
  m = atoi(mes);

  gotoxy(38,1);
  for(i = 0;i <= 3;i++)
  	ano[i] = getch();
  ano[i] = '\0';
  a = atoi(ano);

  gotoxy(1,4);
  printf("\nData = %02d/%02d/%04d\n",d,m,a);

  return 0;

}


