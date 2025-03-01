
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int l, int h, int n) {
	while (l <= h) {
		int mid = (l + h) / 2;
		if (arr[mid] == n) return mid;
		else if (arr[mid] < n) {
			l = mid + 1;
		}
		else {
			h = mid - 1;
		}
	}
	return -1;
}
int main()
{
	int arr[3] = { 1,2,3 };
	cout << BinarySearch(arr,0,2,3);
}
