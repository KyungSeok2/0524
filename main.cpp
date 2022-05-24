#include <iostream>
#include <string>



using namespace std;


template<typename T>
class Queue
{
public:
	Queue() {}
	virtual ~Queue() {}

	T Database[10];                   //�پ��� ���� ���尡���� �迭�����

	int Cursor = -1;                  //Push�Լ��� A���� ����
	int Cursor2 = 0;

	void Push(T A)
	{
		Database[++Cursor] = A;         //cursor �迭 �� = A
	}

	void Pop()
	{
		Cursor2++;								//pop�Լ��� cursor���� �ϳ� ����
	}


	T DeQueue()
	{
		return Database[Cursor2];			    //Top�Լ��� �����ͺ��̽��� cursor��ġ �迭���� ��ȯ�Ѵ�
	}
};


int main()
{
	Queue<float> IntQueue;
	for (int i = 1; i <= 10; ++i)
	{
		IntQueue.Push(i * 1.1f);

	}

	for (int i = 1; i <= 10; ++i)
	{
		cout << IntQueue.DeQueue() << ", ";
		IntQueue.Pop();
	}






	return 0;

}