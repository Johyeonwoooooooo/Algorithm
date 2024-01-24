#include<iostream>
using namespace std;

class Stack_Node
{
private:
	int x;
public:
	Stack_Node(int x = -1)
	{
		this->x = x;
	}
	int Stack_value() const
	{
		return this -> x;
	}
	void Changing_value(int x)
	{
		this->x = x;
	}

	Stack_Node* next = nullptr;
};

class Stack
{
private:
	int size = 0;
public:
	Stack_Node* top = nullptr;
	Stack_Node* bottom = nullptr;
	Stack_Node* pop_helper = nullptr;

	void push(int k)
	{
		if (size == 0)
		{
			top = new Stack_Node(k);
			bottom = top;
		}
		else
		{
			pop_helper = top;
			Stack_Node* new_StackNode = new Stack_Node(k);
			top->next = new_StackNode;
			top = top->next;
		}
		size++;
	}

	void pop()
	{
		if (isEmpty())
		{
			cout << -1 << "\n";
		}
		else if (size == 1)
		{
			cout << top->Stack_value() << "\n";
			delete top;
			top = nullptr;
			bottom = nullptr;
			pop_helper = nullptr;
			size--;
		}
		else
		{
			Stack_Node* temp = bottom;

			while (temp->next != top)
			{
				temp = temp->next;
			}
			cout << top->Stack_value() << "\n";

			delete top;
			top = temp;
			top->next = nullptr;
			size--;
		}
	}
	bool isEmpty()
	{
		if (size == 0)
			return true;
		else
			return false;
	}
	void print_size()
	{
		cout << size << "\n";
	}

	void Look()
	{
		if (isEmpty())
			cout << -1 << "\n";
		else
		{
			cout << top->Stack_value() << "\n";
		}
	}
};
int main()
{
	int n;
	cin >> n;

	Stack stack;
	for (int i = 0; i < n; i++)
	{
		char cmd;
		cin >> cmd;

		switch (cmd)
		{
		case'1':
			int k;
			cin >> k;
			stack.push(k);
			break;
		case'2':
			stack.pop();
			break;
		case'3':
			stack.print_size();
			break;
		case'4':
			if (stack.isEmpty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
			break;
		case'5':
			stack.Look();
			break;
		}
	}
	return 0;
}