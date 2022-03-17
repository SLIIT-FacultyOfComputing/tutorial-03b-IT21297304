#include<iostream>

using namespace std;

int volume(int height, int width, int length);

struct box{
	int height;
	int width;
	int length;	
}box1, box2;

int main(){
	
	cout<<"Enter box 1 Height : ";
	cin>>box1.height;
	
	cout<<"Enter box 1 Width : ";
	cin>>box1.width;
	
	cout<<"Enter the box 1 Length : ";
	cin>>box1.length;
	
	cout<<"Enter box 2 Height : ";
	cin>>box2.height;
	
	cout<<"Enter box 2 Width : ";
	cin>>box2.width;
	
	cout<<"Enter box 2 Length : ";
	cin>>box2.length;
	
	int totalVolume = volume(box1.height, box1.width, box1.length) + volume(box2.height, box2.width, box2.length);
	
	cout<<"Volume of the box is : "<<totalVolume<< endl;
	
	return 0;
}

int volume(int height, int width, int length){
	
	int volume;
	
	volume = height * width * length;
	
	return volume;
}
// Implement the functions here
