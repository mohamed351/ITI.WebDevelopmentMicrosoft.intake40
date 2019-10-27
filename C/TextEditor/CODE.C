#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void deleteElement(int index,char ch[]);

int main(){
  char name[40] = {32};
  int c;
  int index =0;
   clrscr();

  do{
    c= getch();
    if(c == 0)
    {
     c=getch();
     if(c == 75)
     {
     if(index>0){

      gotoxy(--index,1);
     }

     }
     else if(c == 77)
     {
       if(strlen(name)>index)
       {
       gotoxy(++index,1);
       }

     }
     else if(c == 79)
     {
      gotoxy(strlen(name),1);
     }
     else if(c == 71){
     gotoxy(1,1);
     }

    }else
    {
    if(isalnum(c) && index<38)
    {
    clrscr();
    index++;
    name[index]=c;
    printf("%s",name);
    gotoxy(index +1,1);
    }
    else if(index<38 && c==32){
    clrscr();
    index++;
    name[index]=32;
    printf("%s",name);
    gotoxy(index+1,1);
    }
    else if (index>0 && c==8)
    {
    clrscr();

    deleteElement(index,name);
    index--;
    printf("%s",name);
    gotoxy(index,1);




    }


    }

  }while(c !=13);

   printf("\n %s",name);
   getch();




 return 0;
}
void deleteElement(int index,char ch[]){
 clrscr();
 ch[index] = 32;

}