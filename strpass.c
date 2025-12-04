#include <stdio.h>
int main (){
int a,j,o,degit1, degit , temp , count , i , r , found , temp1,unique;
double x;
printf(" add a number : "); scanf("%d",&a);

r=0;
for ( i = 9; i >= 0; i--)
{
temp=a;
count =0;
while (temp>0)
{
degit= temp % 10;
if (degit==i)
{
count=count+1;
}
temp =temp/10;
}
for (o = 0; o < count; o++)
{
r=r*10 + degit;
}

}
unique=0;
for (j =9 ; j >=0; j-1)
{
temp1=r;
found=1;
while (temp1>0 && found ==1)
{
degit1= temp1%10;
if (degit1==i)
{
found=0;
unique= unique+1;
}
temp=temp/10;
}

}






}