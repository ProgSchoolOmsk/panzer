#include "Sqrt.h"

Sqrt::Sqrt(double number)
{
	n = sqrt(number);
	n = floor(n + 0.5);

	if (n*n == number)
	{
		endnumber = n;	
	}

	else
	{
		if ( (n+1)*(n+1) == number)
		{
			endnumber = n + 1;
		}
		
		else 
		{
			endnumber = n - 1;
		}
	}

	
}