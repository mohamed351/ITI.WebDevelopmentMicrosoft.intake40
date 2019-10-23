#include<stdio.h>
#include<conio.h>

int main()
{

 int Numbers[5];
 int i,min,max;
 clrscr();
  for(i=0;i<5;i++){
  printf("Enter the Number : ");
  scanf("%d",&Numbers[i]);
  }
  printf("************************* \n");
  min=Numbers[0];
  max=Numbers[0];
  for(i=0;i<5;i++)
  {
   if(min>Numbers[i]){
     min = Numbers[i];
    }

    if(max<Numbers[i]){
     max = Numbers[i];
    }


  }
  printf("Min :%d \n",min);
  printf("Max :%d \n",max);
 getch();
 return 0;
}
