#include<stdio.h>
#include<conio.h>
int prime(int n,int i);
int main()
{
 int n,p;
 printf("Enter any number\n");
 scanf("%d", &n);
 p=prime(n,n/2);
 if(p==1)
  printf("%d is a prime number",n);
 else
  printf("%d is a composite number",n);
  return 0;
}
int prime(int n, int i)
{
 if(i==1)
 return 1;
 if(n%i==0)
 return 0;
 return prime(n,i-1);
}
