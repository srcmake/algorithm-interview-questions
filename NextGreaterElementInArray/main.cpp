#include <iostream>
#include <vector>
#include <stack>

using namespace std;

////////////////////////////////////////////////////////////////////////////////
// Print the elements in the vector.
void PrintArray(vector<int> A)
	{
	for(int num: A)
		{
		cout << num << " "; 
		}
	cout << endl;
	}
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
// Return an array that contains the Next Greater Element for each element in A.
vector<int> NextGreaterElement(vector<int> A)
	{
	vector<int> ans(A.size());

	// Create a stack.
	stack<int> s;

	// For each element in A...
	for(int i = 0; i < A.size(); i++)
		{
		// Check if this element is the NGE of the elements on the stack.
    while(s.empty() == false)
      {
      int topOfStackIndex = s.top();
      
      // The current element is greater than the stack's element...
      if(A[i] > A[topOfStackIndex])
        {
        // Mark this element as the NGE for this index.
        ans[topOfStackIndex] = A[i];
        
        // Pop that index off the stack since it has its NGE now.
        s.pop();
        }
      // The current element isn't better, so stop checking.
      else
        {
        break;
        }
			}
		
		// We're done checking if this element is the NGE of it's left neighbors so push its index on the stack.
		s.push(i);
		}
  
  // Cleanup: Any elements that were left on the stack are -1.
  while(s.empty() == false)
    {
    int topOfStackIndex = s.top();
    ans[topOfStackIndex] = -1;
    s.pop();
		}

	return ans;
	}
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
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
	array = { 1, 3, 2, 6, 4, 5, 2 };
	PrintArray(array); // 1 3 2 6 4 5 2
	ngeArray = NextGreaterElement(array);
	PrintArray(ngeArray); // 3 6 6 -1 5 -1 -1
	cout << endl;
	
	std::cout << "Program ended.\n";
	}
////////////////////////////////////////////////////////////////////////////////