#include <iostream>
#include <vector> 

using namespace std;

// Pass in an array of integers. Any zeroes will be moved to the end when the function ends.
void MoveZeroesToEnd(vector<int>& array)
	{
	// This is the index we're going to be writing too.
	// It will be "the number of non-zero elements we've seen so far".
	int indexToWriteTo = 0;

	// Go through the array.
	for(int i = 0; i < array.size(); i++)
		{
		int element = array[i];

		// If this element is a non-zero...
		if (element != 0)
			{
			// Write this element to the index we're tracking.
			array[indexToWriteTo] = element;
			// Increment our index.
			indexToWriteTo += 1;
			}
		}

	// By this line of code, the front of our array is good.
	// We just need to fill the end of the array with zeroes.
	for(int i = indexToWriteTo; i < array.size(); i++)
		{
		array[i] = 0;
		}

	// "array" now has all the zeroes at the end and is stable.
	// It'll be "returned" as such because we passed it by reference.
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
	// An array with only zeroes.
	array = { 0, 0, 0, 0, 0 };
	MoveZeroesToEnd(array);
	PrintArray(array); // 0 0 0 0 0

	// An array with no zeroes.
	array = { 5, 3, 1, 2, 4 };
	MoveZeroesToEnd(array);
	PrintArray(array); // 5 3 1 2 4

	// An array starting with a zero.
	array = { 0, 0, 1, 7, 4 };
	MoveZeroesToEnd(array);
	PrintArray(array); // 1 7 4 0 0

	// An array ending with a zero.
	array = { 0, 2, 0, 0, 0 };
	MoveZeroesToEnd(array);
	PrintArray(array); // 2 0 0 0 0

	cout << "Program ended.\n";
	}