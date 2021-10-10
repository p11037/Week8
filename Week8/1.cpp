#include<stdio.h>
int a, b, c, d1, d2;
int main() {
	scanf_s("%d %d %d", &a, &b, &c);

	int d1 = b - (a + 1);
	int d2 = c - (b + 1);

	if (d1 > d2) printf("%d", d1);
	else printf("%d", d2);

}