#include <stdio.h>
#include <stdbool.h>


// return true if the number is even other
bool isEven(int n)
{
    if (n%2==0) {return true;}
    return false;
}



bool isPrime(int n )
{
    // variables 
    int i;
    int temp;
    int check;

    // initialization of check 
    check=0;

    if (n == 0 || n == 1)
        return false;

    for ( i=2 ; i < n/2 ; i++){
        temp=n%i;
        if (temp==0)
            {
            check=1;
            break;
            }
        }

        if (check==0)
            return true;

        return false;
            
return 0;
}




int gcd(int a, int b)
{
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

    if(b == 0)
        {
        printf("The gcd of the input numbers is %d \n",a);
        return 0;
        }

    while (a%b>0)
        {
        int rest;
        rest=a%b;
        a=b;
        b=rest;
        }

    printf(" The gcd of the input numbers is %d \n ",b);
return 0;
}

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
LCM=(A*B)/b; // b is the gcd of the two input numbers 
printf("The lcm of input numbers is %d \n",LCM);
return 0;
}


int modExp(int num, int exp ,int mod)
{
    int result=1;
    if (num<0)
        {
    while (num<mod) // treat the case if the number less then zero 
        {
        num=num+mod;
        }
        num=num-mod; // num - mod to make the number positive and less then the modulus
        }

    if (exp<0 || mod<0)
        {
        printf("Negative exponent or modulus are not supported ");
        return 0;
        }
    
for (int i = 0; i < exp; i++)
{
result=(result*num)%mod;      //switch between the rest and the base to do the next mod operation
}
printf("The result of modular exponentiation of the given numbers is %d", result);
return result;
}


int factorial(int num){
    if (num<0)
        {
        printf("The factorial of a negative number is not defined ");
        return 0;
        }
int fact=1;
    for (  int i = 2; i <= num; i++)
        {
        fact=fact*i;
        }
        printf("The factorial of the given number (%d!) is %d",num, fact);
return 0;
}

int sumDigits(int num)
{
int n,digit,sum=0;
n=num;
    if (num<0)
        {
        num=-num;
        }

    while (num>0)
        {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
        }
printf("the sum of digit of the given number (%d) is %d \n",n,sum);
}

int reverseNumber(int num){
int temp=num;
int result=0;

    if (num<0)
        {
        num=-num;
        }
    while (num >0)
        {
        result=result*10 +num%10;
        num=num/10;
        }
    if (temp<0)
        {
        result=-result;
        }
    printf("The reverse of the given number (%d) is %d ",temp, result);
return 0;
}

int isPalindromeNumber (int num){
int temp=num;
int result=0;

    if (num<0)
        {
        num=-num;
        }
    while (num >0)
        {
        result=result*10 +num%10;
        num=num/10;
        }
    if (temp<0)
        {
        result=-result;
        }
    if (result==temp)
        {
        printf(" The given number (%d) is palindrome ",temp);
        }
    else
        {
        printf(" The given number (%d) is  not palindrome ",temp);
        }
return 0;
}

int sumDevisors(int num)
{
    int temp=num,sum=0;
    if (num==0)
        {
        printf("the sum of divisors of 0 is not defined ");
        return 0;
        }
    
    if (num<0)
        {
        num=-num;
        }
    
    for (int i = 1; i <= num; i++)
        {
    if (num %i==0)
        {
        sum=sum+i;
        }
        }
    printf("The sum of divisors of the given number (%d) is %d",temp,sum);
return 0;
}

int isPerfectNumber (int num)
{
int temp=num,sum=0;
    if (num==0)
        {
        printf("the sum of divisors of 0 is not defined ");
        return 0;
        }
    
    if (num<0)
        {
        num=-num;
        }
    
    for (int i = 1; i <= num/2; i++)
        {
    if (num %i==0)
        {
        sum=sum+i;
        }
        }
    if (sum==temp)
        {
        printf("The given number (%d) is perfect ",temp);
        }
        else{
        printf ("The given number (%d) is not perfect ",temp);
        }
return 0;
}
int isArmstrong(int num)
{
int sum=0;
int temp=num;
int n=num;
int digit;
int sum2=0;
if (num<0)
{
printf("There are no negative armstrong number under the usual definition ");
return 0;
}

// first step calculate the number of digits that will be the power 
    while (num>0)
        {
        num=num/10;
        sum=sum+1;
        }
// caclualte the sum of digits powered by number of digits 
    while (temp>0)
        {
        digit=temp%10;
        int a=1; // for the power operation 
    for (int i = 1; i <= sum; i++)
        {
        a=a*digit;
        }
// to calculate the sum of digits raised by power 
        sum2=sum2+a;
        temp=temp/10;
        }
    if (sum2==n)
        {
        printf("The given number is armstrong");
        }
    else
        {
        printf("The given number is not armstrong");
        }

}

