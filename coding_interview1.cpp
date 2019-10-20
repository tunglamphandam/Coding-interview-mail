#include <iostream>
#include <stdio.h>

using namespace std; 

void input(int n, int Arr[])
{
	for ( int i=0; i<n; i++)
	{
		cin >> Arr[i];
	}
}
int main()
{
	int n,k ;
	cin >> k;
	cin >> n;
	int Arr[n] ;
	input(n , Arr) ;
	for (int i =0;i<n-1;i++)
	{
		for (int j = i+1; j<n; j++)
		{
			if (Arr[i] + Arr[j]  == k)
			{
				cout << Arr[i] << " " << Arr[j] <<endl; 
			}
		}
	}
	return 0;
}
