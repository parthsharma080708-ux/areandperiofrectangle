#include<stdio.h>
#include<conio.h>
void main()
{/*This program is to calculate area and perimeter of square.*/
	int a,b,c,d;
	clrscr();
	printf("Enter the length and breath of rectangle");
	scanf("%d%d", &a,&b);
	c=a*b;
	printf("%d is area of square.\n", c);
	d=2*a+2*b;
	printf("%d is perimeter os square.\n", d);
	getch();
}