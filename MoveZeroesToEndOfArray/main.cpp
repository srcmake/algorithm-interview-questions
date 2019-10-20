#include <iostream>
#include <vector> 

using namespace std;

// Pass in an array of integers. Any zeroes will be moved to the end when the function ends.
void MoveZeroesToEnd(vector<int> array)
	{
	
	}

// A simple utility to print an array.
void PrintArray(vector<int> array)
	{
	for(int element : array)
		{
		cout << element << " ";
		}
	cout << endl;
	}

int main()
	{
	cout << "Program started.\n";

	vector<int> array = { 2, 0, 1, 5, 0 };
	PrintArray(array); // 2 0 1 5 0

	MoveZeroesToEnd(array);
	PrintArray(array); // 2 1 5 0 0

	// Edge Cases
	// TODO

	cout << "Program ended.\n";
	}