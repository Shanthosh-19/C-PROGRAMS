//Get two numbers of up to 50 digits and perform addition and print the result.
//DATE: 11|06|2024

#include<stdio.h>

int no1[50],no2[50];
int osmallnum[50],olargenum[50];//operand numbers

void sumarr(int c1,int c2,int *no1,int *no2);

void operationalNumbers(int diff,int large,int *smallno,int *largeno){
  if(diff>=0){
    for(int i=diff-1;i<diff;i++){
    osmallnum[i]=0;
    printf("osmallnum[%d]=%d ",i,osmallnum[i]);
  }
  }
  int u=0;
  for(int j=diff;j<large;j++){
    osmallnum[j]=smallno[u];
    printf("osmallnum[%d]=%d ",j,osmallnum[j]);
    u++;
  }
  printf("\n");
  for(int k=0;k<large;k++){
    olargenum[k]=largeno[k];
    printf("olargenum[%d]=%d ",k,olargenum[k]);
  }
}

int main(){
  char number1[50];
  char number2[50];
  printf("Enter number1: ");
  scanf("%s",number1);
  printf("Enter number2: ");
  scanf("%s",number2);
  int i=0;
  int count1=0;
  while(number1[i]!=0){
    no1[i]=(int)number1[i]-48;
    count1++;
    i++;
  }
  int j=0;
  int count2=0;
  while(number2[j]!=0){
    no2[j]=(int)number2[j]-48;
    count2++;
    j++;
  }
  // sumarr(count1,count2,&no1[0],&no2[0]);
  sumarr(count1,count2,no1,no2);

  return 0;
}

void sumarr(int c1,int c2,int *no1,int *no2){//We have passed the array no1 and no2 to this function-->Refer main function
  int sum[50]={};
  int newSum[50]={};
  int smallcount,largecount,diffcount;
  if(c1>c2){
    diffcount=c1-c2;
    printf("1. %d",diffcount);
    largecount=c1;
    printf(" %d\n",largecount);
    operationalNumbers(diffcount,largecount,no2,no1);
  }
  else if(c2>c1){
    diffcount=c2-c1;
    printf("2. %d",diffcount);
    largecount=c2;
    printf(" %d\n",largecount);
    operationalNumbers(diffcount,largecount,no1,no2);
  }
  else{
    diffcount=0;
    printf("3.%d",diffcount);
    largecount=c1;
    printf(" %d\n",largecount);
    operationalNumbers(diffcount,largecount,no1,no2);
  }
  printf("\n");
  int plus=0;
  for(int o=0;o<largecount;o++){
    printf("%d ",osmallnum[o]);
  }
  printf("\n");
  for(int add=largecount-1;add>=0;add--){
    sum[plus] = olargenum[add] + osmallnum[add] + sum[plus];
    printf("1.olargenum[%d]=%d osmallnum[%d]=%d\n",add,olargenum[add],add,osmallnum[add]);
    printf("2.sum[%d]=%d\n",plus,sum[plus]);
    int d=sum[plus];
    int count=0;
    while(d>0){
      int c=d%10;
      count++;
      d=d/10;
    }
    int stay=sum[plus];
    int carrynxt=sum[plus];
    if(count==2){
      stay=sum[plus]%10;
      carrynxt=sum[plus]/10;
      sum[plus]=stay;
      printf("3. sum[%d]=%d\n",plus,sum[plus]);
      sum[plus+1]=carrynxt;
      printf("4. sum[%d +1]=%d\n",plus+1,sum[plus+1]);
    }
    printf("\n");
    plus++;
  }

  printf("\n");
  int toPrintnewSum=0;
  for(int i=largecount;i>=0;i--){
    if(sum[i]==0 && toPrintnewSum==0) i--;
    newSum[toPrintnewSum]=sum[i];
    printf("%d",newSum[toPrintnewSum]);
    toPrintnewSum++;
  }
}
