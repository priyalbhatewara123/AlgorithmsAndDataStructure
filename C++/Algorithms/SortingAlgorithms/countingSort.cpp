/*COUNTING SORT

Counting sort is a sorting technique based on keys between a specific range.
It works by counting the number of objects having distinct key values (kind of hashing).
Then doing some arithmetic to calculate the position of each object in the output sequence.

Complexities:
Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
Auxiliary Space: O(n+k)

*/

#include<bits/stdc++.h>
using namespace std;

int main() {

	int n; cin >> n;
	int a[n];
	int maxNum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxNum) {
			maxNum = a[i];
		}
	}

	int freq[maxNum + 1] = {0};
	for (int i = 0; i < n; i++) {
		freq[a[i]]++;
	}

	for (int i = 0; i <= maxNum; i++) {
		if (freq[i] != 0) {
			while (freq[i]--) {
				cout << i << " ";
			}
		}
	}

	return 0;
}

/*Sample Input-Output

Input
6
1 1 9 4 2 6
Output
1 1 2 4 6 9
*/