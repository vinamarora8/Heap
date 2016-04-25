#include <iostream>
#include "max_heap.h"
using namespace std;

int main()
{
	max_heap h(10);
	char a;
	int n;
	while (a != 'e')
	{
		cin >> a;
		if (a == 'o')
		{
			int *arr = h.ret_array();
			cout << "Heap :  ";
			for (int i=0; i<h.size(); i++)
			{
				cout << arr[i] << "  "; 
			}
			cout << endl;
		}
		else if(a == 'e')
		{
			cout << "Exiting.." << endl;
		}
		else if(a == '+')
		{
			cin >> n;
			h.insert(n);
		}
		else if(a== '-')
		{
			cout << "Max : " << h.extract_max() << endl;
		}
		else if(a == 'p')
		{
			cout << "Peek : " << h.peek() << endl;
		}
		else
		{
			cout << "Unknown Instruction" << endl;
		}
	}
}
