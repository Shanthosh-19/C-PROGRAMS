#include<stdio.h>

int countStr(char *a){
  int i=0,count=0;
  while(a[i]!=0){
    count++;
    i++;
  }
  return count;
}

int main(){
  char string[50];
  printf("Enter the string: ");
  gets(string);
  int countChar=countStr(string);
  int i=0;
  int Capital=0,small=0;
  if(string[i]>96 && string[i]<123) small=1;
  else Capital=1;
  char newString[50];
  int j=0;
  while(string[j]!=0){
    if(small){
      newString[j]=string[j]-32;
      printf("%c",newString[j]);
      j++;
    }
    else{
      newString[j]=string[j]+32;
      printf("%c",newString[j]);
      j++;
    }
  }

  return 0;
}