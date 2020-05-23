#include<stdio.h>

#define N 4

int l_rdiag(int, int, int);

int main(void)
{
	int i = 0, j = 0;

	printf("Enter the element location\n");
	scanf("%d %d", &i, &j);
	l_rdiag(i, j, N);

	return 0;
}

int l_rdiag(int i, int j, int n)
{
	printf("Entered index i = %d, j = %d\n", i, j);
	while (((i + j) < (N + 2)) && (i < (N - 1)) && (j < (N - 1))) {
		i++;
		j++;
		printf("i = %d j = %d\n", i, j);
	}

}
