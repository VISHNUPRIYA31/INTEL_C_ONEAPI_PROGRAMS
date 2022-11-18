#include <stdio.h>
#include <time.h>
int main() 
{
	double time_spent = 0.0;
    clock_t begin = clock();
    int data[5];
    int i=0;
    printf("Enter elements: ");
    for(i=0;i<5;++i)
    	{
	
        scanf("%d", data + i);
    	}

    printf("You entered: \n");
    for (i=0; i < 5; ++i)
        printf("%d\n", *(data + i));
    clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
   	printf("The elapsed time is %f seconds\n", time_spent);
    return 0;
}

