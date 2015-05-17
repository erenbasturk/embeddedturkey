/*

This program explain that nested if else control statement in c

Usage : if(exp1)
	   statement;
	if(exp2)
	   statement;
	if(exp3)
	   statement;
	if(exp4)
	   statement;
	if(exp5)
	   statement;
	else
	   statement;

	exp 
		 Any expression
	statement
		Any null statement, simple statement, or compound statement.
		A statement can itselft be another if statemet.
		Remember, a statement ends with a semicolon.

*/

#include <stdio.h>

int main()
{
	int roll,mat,phy,che,tot;
	float avg;
	
	printf("\n Enter student details \n");
	printf("\n Enter Student Roll no : \n ");
	scanf("%d",&roll);
	printf("\n Enter marks im Maths : \n");
	scanf("%d",&mat);
	printf("\n Enter marks in Physics : \n");
	scanf("%d",&phy);
	printf("\n Enter marks in Chemistry : \n");
	scanf("%d",&che);
	tot=mat+phy+che;
	avg = (float)tot/3;
	printf("\n Total : %d\n Average : %2.f \n",tot,avg);

	if(mat >= 35 && phy >= 35 && che >= 35)
	{
		if(avg>=75)
			printf("\n Distingtion \n");
		else if(avg >= 60)
			printf("\n First Class \n");
		else if(avg >= 50)
			printf("\n Second Class \n");
		else
			printf("\n Fail \n");
	}
	
}
		

