#include <iostream>
#include <string.h>

using namespace std;

// Dem so lan xuat hien 
int count(char k,int a,int b, string S)
{
	int s = 0;
	for (int i=a; i<=b; i++)
	{
		if (S[i] == k) s++;  
	}
	return s;
}
//kiem tra
bool checkDistint(string S, int a, int b )
{
	int s = 0 ;
	for (int k=a; k<=b; k++)
	{
		if (count(S[k], a, b, S) == 1) s++;
		else continue ;
	}
	if (s == b-a+1)
	{
		return true;
	}
	return false;
}
void output(string S, int a, int b)
{
	for (int i =a; i<=b;i++)
	{
		cout <<S[i];
	}
}
//ham main
int main()
{
	string S = "ibjhbcbbcab" ;
    int n = S.length();
	int t = 0 ; 
    string C2[100] = {} ;
	int C1[100] = {};
	for (int a=0; a<n-1; a++)
	{
		for (int b = a+1; b<n; b++)
		{
			if (checkDistint(S,a,b) == true) 
			{
				output(S,a,b);
				cout <<" ";
				C1[t] = b-a;
				C2[t] = S.substr(a,b-a+1);
	            t++;
			}
		}
	}
	int max = C1[0];
	for (int i = 1; i<t; i++)
	{
		if (C1[i] > max) max = C1[i];
	}
	for (int i = 0; i<t; i++)
	{
		if (C2[i].length() == max) cout << C2[i] <<endl;
	}
	return 0;
}
