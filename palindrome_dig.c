#include <stdio.h>
#include <math.h>

int main() {

	int test_cases, num, temp, res = 0, sum_dig = 0, k, i = 0, rev_dig = 0;
	
	scanf("%d", &test_cases);
	for (k = 0; k < test_cases; k++) {
	    scanf("%d", &num);
	    temp = num;
	    while (temp > 0) {
	        
	        res = temp % 10;
	        sum_dig += res;
	        temp /= 10;
	        
	    }
	    temp = sum_dig;
	    while (temp > 0) {
	    	temp = temp / 10;
		i++;
	    }
	    i = i - 1;
	    temp = sum_dig;
	    while (temp > 0) {
	        res = temp % 10;
	        rev_dig += res * pow(10, i);
	        i--;
	        temp /= 10;
	    }
	    if (sum_dig == rev_dig)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}
