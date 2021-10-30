#include <bits/stdc++.h>
using namespace std;
void towerofHanoi(int n, char a = 'A', char b = 'B', char c = 'C');
int main()

{
	//print tower of hanoi steps if number of discs in first case is ?
	int n;
	cout << "enter number of discs\n";
	cin >> n;
	towerofHanoi(n);
	return 0;
}
// void towerofHanoi(int n, char a , char b , char c )
// {
// 	//discs left, source, buffer, destination
// 	if (n == 1 )	{
// 		cout << "Move " << n << " disc from " << a << " to " << c << endl;
// 		return;
// 	}
// 	towerofHanoi(n - 1, 'A', 'C', 'B');
// 	cout << "Move " << n << " disc from " << a << " to " << c << endl;
// 	towerofHanoi(n - 1, 'B', 'A', 'C');
// }


void towerofHanoi(int n, char a , char b , char c )
{
	//discs left, source, buffer, destination

	if (n > 0) {
		towerofHanoi(n - 1, 'A', 'C', 'B');
		cout << "Move " << n << " disc from " << a << " to " << c << endl;
		towerofHanoi(n - 1, 'B', 'A', 'C');
	}
}

