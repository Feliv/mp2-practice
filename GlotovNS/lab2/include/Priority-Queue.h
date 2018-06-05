#pragma once

#include "D-Heap.h"

class PriorityQueue
{
public:
	PriorityQueue() {};
	virtual void Push(Data *&key) = 0;
	virtual Data* Pop() = 0;
	virtual int IsFull()const = 0;
	virtual int IsEmpty()const = 0;
};


/*           Приоритетная очередь на D-куче           */
class DHeapBasedPriorityQueue : public PriorityQueue {
protected:
	DHeap * heap;
public:
	DHeapBasedPriorityQueue(int d = 4);
	DHeapBasedPriorityQueue(const DHeapBasedPriorityQueue &queue);
	DHeapBasedPriorityQueue(Data **keys, int num, int d = 4);
	~DHeapBasedPriorityQueue();
	virtual void Push(Data *&key);	// Добавление ключа в очередь
	virtual Data* Pop();			// Удаление минимального
	virtual int IsFull()const;
	virtual int IsEmpty()const;
};
