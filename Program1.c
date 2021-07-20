#include<stdio.h>

#include<conio.h>

void main(){

  int list[20],size,i,sElement,cases,z;

 

  printf("enter the no. of test cases: ");

  scanf("%d",&cases);

  for(z=0;z<cases;z++)

  {

  printf("\nEnter size of the list: ");

  scanf("%d",&size);

  printf("Enter any %d integer values: ",size);

  for(i = 0; i < size; i++)

    scanf("%d",&list[i]);

  printf("Enter the element to be Search: ");

  scanf("%d",&sElement);

  

  for(i = 0; i < size; i++)

  {

     if(sElement == list[i])

     {

        printf("Element is found at %d index", i);

        break;

     }

  }

  if(i == size)

     printf("Given element is not found in the list!!!");

 

}

}
