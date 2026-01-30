#include<STDIO.H>
int mains() {
    int*p;
    int c=12;
    p=&c;
    printf("Value %d",*p);
    printf("address %p",&p );     // To print adress use %p
    return 0;
}