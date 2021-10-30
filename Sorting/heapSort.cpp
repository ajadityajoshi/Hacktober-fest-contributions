//.............Utkarsh-Codes.................

#include <bits/stdc++.h>
using namespace std;
/*
heap sort is made from selection sort, based on heap data structure
worst time O(n logn)
heap sort has higher constant time value
so merge sort and quick sort are better

hybrid algo
Intro sort: , based on  quick sort  and uses heap sort
when recursion depth goes beyond nlogn it uses heap sort
 its a standard algo used by c++ stl


So heap sort is used as a helper algorithm in hybrid algo



*/
void max_heapify(int arr[], int n, int i)
{
	int largest = i, left = 2 * i + 1, right = 2 * i + 2;
	if (left < n && arr[left] > arr[largest]) largest = left;
	if (right < n && arr[right] > arr[largest]) largest = right;
	if (largest != i ) {
		swap(arr[largest], arr[i]);
		max_heapify(arr, n, largest); // recursively check if child are heapified
	}
}

void build_heap(int arr[], int n)
{
	for (int i = (n - 2) / 2; i >= 0; i--) {
		max_heapify(arr, n, i); // for all internal nodes
	}
}

void heap_sort(int arr[], int n)
{
	build_heap(arr, n);
	for (int i = n - 1; i >= 1; i--) {
		swap(arr[0], arr[i]);
		max_heapify(arr, i, 0);
	}
}
int main()
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
		heap_sort(arr, n);
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
	}
	return 0;
}
