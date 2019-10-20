#include <iostream>
#include <stdio.h>

using namespace std ;

void input(int n, int Arr[])
{
	for (int i =0; i<n; i++)
	{
		cin >> Arr[i] ;
	}
}
int product ( int n, int Arr[])
{
	int s= 1;
	for (int i=0; i<n; i++)
	{
         s = s * Arr[i] ;
	}
	return s ;
}
int main()
{
	int n;
	cin >> n;
	int Arr[n] , A[n] ;
	input(n, Arr) ;
	for ( int i = 0; i<n; i++)
	{
		A[i] = product(n, Arr)/Arr[i] ;
		cout << A[i] <<" " ;
	}
	return 0;
}
