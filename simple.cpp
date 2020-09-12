#include "poly.h"

bool check(int &i, int &j, int &n)
{
    return !(i == j || i == j-1 || i == j+1 || 
	(i == n-1 && j == 0) || (i == 0 && j == n-1));
}


bool polygon::simple()
{

    bool isSimple = true;
    int num = n;

    for(int i=0; i<num; i++)
    {
	for(int j=0; j<num; j++)
	{
	    if(check(i,j,num))
	    {
		point p1 = s[i].first;
		point q1 = s[i].second;
		point p2 = s[j].first;
		point q2 = s[j].second;

		int d1 = direction(p1, q1, p2); 
		int d2 = direction(p1, q1, q2); 
		int d3 = direction(p2, q2, p1); 
		int d4 = direction(p2, q2, q1); 	

		if(d1 != d2 && d3 != d4)
		    isSimple = false;	
	    }
	}
    }

    return isSimple;
}



