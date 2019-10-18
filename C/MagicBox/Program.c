#include<stdio.h>
#include<conio.h>
int main(){
 int n,Size,i,rows,columns;

 clrscr();
 do{
 printf("Please Enter odd number : ");
 scanf("%d",&n);
 }while(n%2 ==0);
 Size = n*n;
 for(i=1;i<=Size;i++)
 {
  if(i==1)
  {
    rows =1;
    columns = (n+1)/2;
  }
  else if((i-1)%n)
  {

    rows = rows-1;
    columns = columns -1;
    if(rows ==0){
     rows = n;
    }
    if(columns ==0){
     columns = n;
    }
  }
  else {
   rows = rows +1;
   columns = columns;
   if(rows >n){
    rows=1;
   }
  }
   gotoxy(columns*5,rows*5);

   printf("%d",i);



 }



 getch();

 return 0;
}