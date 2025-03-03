﻿#include <iostream>
using namespace std;
int partition(int arr[], int l, int h) {
	int p = arr[l];
	int i = l;
	int j = h;
	while (i < j) {
		do {
			i++;
		} while (arr[i] <= p);
		do {
			j--;
		} while (arr[j] > p);
		if (i < j) swap(arr[i], arr[j]);
	}
	swap(arr[l], arr[j]);
	return j;
}
void quick_sort(int arr[], int l, int h) {
	if (l < h) {
		int piv = partition(arr, l, h);
		quick_sort(arr, l, piv);
		quick_sort(arr, piv+1 , h);
	}
}
int main()
{
	int arr[4] = { 2,3,1,4};
	quick_sort(arr, 0, 3);
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << ' ';
	}
}