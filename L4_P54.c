#include<stdio.h>

int no1[50],no2[50];

int strtonumber(char* number,int* no){
  int i=0,noOfElements=0;
  while(number[i]!=0){
    no[i]=(int)number[i]-48;
    noOfElements++;
    i++;
  }
  return noOfElements;
}

int countresDigits(int *a){
  int i=0,digcount=0;
  int d=*a;
  while(d>0){
    digcount++;
    d=d/10;
  }
  return digcount;
}

int main(){
  int number1_count,number2_count;
  char number1[50];
  char number2[50];
  printf("Enter the number1: ");
  scanf("%s",number1);
  printf("Enter the number2: ");
  scanf("%s",number2);
  number1_count=strtonumber(number1,no1);
  number2_count=strtonumber(number2,no2);
  int result[50]={};
  int newresult[50]={};
  int to_print_newres=0;
  int resArrIndex=0;
  int j=number2_count-1;
  while(j>=0){
    int d=resArrIndex;
    printf("-->d=%d\n",d);
    for(int i=number1_count-1;i>=0;i--){
      printf("j=%d ",j);
      result[d]=((no1[i]*no2[j])+result[d]);
      printf("1.result[%d]=%d",d,result[d]);
      int digitscount=countresDigits(&result[d]);
      if(digitscount==2){
        int remain=result[d]%10;
        int carry=result[d]/10;
        result[d]=remain;
        result[d+1]+=carry;
      }
      to_print_newres=d;
      printf("2.result[%d]=%d\n",d,result[d]);
      d++;
    }
    j--;
    resArrIndex++;
    printf("3.resArrIndex=%d ",resArrIndex);
    printf("3.d=%d\n",d);
  }
  printf("\n");
  int u=0;
  for(int i=to_print_newres+1;i>=0;i--){
    if(result[i]==0 && i>to_print_newres) continue;
    newresult[u]=result[i];
    printf("%d",newresult[u]);
    u++;
  }

  return 0;
}