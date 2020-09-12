#include "poly.h"

int polygon::convex()
{
    int orientation = 0;

    for(int i=0; i<n-2; i++)
	orientation += direction(v[i], v[i+1], v[i+2]);

    orientation += direction(v[n-2], v[n-1], v[0]); 
 
    orientation += direction(v[n-1], v[0], v[1]);

    if(orientation == -n)
	return 1;
    if(orientation == n)
	return -1;
    return 0; 
}


