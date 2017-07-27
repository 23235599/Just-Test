#include<iostream>
using namespace std;
int main()
{
	int a[10], h, i, t=0;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	cin >> h;
	h = h + 30;
	for (i = 0; i < 10; i++)
		if (h >= a[i]) t++;
	cout << t;
	return 0;
}