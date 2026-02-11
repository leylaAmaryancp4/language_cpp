#include <iostream>

int binSearch(int arr[],int start, int end, int target){

	if(start >= end){
		return -1;
	}
		int mid = start + (end - start) / 2;

		if(arr[mid] == target){
			return mid;
		}
	
		if(arr[mid] < target){
			start = mid + 1;
		}else{
			end = mid -1;
		}
		return binSearch(arr,target,start,end);
			
		
		}
	 
int main(){
const int size = 10;
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int target = 9;
int index = binSearch(arr, 0, size - 1, target);
if(index != -1) { 
	std::cout <<"the target is at  index " << index <<std::endl;
}else{
 std::cout << "the target is not found "<<std::endl;
}

}
