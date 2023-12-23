
/*
function is set of code or stmt
that perform specific task or cohorent 
task when is is called

two types of funtion :
1) Library funtions  -  system defined functions 
2) user defined function - functions according to user
syntax of user defined functions :

return type name of function(type 1 arg 1, type 2 arg 2)
return type  function name  argument list of the above syntax

three thing  before making function :
1)function declarations
2)function definition 
3)function call

syntax:
int function(int ,int);  function declared here!!{
  main(){  //calling function here!!
function (arg1,arg2);
}
int function (typ1 arg1, type2 arg2) // function defined
{
    local variable declaration;
    statement;
    Return value;

}
1)function defination : predefined ,precomplied  storaed in lib

syntax :
return type function (type1 arg1, type2 arg2){ // function header
    Local variable declaration;
    statement 1;
    statement 2;
    return type;
}
2)function declaration : in header file or functions prototype
3)function call : by the programmer 

examples: function (arg 1 , arg 2)







*/

// summation of two values 
#include<stdio.h>
int sum (int a1 , int a2);
int main (){
     int a,b;
     printf("enter two number :");
     scanf("%d",&a);
 int S = sum (a,b);
 printf("summation is : %d",S);


}
 int sum (int x1,int y2){
    int z = x1+y2;
 return z;
 }

