//.............Utkarsh-Codes.................

#include <bits/stdc++.h>
using namespace std;
/* O(n*n)
stable sort , does nothing when elements equal and maintains order
n-1 passes for n
in place algorithm , does not need extra space

*/
void  bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		bool swapped = false; // optimisation
		for (int j = 0; j < n - i - 1; j++ ) {   /// some insight on j: j checks till j+1 so, if (i+1)
			if (arr[j + 1] < arr[j]) {    	///  elements are placed, then j should go from 0 to (n-(i+1)) index
				int temp = arr[j + 1];  // but j already checks till j+1 , so j(0 to (n-(i+1)-1)--- n-i-2
				arr[j + 1] = arr[j];		//--->  j < n-i-1 or j <= n-i-2
				arr[j] = temp;
				swapped = true; /// if no swapping array is sorted
			}
			if (!swapped)
				break; // array already sorted,
			// so for sorted algo, only n passes

		}
	}
}
int main()
{
	int t{};
	cin >> t;
	while (t--) {
		int n{};
		cout << "Enter size: ";

		cin >> n;
		int arr[n];
		cout << " Enter arr: ";
		for (int i = 0; i < n; i++)cin >> arr[i];
		bubbleSort(arr, n);
		for (int i = 0; i < n; i++)cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
