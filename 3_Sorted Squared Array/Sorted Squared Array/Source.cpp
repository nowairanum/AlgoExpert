#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> sortedSquaredArray(vector<int>);

int sqr (int square) {return pow(square, 2);}
//return square * square;

int main() {
	vector<int> array = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> square_array(array.size());
	cout << "Strating Array: ";
	for (auto it = array.begin(); it != array.end(); it++)
	{
		cout << *it << " ";
	}
	square_array = sortedSquaredArray(array);
	cout << endl<< endl<< "Squared Array: ";
	for (auto it = square_array.begin(); it != square_array.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl << endl;
}


vector<int> sortedSquaredArray(vector<int> array) {
	vector<int> square_array(array.size());
	for (int i = 0; i < array.size(); i++)
	{
		transform(array.begin(), array.end(), square_array.begin(), sqr);
	} 
	sort(square_array.begin(), square_array.end());

	return square_array;
}