
int Binary_search(int arr[], int length, int num)
{
	int min, low = 0, high = length - 1;
	while (low <= high) 
	{
		mid = (low + high) / 2;        
		if (num < arr[mid])  
			high = mid - 1;
		else if (num > arr[mid]) 
			low = mid + 1;
		else return mid;
	}
	return -1;     
}