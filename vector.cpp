#include<iostream>
class MyVector{
private:
	int* data;
	int size_;
	int capacity;

	//push_back;
	//pop_back;
	//at;
	//size;
	//resize;
	
	void resize(int newcapacity){
		int* newData = new int[newcapacity];
		for(int i = 0; i < size_; ++i){
			newData[i] = data[i];
		}
		delete[]data;
		data = newData;
		capacity = newcapacity;
	}
public:
	MyVector() : size_(0), capacity(2){
		data = new int[capacity];
	}
	~MyVector(){
		delete[]data;
	}

	void push_back(int value){
		if(size_ == capacity){
			resize(capacity * 2);
		}
		data[size_++] = value;
	}
	void pop_back(){
	if(size_> 0){
	--size_;
	}
	}
	int size() const{
	return size_;
	
	}
	int at(int index) const{
	if(index >= 0 && index < size_){
	return data[index];
	}
	throw std::out_of_range("Index out of the renge");
	}

};

int main(){
	MyVector vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	std::cout << "Element at index 1 is " << vec.at(0) <<std::endl;
	std::cout << "Vector size " << vec.size() << std::endl;
	vec.pop_back();

	std::cout << "Vector size after pop " << vec.size() << std::endl;
	return 0;


}
