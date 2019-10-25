#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void GetNameFromHim(char name[],char c);
int InCaseCompare(char name[] , char name2[]);
int InCaseMyCompare(char name[], char name2[]);

int main(){
char Name[30] ={32};
char Name2[30] ={" ali"};
int count=0;
int ch=0;
clrscr();
printf("Please Enter your name : ");
while((ch = getch()) !=13)
{
  GetNameFromHim(Name,ch);

}


/*
printf("\nHello %s",Name);
printf("\n*************************");
for(count=0;count<30;count++){
 printf("\n %d = %c => %d ",Name[count],Name[count],count);
}

*/


if(!InCaseCompare(Name,Name2)){
  printf("\n Hello Ali How are you");
   
}
else {
 printf("\n %s ,you are not allowed to enter  !! ",Name);
}
getch();

return 0;

}

void GetNameFromHim(char Name[],char ch){
 static int count =0;


  if(ch == 8)
  {
     if(count!=0){
       Name[count--]='\0';
       clrscr();
       printf("%s",Name);
     }
  }
  if(ch == 32)
  {   count++;
      Name[count] = 32;

  }
  //cheak the character is alphabtic and Number
 if(isalnum(ch))
 {

    if(count<30)
    {
	count ++;clrscr();

      Name[count]=ch;

      printf("%s",Name);

    }
    else{
     // i want to send a message to use to tell him than the length is not prefect




    }
 }

}
int InCaseCompare(char name[] , char name2[]){
 int i;
 for(i=0;i<strlen(name);i++){
   name[i] = tolower(name[i]);

 }
 for(i=0;i<strlen(name2);i++)
 {
    name2[i] = tolower(name2[i]);
 }

 i= strcmp(name,name2);


 return i;

}


