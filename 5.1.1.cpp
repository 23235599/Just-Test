#include<iostream>
#define N 100
using namespace std;
int main()
{
	int a[N], n,m,t=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 0; i < n; i++)
		if (m == a[i])
			t++;
	cout << t;
}
