#include <iostream>
using namespace std;
int volume(int height, int width, int length);
//define a structure 
struct Box
{
   int Height;
   int Width;
   int Length;	
};

int main()
{
	struct Box box1;// Declare box1 of type Box
  struct Box box2;// Declare box2 of type Box
	
	int totalVolume;
	
	// Input the height, width, lenght of box1 and box2
	
	cout << "Enter Box 1 height: ";
	cin >> box1.Height;
	cout << "Enter Box 1 length: ";
	cin >> box1.Length;
	cout << "Enter Box 1 width: ";
	cin >> box1.Width;
	
	cout << "Enter Box 2 height: ";
	cin >> box2.Height;
	cout << "Enter Box 2 length: ";
	cin >> box2.Length;
	cout << "Enter Box 2 width: ";
	cin >> box2.Width;
	
	totalVolume = volume(box1.Height, box1.Width, box1.Length) + volume(box2.Height, box2.Width, box2.Length);
	cout << "Volume of Box is " << totalVolume << endl;
 
     return 0;
}
int volume(int height, int width, int length)
{
	return height * width* length;
}