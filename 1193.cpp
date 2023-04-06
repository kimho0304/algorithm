#include <iostream>
using namespace std;

int up[10000010] = {0, };
int down[10000010] = {0, };
int x;
int arr1 = 1, arr2 = 1;

void cal() {
	int i = 1;

	while(1) {

		if (i % 2 == 0) {
			for (int j = 1; j <= i; j++) {
                if (arr1 > x) break;
				up[arr1++] = j;
			}
			for (int j = i; j > 0; j--) {
				if (arr2 > x) {
					cout << up[x] << "/" << down[x] << endl;
					return;
				}
				down[arr2++] = j;
			}
		}

		else {
			for (int j = i; j > 0; j--) {
                if (arr1 > x) break;
				up[arr1++] = j;
			}
			for (int j = 1; j <= i; j++) {
				if (arr2 > x) {
					cout << up[x] << "/" << down[x] << endl;
					return;
				}
				down[arr2++] = j;
			}
		}
		i++;
	}

}

int main() {
	cin >> x;
	cal();
	return 0;
}
