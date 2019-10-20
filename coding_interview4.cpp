#include <iostream>
#include <stdio.h>

using namespace std;

void sort_arr(int n, int Arr[])
{
	int i,j,key ; 
	for ( i =1; i<n; i++)
	{
		key = Arr[i] ;
		j = i - 1 ;
		while (j >= 0 && Arr[j] > key)
       {
           Arr[j+1] = Arr[j];
           j = j-1;
       }
	   Arr[j+1] = key ;
    }
}
void input(int n, int Arr[])
{
	for ( int i=0; i<n;i++)
	{
		cin >> Arr[i] ;
	}
}
void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}
bool check(int Arr[], int n, int k)
{
	for ( int i=0; i<n; i++)
	{
		if (Arr[i] == k)
		{ 
			return true;
		}
	return false;
	}
}
void del( int n , int Arr[], int pos)
{
    if(n <= 0){
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos >= n){
        pos = n-1;
    }
    for(int i = pos; i < n - 1; i++){
        Arr[i] = Arr[i+1];
    }
    --n;
}
int main()
{
	int n,s=0;
	cin >> n ;
	int Arr[n] ;
    input(n, Arr) ;
    for (int j=0; j<n; j++)
    {
    	if (Arr[j] < 0)
    	{
    		del(n, Arr, j);
    		s=s+1;
		} 
    }
    int k = n-s;
    sort_arr(k, Arr) ;
    printArray(Arr, k);
    int min = Arr[0] ;
    for(int i =1; i<n; i++)
    {
    	while ((Arr[i] - min) == 1)
    	{
		    min = Arr[i];
		    i++;
		}
		if ((Arr[i]-min) !=1)
		{
			cout << min + 1 <<endl;
			break;
		}
    }
	return 0;
}
