#include <iostream>
using namespace std;
template <class t>
class Stack
{
public:
	int top;
	int maxSize;
	t *array;
	Stack(int max) 
	{
		top = -1;
		maxSize = max;
		array = new t[max];
	}

	bool isFull()
	{
		
		return (top == maxSize - 1);
		
	}

	bool isEmpty()
	{

		return (top == -1);
		
	}

	void push(t item)
	{
		if (!isFull())
		{
			top++;
			array[top] = item;
		}
		else
		{
			//cout << "stack is full cannot push\n";
		}
	}

	t pop()
	{
		
		if (!isEmpty())
		{
			top--;
			return array[top + 1];
		}
		else
		{
			//cout << "stack is empty cannot pop\n";
			return array[top]; 
		}

	
	
	}

	t peek()
	{
		
		if (!isEmpty())
		{
			return array[top];
		}
		else
		{
			//cout << "stack is empty cannot pop\n";
			return array[top]; 
		}

		
	}

	void displayStack()
	{
		if (isEmpty())
		{
			cout << "Stack is empty!\n";
		}
		else
		{
			cout << "\nStack: ";
			for (int i = 0; i <= top; i++)
				cout << array[i] << " ";
			cout << "\n";
		}
	}
};
