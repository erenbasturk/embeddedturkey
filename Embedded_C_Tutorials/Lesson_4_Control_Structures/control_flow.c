/*

This Program explains that if  conditional branching statement in C programming language
This program  will print "A is Big" message if a is greater than b

Usage: if (exp) 	[Format 1]
	   statement:
       An exp can be any integer expression 
       A Statement can be any null statement, simple statement, or compound statement.
       A statement can itself be another if statement
       Remember, a statement end with a semicolon
	
*/

#include <stdio.h>

int main()
{
	int a=10,b=2;

	if(a>b)
	   printf("\n A is Big \n");
}

