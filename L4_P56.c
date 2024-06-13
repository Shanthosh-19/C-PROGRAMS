// Create a link list for the following structure and get user inputs of
// id, Maths mark, Science Mark. Once the user inputs id as -1 exit the
// input mode and display all the entries.
// DATE:13|03|2024

#include<stdio.h>

int main(){
  int id;
  struct student{
    int id;
    int Maths;
    int Science;
    struct student *next;
  };
  struct student sandy,dk;
  printf("Enter student id: " );
  scanf("%d",&sandy.id);
  printf("Enter maths mark: ");
  scanf("%d",&sandy.Maths);
  printf("Enter science mark: ");
  scanf("%d",&sandy.Science);
  sandy.next=&dk;
  dk.id=2;
  printf("Enter the id: ");
  scanf("%d",&id);
  if(id==-1){
    printf("%d %d\n",sandy.id,&sandy.id);
    printf("%d %d\n",sandy.Maths,&sandy.Maths);
    printf("%d %d\n",sandy.Science,&sandy.Science);
    printf("%d %d %d\n",sandy.next,*sandy.next,&sandy.next);
    printf("%d\n",sizeof(struct student));
    printf("%d",&dk.id);
  }

  return 0;
}
