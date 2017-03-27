// Mir Aminy: Create function to find the volume of a cube

#include <iostream>
#include<cmath>
using namespace std;

void volume_of_cube()
{
	double length;
  double width;
  double height;
  double volume;

	cout << "Enter the length of the cube: " << endl;
	cin >> length;

  cout << "Enter the width of the cube: " << endl;
  cin >> width;

  cout << "Enter the height of the cube: " << endl;
  cin >> height;        
  
  //Now calculate the volume of the cube
  
        volume = length * width * height;

	cout << "The total volume of the cube is " << volume << "cubic units." << endl;
}
