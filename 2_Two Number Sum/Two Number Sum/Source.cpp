#include <iostream>
#include <vector>

using namespace std;

vector<int> twoNumberSum(vector<int>, int);

int main()
{
	vector<int> array = { 3, 5, -4, 8, 11, 1, -1, 6 };
	vector<int> ans;
	int targetSum = 10; int i = 0;
	ans = twoNumberSum(array, targetSum);
	cout <<"[" << ans[i] << ", " << ans[i+1]<< "]";
}

vector<int> twoNumberSum(vector<int> array, int targetSum)
{
	vector<int> repos;
	for (int i = 0; i < array.size(); i++)
	{
		for (int j = i + 1; j < array.size(); j++)
		{
			if ((i < j) && (targetSum == array[i] + array[j]))
			{
				repos.insert(repos.begin(), array[i]);
				repos.insert(repos.begin(), array[j]);
				break;
			}
		}
	}
	return repos;
}