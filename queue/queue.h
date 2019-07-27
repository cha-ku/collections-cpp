#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Queue 
{
		public:
		Queue(const int sz);
		void enqueue(const int num);
		void dequeue();
		int gethead();
		int gettail();
		void print();

		private:
		int size;
		vector<int> vec;
		int head,tail;

};
