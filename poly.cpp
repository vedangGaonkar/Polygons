#include "poly.h"

void polygon::process(int c)
{
    cout<<"Polygon "<<c<<"\n";
      
    if(!simple())
    {
	cout<<"  Not simple\n";
	return;
    }

    cout<<"  Simple\n";

    int con = convex();
 
    if(con == 0)
    {
	cout<<"  Not convex\n";
	return;
    }

    cout<<"  Convex\n";

    if(con > 0 )
	cout<<"  Counterclockwise\n";
    else
	cout<<"  Clockwise\n";
 
    return;
}


int direction(point &p, point &q, point &r)
{
    double ret = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

    if(ret == 0.0 )
	return 0;
    if(ret > 0)
	return 1;
    return -1;
}
