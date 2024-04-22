/// @file conversion.cpp
///
/// Definitions for the function - this file contain the function calls
/// and their return value using the class object.
///
/// @version 0.1
///
/// @author Manish Ghule <manishghule26@gmail.com >
///
/// (C)2024 Zeus Numerix Pvt. Ltd. All rights reserved.
/// http :// www.zeusnumerix.com/

#include "conversion.h"

// Distance related Functions calls are and return value are present in this function.
void checkDistance(Distance dobj) {
    int conversionPerfrom = 0;    // variable to store the conversion type
    float conversionValue = 0.0f;  // variable to store the value of distance
    float fRet = 0.0f;  // variable to store the final result

    cout << endl;
   
    cout << "Select the Conversion Type " << endl;
    cin >> conversionPerfrom;

    if (conversionPerfrom == 0) {
        return;
    }

    cout << "Enter the Distance to Convert :" << endl;
    cin >> conversionValue;

    switch (conversionPerfrom) {
    case 1:
        /// this function convert meter to centimeter
        fRet = dobj.meterCentiMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Meter = " << fRet << " CentiMeter " << endl;
        break;
        
    case 2:
        /// this function convert kilo meter to meter
        fRet = dobj.kiloMeterMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " KiloMeter = " << fRet << "Meter" << endl;
        break;

    case 3:
        /// this function convert meter to millimeter
        fRet = dobj.meterMilliMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Meter = " << fRet << " MilliMeter " << endl;
        break;

    case 4:
        /// this function convert micrometer to nanometer
        fRet = dobj.microMeterNanoMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " MicroMeter = " << fRet << " NanoMeter " << endl;
        break;

    case 5:
        /// this function convert nanometer to mile
        fRet = dobj.nanoMeterMile(conversionValue);
        cout << " The Conversion of the " << conversionValue << " NanoMeter = " << fRet << " Mile " << endl;
        break;

    case 6:
        /// this function convert mile to yard
        fRet = dobj.mileYard(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Mile = " << fRet << " Yard " << endl;
        break;

    case 7:
        /// this function convert meter to centimeter
        fRet = dobj.yardFoot(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Yard = " << fRet << " Foot " << endl;
        break;

    case 8:
        /// this function convert foot to inch
        fRet = dobj.footInch(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Foot = " << fRet << " Inch " << endl;
        break;

    case 9:
        /// this function convert inch to nautical mile
        fRet = dobj.inchNauticalMile(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Inch = " << fRet << " NauticalMile " << endl;
        break;

    case 10:
        /// this function convert centi meter to milli meter
        fRet = dobj.centiMeterMilliMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " CentiMeter = " << fRet << " MilliMeter " << endl;
        break;

    case 11:
        /// this function convert millimeter to micro meter
        fRet = dobj.milliMeterMicroMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " MilliMeter = " << fRet << " MicroMeter " << endl;
        break;

    case 12:
        /// this function convert micrometer to meter
        fRet = dobj.microMeterMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " MicroMeter = " << fRet << " Meter " << endl;
        break;

    case 13:
        /// this function convert inch to foot
        fRet = dobj.inchFoot(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Inch = " << fRet << " Foot " << endl;
        break;

    case 14:
        /// this function convert mile to kilo meter
        fRet = dobj.mileKiloMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Mile = " << fRet << " KiloMeter " << endl;
        break;

    case 15:
        /// this function convert foot to meter
        fRet = dobj.footMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Foot = " << fRet << " Meter " << endl;
        break;

    case 16:
        /// this function convert centi meter to meter
        fRet = dobj.centiMeterMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " CentiMeter = " << fRet << " Meter " << endl;
        break;

    case 17:
        /// this function convert meter to kilometer
        fRet = dobj.meterKiloMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Meter = " << fRet << " KiloMeter " << endl;
        break;

    case 18:
        /// this function convert millimeter to meter
        fRet = dobj.milliMeterMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " MilliMeter = " << fRet << " Meter " << endl;
        break;

    case 19:
        /// this function convert mile to nano meter
        fRet = dobj.mileNanoMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Mile = " << fRet << " NanoMeter " << endl;
        break;

    case 20:
        /// this function convert meter to foot
        fRet = dobj.meterFoot(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Meter = " << fRet << " Foot " << endl;
        break;

    case 21:
        /// this function convert nanometer to micrometer
        fRet = dobj.nanoMeterMicroMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " NanoMeter = " << fRet << " MicroMeter " << endl;
        break;

    case 22:
        /// this function convert centi meter to foot
        fRet = dobj.centiMeterFoot(conversionValue);
        cout << " The Conversion of the " << conversionValue << " CentiMeter = " << fRet << " Foot " << endl;
        break;

    case 23:
        /// this function convert kilometer to nautical mile
        fRet = dobj.kiloMeterNauticalMile(conversionValue);
        cout << " The Conversion of the " << conversionValue << " KiloMeter = " << fRet << " NauticalMile " << endl;
        break;

    case 24:
        /// this function convert foot to kilo meter
        fRet = dobj.footKiloMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " Foot = " << fRet << " KiloMeter " << endl;
        break;

    case 25:
        /// this function convert nano meter to milli meter
        fRet = dobj.nanoMeterMilliMeter(conversionValue);
        cout << " The Conversion of the " << conversionValue << " NanoMeter = " << fRet << " MilliMeter " << endl;
        break;

    default:
        cout << " Invalid Choice " << endl;
    }
}

/// Currencies related Functions calls are and return value are present in this function.
void checkCurrencies(Currencies cobj) {
    int conversionPerfrom = 0;   // variable to store the conversion type
    float conversionValue = 0.0f;  // variable to store the value of distance
    float fRet = 0.0f;  // variable to store the final result

    cout << endl;
 
        cout << "Select the Conversion Type " << endl;
        cin >> conversionPerfrom;

        if (conversionPerfrom == 0) {
            return;
        }

        cout << "Enter the Amount to Convert :" << endl;
        cin >> conversionValue;

        switch (conversionPerfrom) {
        case 1:
            /// this function convert indian rupee to us dollar
            fRet = cobj.indianRupeeUSDollar(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Indian Rupee = " << fRet << " Dollar " << endl;
            break;

        case 2:
            /// this function convert indian rupee to euro
            fRet = cobj.indianRupeeEuro(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Indian Rupee = " << fRet << " Euro " << endl;
            break;

        case 3:
            /// this function convert hong kong dollar to indian rupee
            fRet = cobj.hongKongDollarIndianRupee(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Hong Kong Dollar = " << fRet << " Indian Rupee " << endl;
            break;

        case 4:
            /// this function convert new zeland dollar to pak rupee
            fRet = cobj.newZelandDollarPakRupee(conversionValue);
            cout << " The Conversion of the " << conversionValue << " New Zeland Dollar = " << fRet << " Pakistani Rupee " << endl;
            break;

        case 5:
            /// this function convert sudanese pound to srilankan rupee
            fRet = cobj.sudanesePoundSrilankanRupee(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Sudanese Pound = " << fRet << " Srilankan Rupee " << endl;
            break;

        case 6:
            /// this function convert mexican peso to liberian dollar
            fRet = cobj.mexicanPesoLiberianDollar(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Mexican Peso = " << fRet << " Liberian Dollar " << endl;
            break;

        case 7:
            /// this function convert australian dollar to brazilian real
            fRet = cobj.australianDollarBrazilanReal(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Australian Dollar = " << fRet << " Brazilan Real " << endl;
            break;

        case 8:
            /// this function convert bitcoin to indian rupee
            fRet = cobj.bitcoinIndianRupee(conversionValue);
            cout << " The Conversion of the " << conversionValue << " BitCoin = " << fRet << " Indian Rupee " << endl;
            break;

        case 9:
            /// this function convert singapore dollar to mexican peso
            fRet = cobj.singaporeDollarMexicanPeso(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Singapore Dollar = " << fRet << " Mexican Peso " << endl;
            break;

        case 10:
            /// this function convert russian ruble to united dollar
            fRet = cobj.russianRubleUnitedDollar(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Russian Ruble = " << fRet << " US Dollar " << endl;
            break;

        case 11:
            /// this function convert swiss franc to euro
            fRet = cobj.swissFrancEuro(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Swiss Franc = " << fRet << " Euro " << endl;
            break;

        case 12:
            /// this function convert british pound sterling to south africa rand
            fRet = cobj.britishPoundSterlingSouthAfricaRand(conversionValue);
            cout << " The Conversion of the " << conversionValue << " British Pound Sterling = " << fRet << " South Africa Rand " << endl;
            break;

        case 13:
            /// this function convert japanese yen to south korean won
            fRet = cobj.japaneseYenSouthKoreanWon(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Japanese Yen = " << fRet << " South Korean Won " << endl;
            break;

        case 14:
            /// this function convert south korean won to indian rupee
            fRet = cobj.southKoreanWonIndianRupee(conversionValue);
            cout << " The Conversion of the " << conversionValue << " South Korean Won = " << fRet << " Indian Rupee " << endl;
            break;

        case 15:
            /// this function convert swedish korna to thai bhat
            fRet = cobj.swedishKronaThaiBaht(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Swedish Krona = " << fRet << " Thai Baht " << endl;
            break;

        case 16:
            /// this function convert indonesian rupiah to turkish lira
            fRet = cobj.indonesianRupiahTurkishLira(conversionValue);
            cout << " The Conversion of the " << conversionValue << " IndonesianRupiah = " << fRet << " TurkishLira " << endl;
            break;

        case 17:
            /// this function convert egyptian pound to malaysian ringgit
            fRet = cobj.egyptianPoundMalaysianRinggit(conversionValue);
            cout << " The Conversion of the " << conversionValue << " EgyptianPound = " << fRet << " MalaysianRinggit " << endl;
            break;

        case 18:
            /// this function convert bahraini dinar to cuban peso
            fRet = cobj.bahrainiDinarCubanPeso(conversionValue);
            cout << " The Conversion of the " << conversionValue << " BahrainiDinar = " << fRet << " Cuban Peso " << endl;
            break;

        case 19:
            /// this function convert afghan afghani to guernsey pound
            fRet = cobj.afghanAfghaniGuernseyPound(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Afghan Afghani = " << fRet << " Guernsey Pound " << endl;
            break;

        case 20:
            /// this function convert british pound to romanian leu
            fRet = cobj.britishPoundRomanianLeu(conversionValue);
            cout << " The Conversion of the " << conversionValue << " British Pound = " << fRet << " Romanian Leu " << endl;
            break;

        case 21:
            /// this function convert norwegian krone to bulgarian lev
            fRet = cobj.norwegianKroneBulgarianLev(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Norwegian Krone = " << fRet << " Bulgarian Lev " << endl;
            break;

        case 22:
            /// this function convert polish zolty to taiwan new dollar
            fRet = cobj.polishZoltyTaiwanNewDollar(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Polish Zolty = " << fRet << " Taiwan New Dollar " << endl;
            break;

        case 23:
            /// this function convert brazilian rral to indian rupee
            fRet = cobj.brazilianRralIndianRupee(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Brazilian Real = " << fRet << " Indian Rupee " << endl;
            break;

        case 24:
            /// this function convert australian dollar to israeli new shekels
            fRet = cobj.australianDollarIsraeliNewShekels(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Australian Dollar = " << fRet << " Israeli New Shekels " << endl;
            break;

        case 25:
            /// this function convert hong kong dollar to danish korner
            fRet = cobj.hongKongDollarDanishKorner(conversionValue);
            cout << " The Conversion of the " << conversionValue << " Hong Kong Dollar = " << fRet << " Danish Korner " << endl;
            break;

        default:
            cout << " Invalid Choice " << endl;
        }
}
