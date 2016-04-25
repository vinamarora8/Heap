#ifndef MAX_HEAP_H
#define MAX_HEAP_H

class max_heap
{
private:
	int *data;
	int node, length;

	void shift_up(int index);
	//void shift_down(int index);
public:
	//Basic
	max_heap(int n = 1);
	void insert(int element);
	int peek();
	void delete_max(int index = 0);
	int extract_max();
	int *ret_array();	
	int size();
};

#endif
