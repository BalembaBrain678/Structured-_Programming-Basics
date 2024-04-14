#include <stdio.h>
double power(double x, int y) {
	double result = 1.0;
	
	if (y >= 0) {
		for (int i = 0; i < y; i ++) {
			result *= x;
			
		}
	} else {
		for (int i = 0; i > y; i--) {
			result /= x;
		}
	}
	return result;
}

int main() {
	double x;
	int y;
	
	printf("Enter the value of x: ");
	scanf("%if", &x);
	
	printf("Enter the value of y:" );
	scanf("&d", &y);
	
	double result = power(x,y);
	
	printf("%.2lf raised to the power of  %d is %.2lf\n", x, y, result);
	
	return 0;
}

