#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, A;
vector<int> Avec;

int main() {
	int result = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A;
		Avec.push_back(A);
	}
	
	sort(Avec.begin(), Avec.end());


	if (Avec.size() == 1) {
		result = Avec.at(0) * Avec.at(0);
	}
	else {
		result =  Avec.at(0) * Avec.at(Avec.size() - 1);
	}
	
	cout << result;
	return 0;
}
