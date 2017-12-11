#include <cassert>
int SearchLargest(int* collection, int numItems);
int main()
{
	int numbers[5] = { 1,-3,4,100,-100 };
	assert(SearchLargest(numbers, 5) == 100);
}
int SearchLargest(int * collection, int numItems)
{
	if (numItems <= 0)
		return 0;
	int biggestNum = collection[0];
	for(int i = 0; i < numItems; i++)
		if (collection[i] > biggestNum)
			biggestNum = collection[i];
	return biggestNum;
}
