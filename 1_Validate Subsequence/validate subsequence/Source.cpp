#include<iostream>
#include<vector>

using namespace std;

bool isValidSubsequence(vector<int>, vector<int>);

int main() {
	vector<int> array = { 1, 1,  1, 1, 1, 1};
	vector<int> sequence = { 1, 1, 0 };
	cout << endl << std::boolalpha << isValidSubsequence(array, sequence) << endl;
}

bool isValidSubsequence(vector<int> array, vector<int> sequence) {

	for (int j= 0,i = 0; i < array.size(); i++) {
		if (array[i] == sequence[j])
			if (++j == sequence.size()) // you are done with finding the sequence
				return true;
	}
	return false;
}