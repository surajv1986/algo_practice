#include<stdio.h>

#define N 4

int r_ldiag(int, int, int);
int l_rdiag(int, int, int);
int main(void)
{
	int i = 0, j = 0;

	printf("Enter index\n");
	scanf("%d %d", &i, &j);
	r_ldiag(i, j, N);
	l_rdiag(i, j, N);
}


int r_ldiag(int i, int j, int n)
{
	printf("Entered index is i = %d, j = %d\n", i, j);
	printf("Upper Matrix\n");
	while (((i + j) > 0) && (i >= 0) && (j >= 0)) {
		i--;
		j++;
		if ((i < 0) || (j < 0) || (j > (N - 1) || (i > (N - 1)) ))	
			break;
		printf("i = %d j = %d\n", i, j);
	}
}


int l_rdiag(int i, int j, int n)
{
	printf("Entered index is i = %d, j = %d\n", i, j);
	printf("Lower Matrix\n");
	while (((i + j) < (N + 2)) && (i < (N - 1)) && (j <= (N - 1)) && (i >= 0) && (j >= 0)) {
		i++;
		j--;
		if ((j < 0) || (i < 0))
			break;	
		printf("i = %d j = %d\n", i, j);
	}
}
