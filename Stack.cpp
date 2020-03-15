
#include <iostream>
#include <stack>
using namespace std;

int main()
{
 stack<int>s;
 int n = 0;
 cout << "Input stack length: ";
 cin >> n;
 for (int number = 0; number <= n; number += 2)
 {
	 cout << (number) << ("\n");
	 n++;
	 s.push(number);
 }
	
	cout << "Element at top is: " << s.top() << "\n";
	cout << "Stack is empty (1 - YES / 0 - NO): " << s.empty() << "\n";
	cout << "Size of stack s: " << s.size() << "\n";
	s.pop();
	cout << "Element second from the top is: " << s.top() << "\n";

	return 0;
}