//.............Utkarsh-Codes.................

#include <bits/stdc++.h>
using namespace std;
/*
the algo does it separately for first case , because of the while loop, the while loops breaking condition is already
satisfied at the beginning of the process.

another way can be using do while loop, which gives a chance to run at least one iteration first

*/
void cycleSortRepetative(int arr[], int n)
{
	for (int cycle_start = 0 ; cycle_start < n - 1; cycle_start++) {
		int targetItem = arr[cycle_start];
		int position = cycle_start;
		for (int i = cycle_start + 1; i < n; i++) {
			if (arr[i] < targetItem)
				position++;
		}
		//if (position == cycle_start) continue;

		while (targetItem == arr[position])
			position++;
		swap(targetItem, arr[position]);  //fix first

		while (position != cycle_start) {	 // fix rest
			position = cycle_start;

			for (int i = cycle_start + 1; i < n; i++) {
				if (arr[i] < targetItem)
					position++;
			}
			while (targetItem == arr[position]) // skipping duplicates, they already at thier position.
				position++;
			/*
			  if the position already has target item leave it as it is.
			  now for all duplicates of target_item there can be k1,k2,k3....(contiguous) so on positions to sit
			 now our algorithm... this :
			 		if (arr[i] < targetItem)
					position++;
				has given us the lowest position for target_item i.e k1

				now if k1 already has a value of target item, it can be skipped , becuase it is a "just" position
				for it . we move forward (position++) and check if others of (k2,k3.... ) any have element !=targetItem
				then that can be replaced;
			*/
			swap(targetItem, arr[position]);  /// new target item and prev item replaced at correct position

		}
	}
}
void cycleSortDistinct(int arr[], int n)
{
	for (int cycle_start = 0 ; cycle_start < n - 1; cycle_start++) {
		int targetItem = arr[cycle_start];
		int position = cycle_start;
		for (int i = cycle_start + 1; i < n; i++) {
			if (arr[i] < targetItem)
				position++;
		}

		swap(targetItem, arr[position]);  //fix first

		while (position != cycle_start) {	 // fix rest
			position = cycle_start;

			for (int i = cycle_start + 1; i < n; i++) {
				if (arr[i] < targetItem)
					position++;
			}

			swap(targetItem, arr[position]);  /// new target item and prev item replaced at correct position

		}
	}
}
void cycle_sort(int arr[], int n) // not working
{
	int position = 0, cs = 0, target = arr[cs];
	do {
		for (int i = cs + 1; i < n; i++)
			if (arr[i] < target)
				position++;
		cout << "cs " << cs << "pos1: " << position << " ";
		while (target == arr[position])
			position++;
		cout << "position2: " << position << " target" << target << " arr[pos] " << arr[position];
		swap(target, arr[position] );

		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;

		if ( cs < n - 1 && position == cs) {
			cs++;
			target = arr[cs];
			position = cs;
		}
		position = cs;
	} while (cs < n - 1);
}
int main()   /// its should be clear that if array has duplicate elements or not, as we have different algos
{
	int t{};
	cin >> t;
	while (t--) {
		int n{};
		cout << "Enter Size: ";

		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];


		cycleSortRepetative(arr, n);
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
