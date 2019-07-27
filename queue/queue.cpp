#include "queue.h"
#include <iostream>

using namespace std;

Queue::Queue(const int sz)
{
		size = sz;
		vec.reserve(sz);
		head = -1;
		tail = -1;
}

void Queue::enqueue(const int num)
{
		vec.push_back(num);
		if(head == -1 && tail == -1) {
			head++;
			tail++;
		}
		else {
			tail++;
		}

}

void Queue::dequeue()
{
		vec.erase(vec.begin());
//		++head;
}

int Queue::gethead()
{
		return vec[head];
}

int Queue::gettail()
{
		return vec[tail];
}

void Queue:: print()
{
		for(auto i:vec)
				cout<<i<<" ";
		cout<<endl;
}
