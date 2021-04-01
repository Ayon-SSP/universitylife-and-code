//It will make the number reverse, try with u r number.
#include<stdio.h>
#include<conio.h>
void main(){
    int number ;
    int digit;
    scanf("%d",&number);
    while(number>0){
        digit =number%10;
        printf("%d",digit);
        number = number/10;

    }
}
