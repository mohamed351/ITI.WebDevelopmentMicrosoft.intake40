#include<stdio.h>
#include<conio.h>

void print(int p);
void move(int key){
 int keyex;
 static int position = 1;
 if(key ==0)
 {   keyex = getch();
   if(keyex == 80)
   {
      position++;
      if(position>5)
      {
      position=1;
      }
      gotoxy(1,position);
   }
   else if(keyex == 72){
    position--;
    if(position<1)
    {
    position =5;
    }
    gotoxy(1,position);
   }
 }
 else
 {
   if(key ==13)
   {
   print(position);
   }

 }


}

int main()
{
 int ch;
 clrscr();

 printf("1-Add \n");
 printf("2-Edit \n");
 printf("3-New \n");
 printf("4-Display \n");
 printf("5-Exit \n");
 gotoxy(1,1);

 do{
 move(ch);

 }while((ch=getch()) !=27);



 return 0;



}
void print(int p)
{
 gotoxy(20,1);
 switch(p)
 {
  case 1:
  printf("Add is pressed ");
  break;
  case 2:
  printf("Edit is pressed");
  break;
  case 3:
  printf("New is pressed ");
  break;
  case 4:
  printf("Display is pressed");
  break;
  case 5:
  exit(0);
  



 }
}