#include<iostream>

using namespace std;

int volume(int height, int width, int length);

int main(){
	
	int box1Height, box1Width, box1Length;
	int box2Height, box2Width, box2Length;
	int totalVolume, totalSurface;
	
	cout << "Enter box 1 Height : ";
	cin >> box1Height;
	cout << "Enter box 1 length : ";
	cin >> box1Width;
	cout << "Enter box 1 length : ";
	cin >> box1Length;
	
	cout << "Enter box 2 height : ";
	cin >> box2Height;
	cout << "Enter box 2 width : ";
	cin >> box2Width;
	cout << "Enter box 2 length : ";
	cin >> box2Length;
	
	totalVolume = volume(box1Height, box1Width, box1Length) + volume(box2Height, box2Width, box2Length);
	
	cout << "Volume of box is " << totalVolume << endl;
	
	return 0;
	
}

int volume(int height, int width, int length){
	
	return height * width * length;
}
// Implement the Volume() function here
