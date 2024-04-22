/// @file conversion.h
///
/// Definitions for the function - this header file contains the classes 
/// and their functions.
///
/// @version 0.1
///
/// @author Manish Ghule <manishghule26@gmail.com >
///
/// (C)2024 Zeus Numerix Pvt. Ltd. All rights reserved.
/// http :// www.zeusnumerix.com/

#include<iostream>
using namespace std;

/// Distance class for performing all the action related to distance conversion. 
class Distance { 
public:	
    float mfValue = 0.0f;   // variable to store the output

    /// This function converts meter into centimeter
    ///
    /// @param[in] fNo
    ///     value of meter in fNo variable & meter value to convert
    /// @return 
    ///   return value of centimeter stored in mfValue variable & centimeter will be return
    float meterCentiMeter(float fNo) {
        mfValue = fNo * 100000;
        return mfValue;
    }

    /// This function converts kilometer into meter
    ///
    /// @param[in] fNo
    ///     value of kilometer in fNo variable & kilometer value to convert
    /// @return 
    ///   return value of meter stored in mfValue variable & meter will be return
    float kiloMeterMeter(float fNo) {
        mfValue = fNo * 1000;
        return mfValue;
    }

    /// This function converts meter into millimeter
    ///
    /// @param[in] fNo
    ///     value of meter in fNo variable & meter value to convert
    /// @return 
    ///   return value of millimeter stored in mfValue variable & millimeter will be return
    float meterMilliMeter(float fNo) {
        mfValue = fNo * 1000;
        return mfValue;
    }

    /// This function converts micrometer into nanometer
    ///
    /// @param[in] fNo
    ///     value of micrometer in fNo variable & micrometer value to convert
    /// @return 
    ///   return value of nanometer stored in mfValue variable & nanometer will be return
    float microMeterNanoMeter(float fNo) {
        mfValue = fNo * 1000;
        return mfValue;
    }

    /// This function converts nanometer into mile
    ///
    /// @param[in] fNo
    ///     value of nanometer in fNo variable & nanometer value to convert
    /// @return 
    ///   return value of mile stored in mfValue variable & mile will be return
    float nanoMeterMile(float fNo) {
        mfValue = fNo * 6.2137e-13;
        return mfValue;
    }

    /// This function converts mile into yard
    ///
    /// @param[in] fNo
    ///     value of mile in fNo variable & mile value to convert
    /// @return 
    ///   return value of yard stored in mfValue variable & yard will be return
    float mileYard(float fNo) {
        mfValue = fNo * 1760;
        return mfValue;
    }

    /// This function converts yard into foot
    ///
    /// @param[in] fNo
    ///     value of yard in fNo variable & yard value to convert
    /// @return 
    ///   return value of foot stored in mfValue variable & foot will be return
    float yardFoot(float fNo) {
        mfValue = fNo * 3;
        return mfValue;
    }

    /// This function converts foot into inch
    ///
    /// @param[in] fNo
    ///     value of foot in fNo variable & foot value to convert
    /// @return 
    ///   return value of inch stored in mfValue variable & inch will be return
    float footInch(float fNo) {
        mfValue = fNo * 12;
        return mfValue;
    }

    /// This function converts inch into nautical mile
    ///
    /// @param[in] fNo
    ///     value of inch in fNo variable & inch value to convert
    /// @return 
    ///   return value of nautical mile stored in mfValue variable & nautical mile will be return
    float inchNauticalMile(float fNo) {
        mfValue = fNo * 1.3715e-5;
        return mfValue;
    }

    /// This function converts centimeter into millimeter
    ///
    /// @param[in] fNo
    ///     value of cetntimeter in fNo variable & centimeter value to convert
    /// @return 
    ///   return value of millimeter stored in mfValue variable & millimeter will be return
    float centiMeterMilliMeter(float fNo) {
        mfValue = fNo * 10;
        return mfValue;
    }

    /// This function converts millimeter into micrometer
    ///
    /// @param[in] fNo
    ///     value of millimeter in fNo variable & micrometer value to convert
    /// @return 
    ///   return value of micrometer stored in mfValue variable & micrometer will be return
    float milliMeterMicroMeter(float fNo) {
        mfValue = fNo * 1000;
        return mfValue;
    }

    /// This function converts micrometer into meter
    ///
    /// @param[in] fNo
    ///     value of micrometer in fNo variable & micrometer value to convert
    /// @return 
    ///   return value of meter stored in mfValue variable & meter will be return
    float microMeterMeter(float fNo) {
        mfValue = fNo * 1e-6;
        return mfValue;
    }

    /// This function converts inch into foot
    ///
    /// @param[in] fNo
    ///     value of inch in fNo variable & inch value to convert
    /// @return 
    ///   return value of foot stored in mfValue variable & foot will be return
    float inchFoot(float fNo) {
        mfValue = fNo * 0.0833333;
        return mfValue;
    }

    /// This function converts mile into kilometer
    ///
    /// @param[in] fNo
    ///     value of mile in fNo variable & mile value to convert
    /// @return 
    ///   return value of kilometer stored in mfValue variable & kilometer will be return
    float mileKiloMeter(float fNo) {
        mfValue = fNo * 1.60934;
        return mfValue;
    }

    /// This function converts foot into meter
    ///
    /// @param[in] fNo
    ///     value of foot in fNo variable & foot value to convert
    /// @return 
    ///   return value of meter stored in mfValue variable & meter will be return
    float footMeter(float fNo) {
        mfValue = fNo * 0.3048;
        return mfValue;
    }

    /// This function converts centimeter into meter
    ///
    /// @param[in] fNo
    ///     value of centimeter in fNo variable & centimeter value to convert
    /// @return 
    ///   return value of meter stored in mfValue variable & meter will be return
    float centiMeterMeter(float fNo) {
        mfValue = fNo * 0.01;
        return mfValue;
    }

    /// This function converts meter into kilometer
    ///
    /// @param[in] fNo
    ///     value of meter in fNo variable & meter value to convert
    /// @return 
    ///   return value of kilometer stored in mfValue variable & kilometer will be return
    float meterKiloMeter(float fNo) {
        mfValue = fNo * 100;
        return mfValue;
    }

    /// This function converts millimeter into meter
    ///
    /// @param[in] fNo
    ///     value of millimeter in fNo variable & millimeter value to convert
    /// @return 
    ///   return value of meter stored in mfValue variable & meter will be return
    float milliMeterMeter(float fNo) {
        mfValue = fNo * 0.001;
        return mfValue;
    }

    /// This function converts mile into nanometer
    ///
    /// @param[in] fNo
    ///     value of mile in fNo variable & mile value to convert
    /// @return 
    ///   return value of nanometer stored in mfValue variable & nanometer will be return
    float mileNanoMeter(float fNo) {
        mfValue = fNo * 1.609e+12;
        return mfValue;
    }

    /// This function converts meter into foot
    ///
    /// @param[in] fNo
    ///     value of meter in fNo variable & meter value to convert
    /// @return 
    ///   return value of foot stored in mfValue variable & foot will be return
    float meterFoot(float fNo) {
        mfValue = fNo * 3.28084;
        return mfValue;
    }

    /// This function converts nanometer into micrometer
    ///
    /// @param[in] fNo
    ///     value of nanometer in fNo variable & nanometer value to convert
    /// @return 
    ///   return value of micrometer stored in mfValue variable & micrometer will be return
    float nanoMeterMicroMeter(float fNo) {
        mfValue = fNo * 0.001;
        return mfValue;
    }

    /// This function converts centimeter into foot
    ///
    /// @param[in] fNo
    ///     value of centimeter in fNo variable & centimeter value to convert
    /// @return 
    ///   return value of foot stored in mfValue variable & foot will be return
    float centiMeterFoot(float fNo) {
        mfValue = fNo * 0.0328084;
        return mfValue;
    }

    /// This function converts kilometer into nautical mile
    ///
    /// @param[in] fNo
    ///     value of kilometer in fNo variable & kilometer value to convert
    /// @return 
    ///   return value of nautical mile stored in mfValue variable & nautical mile will be return
    float kiloMeterNauticalMile(float fNo) {
        mfValue = fNo * 0.539957;
        return mfValue;
    }

    /// This function converts foot into kilo meter
    ///
    /// @param[in] fNo
    ///     value of foot in fNo variable & foot value to convert
    /// @return 
    ///   return value of kilo meter stored in mfValue variable & kilo meter will be return
    float footKiloMeter(float fNo) {
        mfValue = fNo * 0.0003048;
        return mfValue;
    }

    /// This function converts nanometer into millimeter
    ///
    /// @param[in] fNo
    ///     value of nanometer in fNo variable & nanometer value to convert
    /// @return 
    ///   return value of millimeter stored in mfValue variable & millimeter will be return
    float nanoMeterMilliMeter(float fNo) {
        mfValue = fNo * 1e-6;
        return mfValue;
    }
};

// All the Currencies Functions and their optimization are present in this class.
class Currencies
{
public:	
    float mfValue = 0.0f;   // variable to store the output

    /// This function converts indian rupee into us dollar
    ///
    /// @param[in] fNo
    ///     value of indian ruppe in fNo variable & indian rupee value to convert
    /// @return 
    ///   return value of us dollar stored in mfValue variable & us dollar will be return
    float indianRupeeUSDollar(float fNo) {
        mfValue = fNo * 0.01199;
        return mfValue;
    }

    /// This function converts indian rupee into euro
    ///
    /// @param[in] fNo
    ///     value of indian ruppe in fNo variable & indian rupee value to convert
    /// @return 
    ///   return value of euro stored in mfValue variable & euro will be return
    float indianRupeeEuro(float fNo) {
        mfValue = fNo * 0.01125;
        return mfValue;
    }

    /// This function converts hong kong dollar into indian rupee
    ///
    /// @param[in] fNo
    ///     value of hong kong dollar in fNo variable & hong kong dollar value to convert
    /// @return 
    ///   return value of indian rupee stored in mfValue variable & indian rupee will be return
    float hongKongDollarIndianRupee(float fNo) {
        mfValue = fNo * 10.64932;
        return mfValue;
    }

    /// This function converts new zeland dollar into pak rupee
    ///
    /// @param[in] fNo
    ///     value of new zeland dollar in fNo variable & new zeland dollar value to convert
    /// @return 
    ///   return value of pak rupee stored in mfValue variable & pak rupee will be return
    float newZelandDollarPakRupee(float fNo) {
        mfValue = fNo * 165.43907;
        return mfValue;
    }

    /// This function converts sudanese pound into srilankan rupee
    ///
    /// @param[in] fNo
    ///     value of sudanese pound in fNo variable & sudanese pound value to convert
    /// @return 
    ///   return value of srilankan rupee stored in mfValue variable & srilankan rupee will be return
    float sudanesePoundSrilankanRupee(float fNo) {
        mfValue = fNo * 0.51051644;
        return mfValue;
    }

    /// This function converts mexican peso into liberian dollar
    ///
    /// @param[in] fNo
    ///     value of mexican peso in fNo variable & liberian dollar value to convert
    /// @return 
    ///   return value of liberian dollar stored in mfValue variable & liberian dollar will be return
    float mexicanPesoLiberianDollar(float fNo) {
        mfValue = fNo * 11.649468;
        return mfValue;
    }

    /// This function converts australian dollar into brazilan real
    ///
    /// @param[in] fNo
    ///     value of australian dollar in fNo variable & australian dollar value to convert
    /// @return 
    ///   return value of bralizan real stored in mfValue variable & brazilan real will be return
    float australianDollarBrazilanReal(float fNo) {
        mfValue = fNo * 3.3243471;
        return mfValue;
    }

    /// This function converts bitcoin into indian rupee
    ///
    /// @param[in] fNo
    ///     value of bitcoin in fNo variable & bitcoin value to convert
    /// @return 
    ///   return value of indian rupee stored in mfValue variable & indian rupee will be return
    float bitcoinIndianRupee(float fNo) {
        mfValue = fNo * 5,475,123.52;
        return mfValue;
    }

    /// This function singapore dollar pound into mexican peso
    ///
    /// @param[in] fNo
    ///     value of singapore dollar in fNo variable & singapore dollar value to convert
    /// @return 
    ///   return value of mexican peso stored in mfValue variable & mexican peso will be return
    float singaporeDollarMexicanPeso(float fNo) {
        mfValue = fNo * 12.191175;
        return mfValue;
    }

    /// This function converts russian ruble into united dollar
    ///
    /// @param[in] fNo
    ///     value of russian ruble in fNo variable & russian ruble value to convert
    /// @return 
    ///   return value of united dollar stored in mfValue variable & united dollar will be return
    float russianRubleUnitedDollar(float fNo) {
        mfValue = fNo * 0.010712397;
        return mfValue;
    }

    /// This function converts swiss franc into euro
    ///
    /// @param[in] fNo
    ///     value of swiss franc  in fNo variable & swiss franc  value to convert
    /// @return 
    ///   return value of euro stored in mfValue variable & euro will be return
    float swissFrancEuro(float fNo) {
        mfValue = fNo * 0.010712397;
        return mfValue;
    }

    /// This function converts british pound sterling into south africa rand
    ///
    /// @param[in] fNo
    ///     value of british pound sterling  in fNo variable & british pound sterling  value to convert
    /// @return 
    ///   return value of south africa rand stored in mfValue variable & south africa rand will be return
    float britishPoundSterlingSouthAfricaRand(float fNo) {
        mfValue = fNo * 23.440272;
        return mfValue;
    }

    /// This function converts japanese yen into south korean won
    ///
    /// @param[in] fNo
    ///     value of japanese yen in fNo variable & japanese yen value to convert
    /// @return 
    ///   return value of south korean won stored in mfValue variable & south korean won will be return
    float japaneseYenSouthKoreanWon(float fNo) {
        mfValue = fNo * 8.9929386;
        return mfValue;
    }

    /// This function converts south korean won into indian rupee
    ///
    /// @param[in] fNo
    ///     value of south korean won in fNo variable & south korean won  value to convert
    /// @return 
    ///   return value of indian rupee stored in mfValue variable & indian rupee will be return
    float southKoreanWonIndianRupee(float fNo) {
        mfValue = fNo * 0.060298262;
        return mfValue;
    }

    /// This function converts swedish krona into thai bhat
    ///
    /// @param[in] fNo
    ///     value of swedish krona in fNo variable & swedish korna value to convert
    /// @return 
    ///   return value of thai bhat stored in mfValue variable & thai bhat will be return
    float swedishKronaThaiBaht(float fNo) {
        mfValue = fNo * 3.3839408;
        return mfValue;
    }

    /// This function converts indonesian rupiah into turkish lira
    ///
    /// @param[in] fNo
    ///     value of indonesian rupiah in fNo variable & indonesian rupiah value to convert
    /// @return 
    ///   return value of turkish lira stored in mfValue variable & turkish lira will be return
    float indonesianRupiahTurkishLira(float fNo) {
        mfValue = fNo * 0.0020139406;
        return mfValue;
    }

    /// This function converts egyptian pound into malaysan ringgit
    ///
    /// @param[in] fNo
    ///     value of egyptian pound in fNo variable & egyptian pound value to convert
    /// @return 
    ///   return value of malaysian ringgit stored in mfValue variable & malaysian ringgit will be return
    float egyptianPoundMalaysianRinggit(float fNo) {
        mfValue = fNo * 0.10037469;
        return mfValue;
    }

    /// This function converts bahraini dinar into cuban peso
    ///
    /// @param[in] fNo
    ///     value of bahraini dinar in fNo variable & bahraini dinar value to convert
    /// @return 
    ///   return value of cuban peso stored in mfValue variable & cuban peso will be return
    float bahrainiDinarCubanPeso(float fNo) {
       mfValue = fNo * 63.778598;
        return mfValue;
    }

    /// This function converts afghan afghani into guernesy pound
    ///
    /// @param[in] fNo
    ///     value of afghan afghani in fNo variable & afghan afghani value to convert
    /// @return 
    ///   return value of gurensey pound stored in mfValue variable & guernsey pound will be return
    float afghanAfghaniGuernseyPound(float fNo) {
        mfValue = fNo * 0.011240689;
        return mfValue;
    }

    /// This function converts british pound into romanian leu
    ///
    /// @param[in] fNo
    ///     value of british pound in fNo variable & british pound value to convert
    /// @return 
    ///   return value of romanian leu stored in mfValue variable & romanian leu will be return
    float britishPoundRomanianLeu(float fNo) {
        mfValue = fNo * 5.8195567;
        return mfValue;
    }

    /// This function converts norwegian krone into bulgarian lev
    ///
    /// @param[in] fNo
    ///     value of norwegian krone in fNo variable & norwegian krone value to convert
    /// @return 
    ///   return value of bulgarian lev stored in mfValue variable & bulgarian lev will be return
    float norwegianKroneBulgarianLev(float fNo) {
        mfValue = fNo * 0.16849891;
        return mfValue;
    }

    /// This function converts polish zolty into taiwan new dollar
    ///
    /// @param[in] fNo
    ///     value of polish zolty in fNo variable & polish zolty value to convert
    /// @return 
    ///   return value of taiwan new dollar stored in mfValue variable & taiwan new dollar will be return
    float polishZoltyTaiwanNewDollar(float fNo) {
        mfValue = fNo * 8.053549;
        return mfValue;
    }

    /// This function converts brazilian Rral into indian rupee
    /// @param[in] fNo
    ///     value of brazilian Rral in fNo variable & brazilian Rral value to convert
    /// @return 
    ///   return value of indian rupee stored in mfValue variable & indian rupee will be return
    float brazilianRralIndianRupee(float fNo) {
        mfValue = fNo * 16.309971;
        return mfValue;
    }

    /// This function converts australian dollar into israeli new shekels
    /// @param[in] fNo
    ///     value of austalian dollar in fNo variable & australian dollar value to convert
    /// @return 
    ///   return value of israelian new shekels stored in mfValue variable & israeli new shekels will be return
    float australianDollarIsraeliNewShekels(float fNo) {
        mfValue = fNo * 2.4181496;
        return mfValue;
    }

    /// This function converts hong kong dollar into danish korner
    /// @param[in] fNo
    ///     value of hong kong dollar in fNo variable & hong kong dollar value to convert
    /// @return 
    ///   return value of danish korner stored in mfValue variable & danish korner will be return
    float hongKongDollarDanishKorner(float fNo) {
        mfValue = fNo * 0.89392459;
        return mfValue;
    }
};

/// This function call the distance class
/// @param[in] dobj
///     pass parameter as a object of distance class
/// @return 
///   no return value available
void checkDistance(Distance dobj); /// function call

/// This function call the currencies class
/// @param[in] cobj
///     pass parameter as a object of currencies class
/// @return 
///   no return value available
void checkCurrencies(Currencies cobj); /// function call

