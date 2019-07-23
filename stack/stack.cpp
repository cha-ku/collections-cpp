#include "stack.h"
#include<iostream>

Stack::Stack (int sz) {
		size = sz;
		arr.reserve(sz);
}

void Stack::push (const int ele) {

		if(count == size) {
				cout<<"Overflow !\n";
				return ;
		}
		count++;
		arr.push_back(ele);

}

void Stack::pop() {

		int var = arr.back();
		cout<<var<<" was popped\n";
		arr.pop_back();

}

int Stack::top() {

	int itr = arr.back();
//	vector<int>::iterator itr = arr.front();
	return itr;

}

void Stack::print() {

		cout<<"STACK\n";
		cout<<"|---|\n";
		for( auto i  = arr.end()-1; i >= arr.begin(); --i)
				cout<<"| "<<*i<<" |"<<endl;
		cout<<"|---|\n";

}
