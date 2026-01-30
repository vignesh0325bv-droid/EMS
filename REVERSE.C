#include<stdio.h>
#include<STRING.h>
int main(){
    char str[100];
    char temp;
    int i,len;
    printf("ENTER THE STRING");
    scanf("%s",&str);
    len =strlen(str);
    for ( i = 0; i < len/2; i++)  // hello 5/2 2.5 2
    {
        temp = str[i];
        str[i]=str[len-i-1];
        str[len-i-1] =temp;
    }
    printf("REVERSED STRING IS : %s",str);
    char str2[] ="HELLOWORLD";
    printf("\nREVERSE USING STRREV FUNCTION  %s", strrev(str2));
    char str3[] = "hElLo";
    printf("\n CONVERT TO UPPER CASE %s", strupr(str3));
    printf("\n CONVERT TO LOWER CASE %s", strlwr(str3));

    return 0;
}
    