#pragma once

#include<stdio.h>

#include<vector>

using namespace std;

class Stack {
	
	public:

		Stack(int size); //parameterized constructor

		void push(int num);
	
		void pop();
	
		int top();

		void print();

	private:

		int count = 0;

		int size;

		vector<int> arr;

};
