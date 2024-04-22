/// @file function.h
///
/// Definitions for the function - almost all the user defined 
/// function are present in this file.
///
/// @version 0.1
///
/// @author Manish Ghule <manishghule26@gmail.com >
///
/// (C)2024 Zeus Numerix Pvt. Ltd. All rights reserved.
/// http :// www.zeusnumerix.com/

#include<iostream>
using namespace std;

/// This list of conversions function have the list of all distance and currencies
/// function that are mentioned in the code.
/// @param[in] iValue  
///     have the paramter for which function want to run
/// @return 
///    there is no return value available
void listOfConversions(int iValue) {
    if (iValue == 1) {
        cout << " The List of the Conversion with Distance are :" << endl;
        cout << " 1. Meter to CentiMeter " << endl;
        cout << " 2. KiloMeter to Meter " << endl;
        cout << " 3. Meter to MilliMeter " << endl;
        cout << " 4. MicroMeter to NanoMeter " << endl;
        cout << " 5. NanoMeter to Mile " << endl;
        cout << " 6. Mile to Yard " << endl;
        cout << " 7. Yard to Foot " << endl;
        cout << " 8. Foot to Inch " << endl;
        cout << " 9. Inch to Nautical Mile " << endl;
        cout << " 10.CentiMeter to MilliMeter " << endl;
        cout << " 11.MilliMeter to MicroMeter " << endl;
        cout << " 12.MicroMeter to Meter " << endl;
        cout << " 13.Inch to Foot " << endl;
        cout << " 14.Mile to KiloMeter " << endl;
        cout << " 15.Foot to Meter " << endl;
        cout << " 16.CentiMeter to Meter " << endl;
        cout << " 17.Meter to KiloMeter " << endl;
        cout << " 18.MilliMeter to Meter " << endl;
        cout << " 19.Mile to NanoMeter " << endl;
        cout << " 20.Meter to Foot " << endl;
        cout << " 21.NanoMeter to MacroMeter " << endl;
        cout << " 22.CentiMeter to Foot " << endl;
        cout << " 23.KiloMeter to Nautical Mile " << endl;
        cout << " 24.Foot to KiloMeter " << endl;
        cout << " 25.NanoMeter to MilliMeter " << endl;
        cout << endl;
    } else if (iValue == 2) {     
        cout << " The List of the Conversion with Currencies are : " << endl;
        cout << " 1. Indian Ruppee to United State Dollar " << endl;
        cout << " 2. Indian Ruppee to Euro " << endl;
        cout << " 3. Hong Kong Dollar to Indian Ruppee " << endl;
        cout << " 4. New Zeland Dollar to Pakistani Ruppee " << endl;
        cout << " 5. Sudanese Pound to Srilankan Ruppee " << endl;
        cout << " 6. Mexican Peso to Liberian Dollar " << endl;
        cout << " 7. Australian Dollar to Brazilan Real " << endl;
        cout << " 8. Bitcoin to Indian Rupee " << endl;
        cout << " 9. Singapore Dollar to Mexican Peso " << endl;
        cout << " 10.Russian Ruble to United Dollar " << endl;
        cout << " 11.Swiss Franc to Euro " << endl;
        cout << " 12.British Pound Sterling to South Africa Rand " << endl;
        cout << " 13.Japanese Yen to South Korean Won " << endl;
        cout << " 14.South Korean Won to Indian Rupee " << endl;
        cout << " 15.Swedish Krona to Thai Baht " << endl;
        cout << " 16.Indonesian Rupiah to Turkish Lira " << endl;
        cout << " 17.Egyptian Pound to Malaysian Ringgit " << endl;
        cout << " 18.Bahraini Dinar to Cuban Peso " << endl;
        cout << " 19.Afghan Afghani to Guernsey Pound " << endl;
        cout << " 20.British Pound to Romanian Leu " << endl;
        cout << " 21.Norwegian Krone to Bulgarian Lev " << endl;
        cout << " 22.Polish Zolty to Taiwan New Dollar " << endl;
        cout << " 23.Brazilian Real to Indian Rupee" << endl;
        cout << " 24.Australian Dollar to Israeli New Shekels " << endl;
        cout << " 25.Hong Kong Dollar to Danish Kroner " << endl;
        cout << endl;
    } else if (iValue == 0) {
        cout << "Exit" << "\n";
        cout << endl;
    }
}

/// function ask again to continue all the list
///
/// @param[in] - no parameter will be pass
/// 
/// @return 
///    there is no return value available
void checkContinue() 
{
    int flag = 1;  
    int temp = 0;   
    
     cout << "Do you want to continue" << endl;
     cin >> temp;

     if (temp == 1) {
        flag = 1;
     } else {
       flag = 0;
     }
}
