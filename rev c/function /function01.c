/*
if function call itself this process will called as recursion

1) function with no arguments and no return value 
syntax:
 void function (void );
 main (){
    void function()
    {
        }

 }


 2) function  with no aguments but return value 
syntax:

int  fun(void);

int main (){
    int r;
    r =fun();

}
int fun(){
    return(exp);
}



call by value call by refrence 

1) call by value 
value copy of the argyument is passed to  formal argument 
when function is done by call by value 



*/


// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->

//example of funtion with no arguments and no return value
/*
#include<stdio.h>
void me ();

int  main(){

    me ();
    printf("in main");
}
void me(){
    printf("comeon");

}

*/

// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->



//example of function with no arguments but return value
 /*
#include<stdio.h>
int sum();

int maim(){
    int b =sum ();
    printf("enter %d",b);
}
int sum (){
    int a,b,s;
    s = a +b;
    return s;

}

*/


// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->
// .->>->->->->->->->->->->->->->->



// call by value
/*there are no changes in the values, 
though they had been changed inside the function.
*/
/*
#include<stdio.h>
void swap(int x , int y);

int main (){
    //local variables defination 
int a = 100;
int b = 200;
printf("Before swap ,value of a: %d\n",a);
printf("Before swap ,value of b: %d\n",a);

// calling function to swap values
printf("after swap ,value of a: %d\n",a);
printf("after swap ,value of b: %d\n",a);
 return 0;

}

void swap(int x , int y){
    int temp;
    temp =x ; //saving value of x
     x= y;    //put y into x
     y= temp; //put temp into y 


 return ;

}

*\

// call by  refrence 
/*
method of passing the arg to a func copies the address of 
*/