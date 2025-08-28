#include <stdio.h>
#include <stdbool.h>
int main ()
{
	float m[5]={78,99,58,74,63};
	float tot, avg;
	bool result;
	printf ("\t \t \t BCA-A \n");
	printf ("---------------------------------------------------------------- \n");
	printf ("Name: RAM \t \t \t Reg no: 19012 \n");
	printf ("---------------------------------------------------------------- \n");
	printf ("Tamil  \t \t \t \t \t \t \t %5.2f \n",m[0]);
	printf ("English  \t \t \t \t \t \t %5.2f \n",m[1]);
	printf ("Maths  \t \t \t \t \t \t \t %5.2f \n",m[2]);
	printf ("Science  \t \t \t \t \t \t %5.2f \n",m[3]);
	printf ("Social  \t \t \t \t \t \t %5.2f \n",m[4]);
	tot= m[0]+m[1]+m[2]+m[3]+m[4];
	avg= tot/5; 
	if (avg>50)
	result=true;
	printf ("---------------------------------------------------------------- \n");
	printf ("tot=%5.2f \t \t  avg=%5.2f \t \t result=%5.2", tot,avg,result);
	if (result==true)
	printf ("Pass");
	else
	printf ("Fail");
}
