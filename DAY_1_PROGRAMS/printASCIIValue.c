#include <stdio.h> 
#include <time.h>
int main() {   
double time_spent = 0.0;
    clock_t begin = clock();
    char c; 

    printf("Enter a character: "); 

    scanf("%c", &c);   

     

    // %d displays the integer value of a character 

    // %c displays the actual character 

    printf("ASCII value of %c = %d", c, c); 
clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
   	printf("The elapsed time is %f seconds\n", time_spent);
     

    return 0; 

} 
