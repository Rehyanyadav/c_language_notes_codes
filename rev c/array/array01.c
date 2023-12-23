#include<stdio.h>
int main (){
   //accessing elements of array 
  /*
  
  here we write code to input value 
  from users and display them 
  
  */
    int arr[5] ,i ;
    for (i = 0; i<5; i++){
  printf("Enter a value  for arr[%d]:",i);
  scanf("%d",&arr[i]);
    }
    

    printf("The elements in array are:");
    for (i =0; i<5; i++){
 printf("%d\t",arr[i]);

    }
}