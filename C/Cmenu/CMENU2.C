#include<stdio.h>
#include<conio.h>

void print(int p);
void printMenu(int position);
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
   printMenu(position);
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
 printMenu(1);
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
  break;




 }
}
void printMenu(int position)
{
   clrscr();

   if(position ==1)
   {
   gotoxy(1,1);
   textattr(0x3);
   cprintf("1-Add");
   gotoxy(1,2);
   textattr(0x70);
   printf("2-Edit \n");
   printf("3-New \n");
   printf("4-Display \n");
   printf("5-Exit");
   }


   if(position ==2)
   {
    gotoxy(1,1);
   printf("1-Add \n");
    gotoxy(1,2);
   textattr(0x3);
   cprintf("2-Edit");
   textattr(0x70);
   gotoxy(1,3);
   printf("3-New \n");
   printf("4-Display \n");
   printf("5-Exit");
   }



   if(position ==3)
   {
    gotoxy(1,1);
   printf("1-Add \n");
   printf("2-Edit \n");
    gotoxy(1,3);
   textattr(0x3);
   cprintf("3-New");
   gotoxy(1,4);
   textattr(0x70);
   printf("4-Display \n");
   printf("5-Exit \n");

   }






if(position ==4)
   {
    gotoxy(1,1);
   printf("1-Add \n");
   printf("2-Edit\n");
   printf("3-New \n");

   textattr(0x3);
   cprintf("4-Display");
   textattr(0x70);
   gotoxy(1,5);
   printf("5-Exit");

   }



if(position ==5)
   {
    gotoxy(1,1);
   printf("1-Add \n");
   printf("2-Edit \n");
   printf("3-New \n");
   printf("4-Display \n");
    gotoxy(1,5);
   textattr(0x3);
   cprintf("5-Exit");
   gotoxy(1,6);
   textattr(0x70);
   }





}











