#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *q1,Rect *q2){

	if (q1->x > q2->x + q2->w || q2->x > q1->x + q1->w){return 0;}
	else if (q1->y < q2->y - q2->h || q2->y < q1->y - q1->h){return 0;} 
	else{

	double xl =  max(q1->x , q2->x);
	double yl =  min(q1->y , q2->y);

	double xr =  min(q1->x + q1->w , q2->x + q2->w);
	double yr =  max(q1->y - q1->h , q2->y - q2->h);

	return ( abs(xr - xl) * abs(yr-yl) ) ;

	}
}




}
