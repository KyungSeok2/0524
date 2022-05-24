#include <iostream>
#include <string>



using namespace std;


template<typename T>
class Queue
{
public:
	Queue() {}
	virtual ~Queue() {}

	T Database[10];                   //다양한 값이 저장가능한 배열만들기

	int Cursor = -1;                  //Push함수에 A변수 함유
	int Cursor2 = 0;

	void Push(T A)
	{
		Database[++Cursor] = A;         //cursor 배열 값 = A
	}

	void Pop()
	{
		Cursor2++;								//pop함수는 cursor값을 하나 뺀다
	}


	T DeQueue()
	{
		return Database[Cursor2];			    //Top함수는 데이터베이스의 cursor위치 배열값을 반환한다
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