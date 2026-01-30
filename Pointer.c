#include <stdio.h>
 #include<STDLIB.H>
//gcc sysntax used in a functions
//__attribute__((constructor))- executes the function at the startup of the program
void __attribute__((constructor)) function1();
//__attribute__((destructor)) executes the function just before the the program terminates after the main fucntion
void __attribute__((destructor)) function2();
//not supported in gcc compiler
//#pragma startup function1
//#pragma exit function2
 
int main()
{
    //function call
    printf("main function calling\n");
    //function1();
   return 0;
}
void function1(){
    printf("function 1 is calling before main function\n");
}
void function2(){
    printf("function 2 is calling at the end of the main function execution\n");
}