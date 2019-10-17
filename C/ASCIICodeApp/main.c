#include<stdio.h>
#include<conio.h>

int main(){
  char Character;

  printf("This Idiot Application is made by Mohamed Beshri Amer \n");
  printf("ASCII KEY :) \n");
  printf("=========================\n");
  do{
  Character = getch();
  printf("The Character is %c and The Decimal is %d \n",Character,Character);
  }while(Character !=13);

 return 0;
}
