#include <stdio.h>

int main (){


int a,b;
printf("enter two integers;");
scanf("%d", &a , &b);



printf("Befove swapping: a= %d, b%",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("after swapping:a = %d, b=%dwn ",a,b);


return 0;


}
