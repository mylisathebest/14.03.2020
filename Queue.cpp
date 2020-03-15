#include <iostream> 
#include <queue> 
using namespace std;
int main()
{
	queue <int> q;
	cout << "Input queue length: ";
	int n = 0;
	cin >> n;
	for (int number = 0; number <= n; number += 2) {
		n++;
		q.push(number);
		cout << number << "\n";
	}
	cout << "Element at front is : " << q.front() << "\n";
	cout << "Element at rear is : " << q.back() << "\n";
	cout << "Queue is empty(1) or not(0) : " << q.empty() << "\n";
	cout << "Size of the Queue is : " << q.size() << "\n";
	q.pop();
	cout << "Element before front is : " << q.front() << "\n";
	return 0;
}


