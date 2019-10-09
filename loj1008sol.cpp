#include <iostream> 
using namespace std; 

int getClosest(int, int, int); 

int findClosest(int arr[], int n, int target){ 
	if (target <= arr[0]) 
		return arr[0]; 
	if (target >= arr[n - 1]) 
		return arr[n - 1]; 

	int i = 0, j = n, mid = 0; 
	while (i < j){ 
		mid = (i + j) / 2; 

		if (arr[mid] == target) 
			return arr[mid]; 

		if (target < arr[mid]){ 
 
			if (mid > 0 && target > arr[mid - 1]) 
				return getClosest(arr[mid - 1], arr[mid], target); 
			j = mid; 
		} 

		else{ 
			if (mid < n - 1 && target < arr[mid + 1]) 
				return getClosest(arr[mid], arr[mid + 1], target); 

			i = mid + 1; 
		} 
	} 

	return arr[mid]; 
} 

int getClosest(int val1, int val2, int target){ 
	if (target - val1 >= val2 - target) 
		return val2; 
	else
		return val1; 
} 

int main(){ 
	int arr[] = {1, 3, 7, 13, 21}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int closest;
	int num;
	cin >> num;
	int value;
	int c = 0;
	while(num--){
		cin >> value;
		closest = findClosest(arr, n, value);
		for(int i = 0; i<n; i++){
			if(closest == arr[i]){
				if(i%2 == 0){
					if(closest - value > 0)
						cout << "Case " << ++c << ": " << i+1 << " " << (i+1)-(closest - value)<< endl;
					else
						cout << "Case " << ++c << ": " << (i+1)+(closest - value) << " " << i+1 << endl;
				}
				else{
					
					if(closest - value > 0)
						cout << "Case " << ++c << ": " << (i+1)-(closest - value) << " " << i+1 << endl;
					else
						cout << "Case " << ++c << ": " << i+1 << " " << (i+1)+(closest - value)<< endl;
					
				}
				
			}
			
		}
	}
	return 0;
}
