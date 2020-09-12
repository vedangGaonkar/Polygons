#ifndef _POLY_H_
#define _POLY_H_

#include <iostream>
#include <vector>
//#include <cmath>
#include <fstream>

using namespace std;

struct point
{
    double x;
    double y;

    point(double X, double Y)
    {
	this->x = X;
	this->y = Y;
    }

};

class polygon
{

    public:
    double n; 
    vector<point> v;
    vector<pair<point, point> > s;

    polygon(int &N, vector<point> &V)
    {
	this->n = N;
	
	for(int i=0; i<N-1; i++)
	{
	    this->v.push_back(V[i]);
	    this->s.push_back({V[i], V[i+1]});
	}
	this->v.push_back(V[N-1]);
	this->s.push_back({V[N-1], V[0]});

    }

    void process(int);
    bool simple();
    int convex();
};

int direction(point&, point&, point&);
bool check(int&, int&, int&);


#endif
