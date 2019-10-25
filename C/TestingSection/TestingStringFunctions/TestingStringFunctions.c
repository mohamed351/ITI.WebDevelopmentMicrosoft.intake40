#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void TryFunctionisalnum(void);
void TryFunctionIsAlpha(void);
void PrintZeroOrNon(int number);
void TryFunctionIsdigit(char ch);

int main(){

  clrscr();
   printf("Testing Function is isalnum() : ");
   TryFunctionisalnum();

    TryFunctionIsAlpha();
    printf("\n");
     printf("Testing Function isdigit() : ");

    TryFunctionIsdigit('A');
    printf("****************************************\n");

   printf("\"This is Example about Lower %c\" \n",tolower('A'));
   printf("\"This is Example about Upper %c\" \n",toupper('C'));



  getch();
 return 0;
}
void TryFunctionisalnum(void){
int number;
 number = isalnum(32);// try ascii of number 65
 PrintZeroOrNon(number);
}
void TryFunctionIsAlpha(void){
int number;
printf("Example TryFunction isaplpha() : ");
number = isalpha('A');
PrintZeroOrNon(number);


}
void PrintZeroOrNon(int number){

 if(number){
 printf("This number is non Zero \n");
 }
 else{
  printf("This number is Zero \n");
 }
}
void TryFunctionIsdigit(char c){
int number;
 number = isdigit(c);
 PrintZeroOrNon(number);

}