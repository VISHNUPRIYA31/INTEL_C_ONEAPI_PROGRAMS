#include <stdio.h>
#include <stdlib.h> // For exit() function
#include <time.h>
int main() 
{
	double time_spent = 0.0;
    clock_t begin = clock();
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("program.txt", "r")) == NULL) {
        printf("Error! File cannot be opened.");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    fscanf(fptr, "%[^\n]", c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
   	printf("The elapsed time is %f seconds\n", time_spent);
    return 0;
}

