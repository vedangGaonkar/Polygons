#include "poly.h" 

int main(int argc, char *argv[])
{
    int n;
    int c = 1;

    ifstream fin;
    fin.open(argv[1]);

    while(fin>>n && n > 2)
    {
	vector<point> v;
	for(int i=0; i<n; i++)
	{
	    double a,b;
	    fin>>a>>b;
	    point p(a,b);
	    v.push_back(p);
	}

	polygon pol(n, v);
	pol.process(c);
	c++;
    }

    return 0;
}
