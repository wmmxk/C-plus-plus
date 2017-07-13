#ifndef QUEUE_H_
#define QUEUE_H_

class Queue
{
 private:
		 enum {MAX = 4};
			int arr[MAX];
			int front, rear;
	public:
			Queue();
			bool push(const int & item);
			bool pop (int & item);
			void show() const;



};

#endif
