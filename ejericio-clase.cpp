
#include <iostream>
#define MAX 2
using namespace std;

template <class TEST>
inline void cm(TEST x1,TEST y1,TEST x2,TEST y2,TEST& m)
{
	TEST x=0,y=0;
	x=x2-x1;
	y=y2-y1;
	m=y/x;
}
int main (void)
{
	int x1,x2,y1,y2,m;
	cout<<"ingrese las coordenadas del punto 1 (primero la parte en x luego la de y):"<< endl;
	cin>>x1;
	cin>>y1;
	cout<<"ingrese las coordenadas del punto 2 (primero la parte en x luego la de y):"<< endl;
	cin>>x2;
	cin>>y2;
	cm(x1,y1,x2,y2,m);
	cout<<"la pendiente es: "<< m << endl;
	return 0;
}