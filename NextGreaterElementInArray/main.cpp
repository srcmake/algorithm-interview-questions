#include <iostream>
#include <vector>

using namespace std;

// Print the elements in the vector.
void PrintArray(vector<int> A)
	{
	for(int num: A)
		{
		cout << num << " "; 
		}
	cout << endl;
	}

vector<int> NextGreaterElement(vector<int> A)
	{
	vector<int> ans(A.size());

	return ans;
	}

int main()
	{
	std::cout << "Program started.\n";
	
	// Example 1
	vector<int> array = { 1, 3, 2, 5, 4, 2 };
	PrintArray(array); // 1 3 2 5 4 2
	vector<int> ngeArray = NextGreaterElement(array);
	PrintArray(ngeArray); // 3 5 5 -1 -1 -1
	cout << endl;

	// Example 2
	array = { 1, 3, 2, 4, 4, 6, 5 };
	PrintArray(array); // 1 3 2 4 4 6 5
	ngeArray = NextGreaterElement(array);
	PrintArray(ngeArray); // 3 4 4 6 6 -1 -1
	cout << endl;
	
	std::cout << "Program ended.\n";
	}