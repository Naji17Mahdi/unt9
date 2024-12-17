#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float f ( float  );

main()
{
	int i;
	int n;
	
	cout<<"Enter n : "<<endl;
	cin>>n;
	
	for ( i = 1 ; i <= n ; i++ )
	{
		cout<<i<<'\t'<<f ( i )<<endl;
	}
}

float f ( float a )
{
	float s;
	s = a * a ;
	return s;
}
