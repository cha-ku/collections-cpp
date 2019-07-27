#include<stdio.h>
#include "queue.h"

int main()
{
		Queue q(10);
		q.enqueue(5);
		q.enqueue(8);
		q.enqueue(4);
		q.enqueue(0);
		q.enqueue(1);
		q.print();
		cout<<"Tail "<<q.gettail()<<endl;
		cout<<"Head "<<q.gethead()<<endl;
		q.dequeue();
		cout<<"Head after dequeue "<<q.gethead()<<endl;
		q.print();
		return 0;
}
