#include <stdio.h>

int main (){

int num , count = 0;

printf("enter an integer ;");

scanf("%d",&num);


while(num !=0){

    num/= 10;
    count++;
}

printf("number of digits; %d ",num);

return 0;



}
