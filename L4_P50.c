//Get two numbers of up to 50 digits and perform addition and print the result.

#include<stdio.h>

void sumarr(int c1,int c2,int *no1,int *no2){//We have passed the array no1 and no2 to this function-->Refer main function
  int newno_small[10]={0};
  int sum[50];
  int diffcount;
  int d,e,u=0,v=0;
  if(c1>c2){
    diffcount=c1-c2;
    c2=c2+diffcount;
    d=c2;
    e=c1;
  }
  else if(c2>c1){
    diffcount=c2-c1;
    c1=c1+diffcount;
    d=c1;
    e=c2;
  }
  else{
    diffcount=0;
    d=c2;
    e=c1;
  }
  for(int s=0;s<diffcount;s++){
    printf("%d",newno_small[s]);
  }
  for(int p=diffcount;p<d;p++){
    newno_small[p]=no2[u];
    u++;
    printf(" %d",newno_small[p]);
  }
  printf("\n");
  for(int w=0;w<e;w++){
    printf("%d ",no1[w]);
  }
  printf("\n");
  for(int q=0;q<e;q++){
    sum[q]=no1[q]+newno_small[q];
    int d=sum[q];
    int count=0;
    while(d>0){
      int c=d%10;
      count++;
      d=d/10;
    }
    int k=sum[q];
    int a=sum[q];
    if(count==2 && q>0){
      k/=10;
      a%=10;
      sum[q-1]+=k;
      sum[q]=a;
    }
  }
  for(int d=0;d<e;d++){
    printf("%d ",sum[d]);
  }
}

int main(){
  char number1[50];
  char number2[50];
  printf("Enter number1: ");
  scanf("%s",number1);
  printf("Enter number2: ");
  scanf("%s",number2);
  int no1[50];
  int no2[50];
  int i=0;
  int count1=0;
  while(number1[i]!=0){
    no1[i]=(int)number1[i]-48;
    count1++;
    i++;
    // char2num(number1);
  }
  int j=0;
  int count2=0;
  while(number2[j]!=0){
    no2[j]=(int)number2[j]-48;
    count2++;
    j++;
    // char2num(number2);
  }
  // sumarr(count1,count2,&no1[0],&no2[0]);
  sumarr(count1,count2,no1,no2);

  return 8;
}

// int char2num(char *number){
//   int i=0,count=0;
//   int no[50];
//   while(number[i]!=0){
//     no[i]=(int)number[i]+48;
//     count++;
//     i++;
//   }
//   return count;
// }


// #include<stdio.h>

// int main(){
//   char number1[50];
//   char number2[50];
//   printf("Enter number1: ");
//   scanf("%s",number1);
//   printf("Enter number2: ");
//   scanf("%s",number2);
//   int no1[50];
//   int no2[50];
//   int newno_small[50]={};
//   int sum[50];
//   int i=0;
//   int count1=0;
//   while(number1[i]!=0){
//     no1[i]=(int)number1[i]-48;
//     count1++;
//     i++;
//   }
//   int j=0;
//   int count2=0;
//   while(number2[j]!=0){
//     no2[j]=(int)number2[j]-48;
//     count2++;
//     j++;
//   }
//   int u=0;
//   int v=0;
//   if(count1>count2){
//     int diffcount=count1-count2;
//     for(int s=0;s<diffcount;s++){
//       printf("%d",newno_small[s]);
//     }
//     count2=count2+diffcount;
//     for(int p=diffcount;p<count2;p++){
//       newno_small[p]=no2[u];
//       u++;
//       printf(" %d",newno_small[p]);
//     }
//     printf("\n");
//     for(int w=0;w<count1;w++){
//       printf("%d ",no1[w]);
//     }
//     printf("\n");
//     for(int q=0;q<count1;q++){
//       sum[q]=no1[q]+newno_small[q];
//       int d=sum[q];
//       int count=0;
//       while(d>0){
//         int c=d%10;
//         count++;
//         d=d/10;
//       }
//       int k=sum[q];
//       int e=sum[q];
//       if(count==2 && q>0){
//         k/=10;
//         e%=10;
//         sum[q-1]+=k;
//         sum[q]=e;
//       }
//     }
//     for(int d=0;d<count1;d++){
//       printf("%d ",sum[d]);
//     }
//   }
//   else if(count2>count1){
//     int diffcount=count2-count1;
//     printf("diffcount=%d\n",diffcount);
//     for(int r=0;r<diffcount;r++){
//       printf("%d",newno_small[r]);
//     }
//     count1=count1+diffcount;
//     for(int p=diffcount;p<count1;p++){
//       newno_small[p]=no2[v];
//       v++;
//       printf(" %d",newno_small[p]);
//     }
//     printf("\n");
//     for(int p=0;p<count2;p++){
//       printf("%d ",no2[p]);
//     }
//     printf("\n");
//     for(int q=0;q<count2;q++){
//       sum[q]=no2[q]+newno_small[q];
//       int d=sum[q];
//       int count=0;
//       while(d>0){
//         int c=d%10;
//         count++;
//         d=d/10;
//       }
//       int k=sum[q];
//       int e=sum[q];
//       if(count==2 && q>0){
//         k/=10;
//         e%=10;
//         sum[q-1]+=k;
//         sum[q]=e;
//       }
//     }
//     for(int d=0;d<count2;d++){
//       printf("%d ",sum[d]);
//     }
//   }
//   else{
//     for(int k=0;k<count1;k++){
//       printf("%d ",no1[k]);
//     }
//     printf("\n");
//     for(int m=0;m<count2;m++){
//       printf("%d ",no2[m]);
//     }
//     printf("\n");
//     for(int q=0;q<count2;q++){
//       sum[q]=no2[q]+no1[q];
//       int d=sum[q];
//       int count=0;
//       while(d>0){
//         int c=d%10;
//         count++;
//         d=d/10;
//       }
//       int k=sum[q];
//       int e=sum[q];
//       if(count==2 && q>0){
//         k/=10;
//         e%=10;
//         sum[q-1]+=k;
//         sum[q]=e;
//       }
//     }
//     for(int d=0;d<count2;d++){
//       printf("%d ",sum[d]);
//     }
//   }

//   return 0;
// }
