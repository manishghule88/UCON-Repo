/// @file main.cpp
///
/// Definitions for the main function - This function have the object of the distance and currecnies class,
/// call the function the function of pass the parameter as a object.
///
/// @version 0.1
///
/// @author Manish Ghule <manishghule26@gmail.com >
///
/// (C)2024 Zeus Numerix Pvt. Ltd. All rights reserved.
/// http :// www.zeusnumerix.com/

#include "conversion.h"
#include "function.h"
using namespace std;

// This is main (Entry Point Function)
int main() {
    Distance dobj;   /// object of the Distance class
    Currencies cobj; /// object of the Currencies class

    int isOption = 0;   

    while (1)   /// use this for to repeat the all under the exception once again.
    {
        cout << "Which One Conversion Do You Want to Perfrom ?" << endl;
        
        cout << " 1. Distance Conversion" << endl;
        
        cout << " 2. Currencies Conversion" << endl;
        
        cout << " 0. Exit" << endl;
        

        // To make conversions please give vaild option.
        cout << "Select the Option " << endl;      
        cin >> isOption;

        listOfConversions(isOption);	/// Function call of all the Conversion

        if (isOption == 1) {
            checkDistance(dobj);	/// passing object as a parameter of distance class.
        } else if (isOption == 2) {
            checkCurrencies(cobj);	/// passing object as a parameter of Currencies class.
        } else {
            break;
        }
       checkContinue(); 
    }
    
    return 0;
}

