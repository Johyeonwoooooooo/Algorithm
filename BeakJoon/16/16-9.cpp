#include<iostream>
using namespace std;

class Node
{
private:
	int data;
public:
	Node(int a)
	{
		this->data = a;
	}

	int Node_data()
	{
		return this->data;
	}

	Node* next = nullptr;
	Node* prior = nullptr;
};

class double_linked
{
private:
	Node* front = nullptr;
	Node* back = nullptr;
	int size = 0;
public:
	void push(int a)
	{
		if (size == 0)
		{
			front = new Node(a);
			back = front;
		}
		else
		{
			front->prior = new Node(a);
			front->prior-> next = front;
			front = front->prior;
		}
		size++;
	}
	void push_back(int a)
	{
		if (size == 0)
		{
			back = new Node(a);
			front = back;
		}
		else
		{
			back->next = new Node(a);
			back->next->prior = back;
			back = back->next;
		}
		size++;
	}
	void pop_front()
	{
		if (!isEmpty())
		{
			if (size == 1)
			{
				cout << front->Node_data() << "\n";
				size--;
				delete front;
				front = nullptr;
				back = nullptr;
			}
			else
			{
				Node* temp = front;
				cout << front->Node_data() << "\n";

				front = front->next;
				front->prior = nullptr; // 이 부분을 추가해야 합니다.
				size--;
				delete temp;
			}
		}
		else
			cout << -1 << "\n";

	}
	void pop_back()
	{
		if (!isEmpty())
		{
			if (size == 0)
			{
				cout << front->Node_data() << "\n";
				size--;
				delete front;
				front = nullptr;
				back = nullptr;
			}
			else
			{
				Node* temp = back;
				cout << back->Node_data() << "\n";
				back = back->prior;
				back->next = nullptr;
				size--;
				delete temp;
			}
		}
		else
			cout << -1 << "\n";
	}
	bool isEmpty()
	{
		if (size == 0)
			return true;
		else
			return false;
	}
	int List_size()
	{
		return this->size;
	}
	void front_Data()
	{
		if (!isEmpty())
			cout << front->Node_data() << "\n";
		else
			cout << -1 << "\n";
	}
	void back_Data()
	{
		if (!isEmpty())
			cout << back->Node_data() << "\n";
		else
			cout << -1 << "\n";
	}
};
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	double_linked list;
	for (int i = 0; i < n; i++)
	{
		int k;
		char cmd;
		cin >> cmd;
		switch (cmd)
		{
		case'1':
			cin >> k;
			list.push(k);
			break;
		case'2':
			cin >> k;
			list.push_back(k);
			break;
		case'3':
			list.pop_front();
			break;
		case'4':
			list.pop_back();
			break;
		case'5':
			cout << list.List_size() << "\n";
			break;
		case'6':
			if (list.isEmpty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
			break;
		case'7':
			list.front_Data();
			break;
		case'8':
			list.back_Data();
			break;
		}
	}
	exit(0);
}