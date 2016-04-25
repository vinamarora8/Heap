#include "max_heap.h"

max_heap::heap(int n)
{
	data = new int[n];
	nodes = 0;
}

void max_heap::shift_up(int index)
{
	if(index > 0)
	{
		int temp = data[index];
		data[index] = data[index/2];
		data[index/2] = temp;
	}
}

void max_heap::insert(int element)
{
	data[nodes] = element;
	int index = nodes;
	nodes++;
	while (element > data[index/2])
	{
		shift_up(index);
		element /= 2;
	}
}

int max_heap::peek()
{
	if(nodes>0)
		return data[0];
	return 0;
}

void max_heap::delete_max(int index)
{
	if(nodes>0)
	{
		int index_to_push = (data[2*index] > data[2*index + 1] ? 2*index : 2*index + 1);
		shift_up(int index_to_push);
		delete_max(index_to_push);
	}
}

int max_heap::extract_max()
{
	int ret = data[0];
	delete_max();
	return ret;
}

int *ret_array()
{
	return data;
}
