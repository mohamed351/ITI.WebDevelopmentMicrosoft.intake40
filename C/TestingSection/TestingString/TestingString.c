#include<stdio.h>
#include<conio.h>
int main(){
int i;
char characters[30];
clrscr();
printf("Testing Some of String Functions \n");
printf("*************************************** \n");
printf("Please Enter your name  ? ");
scanf("%s",characters);
printf("\nHello  %s \n",characters);
printf("Loop \n*****************\n");
for(i=0;i<30;i++){
printf("%c and %d \n",characters[i],characters[i]);
}
getch();


return 0;
}