#include <stdio.h>
#include <time.h>
int main() 
{
	double time_spent = 0.0;
    clock_t begin = clock();
    char str[1000], ch;
    int count = 0;
    int i=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (i=0; str[i] != '\0'; ++i) 
	{
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
   	printf("The elapsed time is %f seconds\n", time_spent);
    return 0;
}

