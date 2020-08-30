#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()

{
		int a, b, c, d, s, e, r, t;
		printf("INPUT NUM A = ");
		scanf_s("%d", &a);
		printf("INPUT NUM B = ");
		scanf_s("%d", &b);
		printf("INPUT NUM C = ");
		scanf_s("%d", &c);
		printf("INPUT NUM D = ");
		scanf_s("%d", &d);

		s = b;
		e = d;
		r = a;
		t = c;

		printf(" a = %d  b = %d  c = %d  d = %d", s, e, r, t);
	return 0;
}