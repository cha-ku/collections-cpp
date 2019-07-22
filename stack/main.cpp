#include "stack.h"
#include <iostream>
using namespace std;

int main()
{
		Stack s(10);

		s.push(4);
		s.push(3);
		s.push(0);
		s.push(6);
		s.push(5);
		s.print();
		cout<<"Top is "<<s.top()<<endl;
		s.pop();
		s.pop();
		cout<<"Top is "<<s.top()<<endl;
		s.print();
}
