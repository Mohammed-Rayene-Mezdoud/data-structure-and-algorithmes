#include <stdio.h>

int lcm(int a , int b){
    if (a<0)
        {
        a=-a;
        }

    if (b<0)
        {
        b=-b;
        }

    if (b>a)
        {
        int saver;
        saver=a;
        a=b;
        b=saver;
        }

    if(b == 0 || a==0)
        {
        printf("The lcm of the input numbers is 0 \n");
        return 0;
        }

int LCM;
int A=a;     // save a in a variable to use in the next operation 
int B=b;     // save b in a variable to use in the next operation 
    while (a%b>0)
        {
        int rest;
        rest=a%b;
        a=b;
        b=rest;
        }
LCM=(A*B)/b; // b is the lcm of the two input numbers 

return LCM;
}
int main (){
int A;
int B; 
int LCM;
printf(" We will calculate the lcm of two integers \n");
printf(" Enter the value of the two integers \n");
printf(" Number A = "); scanf("%d",&A);
printf(" Number B = "); scanf("%d",&B);

LCM=lcm(A,B);

printf("The lcm of input numbers is %d \n", LCM);

return 0;
}