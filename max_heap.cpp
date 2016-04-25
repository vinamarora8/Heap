#include "max_heap.h"

max_heap::max_heap(int n)
{
	data = new int[n];
	node = 1;	
	length = 0;
}

void max_heap::shift_up(int index)
{
	if(index > 1)
	{
		int temp = data[index];
		data[index] = data[index/2];
		data[index/2] = temp;
	}
}

void max_heap::insert(int element)
{
	data[node] = element;
	int index = node;
	node++;
	length++;
	while (element > data[index/2] && index > 1)
	{
		shift_up(index);
		index /= 2;
	}
}

int max_heap::peek()
{
	if(length>0)
		return data[1];
	return 0;
}

void max_heap::delete_max(int index)
{
	if(length>0 && index < node)
	{
		int index_to_push = (data[2*index] > data[2*index + 1] ? 2*index : 2*index + 1);
		shift_up(index_to_push);
		delete_max(index_to_push);
		node--;
		length--;
	}
}

int max_heap::extract_max()
{
	int ret = data[0];
	delete_max();
	return ret;
}

int *max_heap::ret_array()
{
	int *ret = new int[1];
	for (int i=0; i < length; i++)
		ret[i] = data[i+1];
	return ret;
}

int max_heap::size()
{
	return length;
}
