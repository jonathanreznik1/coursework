#include <stdio.h>

/*
 * ID: 1654919
 * Student: Reznik, Jonathan
 * Assignment: HW4 part 1
 * 
 * Hi Dr. D I'm sorry but I'm giving you two separate files, since it 
 * got a bit confusing with number of lines in main function.  I think
 * I may have gone a bit overboard with pointers here, hope you like.
 * 
 * Bye :)
 */


//variables
float a,b;
float *c, *d;

//function prototyping
void calculate(float a, float b, float *c, float *d);

int main(void){
	//user input 2 values
	scanf("%f %f", &a, &b);
	float c = 0;
	float d = 0;
	printf("You entered %.02f and %.02f\n", a, b);
	//function call
	calculate(a,b, &c,&d);
	printf("%f times %f is %f\n", a, b, c);
	printf("%f divided by %f is %f\n", a, b, d);
	
}

//calculate accepts 4 params 2 variable (value) and 2 pointer (Reference)
//it is void and so return is not required
void calculate(float a,float b,float *c, float *d){
	*c = a * b;
	*d = a / b;
	return;
}
