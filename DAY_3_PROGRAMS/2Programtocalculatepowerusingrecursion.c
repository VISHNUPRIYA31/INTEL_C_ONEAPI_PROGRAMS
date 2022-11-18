#include <stdio.h>
#include <time.h>
int power(int n1, int n2);
int main() 
{
	double time_spent = 0.0;
    clock_t begin = clock();
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
   	printf("The elapsed time is %f seconds\n", time_spent);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

