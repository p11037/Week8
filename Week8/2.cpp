#include<stdio.h>

int n, a[10000], b[10000], max, x, y;

int main() {

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		a[x]++;
		if (max < a[x])
			max = a[x];
	}

	for (int i = 0; i < 10000; i++) {

		if (max == a[i])
		{
			b[y] = i;
			y++;
		}

	}

	for (int i = 0; i < y; i++) {
		printf("%d", b[i]);

		if (i != y - 1)
			printf(" ");
	}
	return 0;
}
