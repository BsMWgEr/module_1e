//Name: Jonathan McGaha
//Email: mcgaha.jonathan@titans.easternflorida.edu
//Purpose: This program takes in the width and height.
// Then calculates the total perimeter and outputs the calculations
//Algorithm:
//1. get the width from the user
//2. get the height from the user
//3. calculate the total perimeter
// by multiplying width and height by 2 then adding the vaiables together.
//4. Print out the calculation


#include <iostream>

using namespace std;

int main() {
    double width_, height_, totalFence;

    cout << "Please enter the width: ";
    cin >> width_;
    cout << "Please enter the height: ";
    cin >> height_;
    totalFence = (width_ * 2) + (height_ * 2);
    cout << "the total perimeter is : " << totalFence << endl;


    return 0;
}