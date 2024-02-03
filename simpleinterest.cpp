#include<stdio.h>
int main()
{
    int p;
    float r, t, si;
    printf("Enter Principal: ");
    scanf("%d", &p); //& = address of  
	printf("Enter Rate of Interest: ");
	scanf("%f", &r);
	printf("Enter time: ");
	scanf("%f", &t);
	si = (p*r*t)/100;
	printf("SI = %.2f",si);
}

