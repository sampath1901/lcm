#include<stdio.h>
int lcm(int ,int );
int main()
{
	int n1,n2,LCM;
	printf("Input First Number ");
	scanf("%d",&n1);
	printf("Input Second Number");
	scanf("%d",&n2);
	LCM=lcm(n1,n2);
    printf("LCM OF %d AND %d is %d",n1,n2,LCM);
    return 0;
}
int lcm(int n1,int n2)
{
	static int temp=1;
	if(temp%n1==0 && temp%n2==0)
	{
		return temp;
	}
	else
	{
		temp++;
		lcm(n1,n2);
		return temp;
	}
}
