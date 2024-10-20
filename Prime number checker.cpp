#include<iostream>
using namespace std;
int main() {
	int n;
	cout <<"\033[93PRIME NUMBER CHECKER\n\n" << "Please Enter the Number which you want to check: ";
	cin >> n;cout << endl;
	if (n == 1) {
		cout << "Given Number is not a Prime Number.\n\n";
		return(0);
	}
	for (int j = 2;j <= n / 2;j++) {
		if (n % j == 0) {
			cout << "Given Number is not a Prime Number.\n\n";
			return(0);
		}
	}
	cout << "Given Number is a Prime Number.\n\n";
}
