#include<stdio.h>
int lcm(int,int);
int main()
{
	int a,b,answer;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	answer=lcm(a,b);
	printf("The LCM of %d and %d is %d \n",a,b,answer);
	return 0;
}
int lcm(int a, int b)
{
	 static int factor=1;
	 if(factor%a==0 && factor%b==0)
	 {
	 	return factor;
	 }
	 factor++;
	 lcm(a,b);
	 return factor;
}

