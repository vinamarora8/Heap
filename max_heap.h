class max_heap
{
private:
	int *data;
	int nodes;

	void shift_up(int index);
	//void shift_down(int index);
public:
	//Basic
	heap(int n = 1);
	void insert(int element);
	int peek();
	void delete_max(int index = 0);
	int extract_max();
	int *ret_array();	
};
