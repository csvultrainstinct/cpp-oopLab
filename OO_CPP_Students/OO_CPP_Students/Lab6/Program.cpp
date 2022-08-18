#include <iostream>
using namespace std;

#include "SwapData.h"
using namespace Lab6;

int main(int argc, char *argv[])
{
    //Accept values from the user
    int number1, number2;

    //Storing the numbers accepted in SwapData object
	SwapData swapObj;

    //Display numbers before swapping
    swapObj.DisplayValues("Before Swapping :");

    //Swapping the numbers in the object
    swapObj.SwapValues();

    //Display numbers after swapping
    swapObj.DisplayValues("After Swapping :");
}
