/*********************************************************************
File name: movie_simulation_part1.cpp
Author: Samrakshan Rijal(oou11)
Date: 23/02/2024

Purpose:
  The purpose of this program is to simulate various aspects of a movie theater. It includes three main parts:
  1. Theater Processing through User input: It prompts the user to input information about the theater, such as name, number of screens, and number of parking spots per screen, and then displays this information.
  2. Debugging Now Showing: It displays the currently showing movies after fixing some code errors.
  3. Pricing Simulation: It simulates pricing scenarios for movie tickets and calculates the price difference between different scenarios. It includes calculations for various ticket types, tax rates, and membership fees.
    
Command Parameters:
    The main() function does not take any command-line parameters.
Input:
    User input for theater information, including name, number of screens, and number of parking spots per screen.
Results:
    1. Display of theater information entered by the user.
    2. Display of corrected movie titles under "Now Showing" section.
    3. Pricing simulations for different ticket scenarios, including before and after tax prices, along with the price difference between scenarios.
    4. Output messages indicating the start and end of simulations.
Notes:
    1. The program contains comments to describe each section of code and its purpose.
    2. The program uses C++ standard libraries such as <iostream>, <iomanip>, <string>, and <cmath>.
    3. It utilizes a struct named "Theater" to store theater information.
    4. Various pricing constants are defined and used for simulations.
    5. Fixed precision (2 decimal places) is used for displaying monetary values.
    6. A break message is defined and used to separate different sections of output.
    7. The program outputs messages to indicate the start and end of the simulation process.
*********************************************************************/
#include <iostream>
#include <iomanip>
#include<string>
#include <cmath>

using namespace std;

struct Threater{
    string szName;
    int iNumOfScreens, iNumOfParking;
    
};

int main()
{
    
    string szBreakMessage = "*****************************\n";
    cout << "Starting movie theater simulation\n" << endl;
    
/*PART 1: Theater Processing through User input*/
     //Get user input and print theater information
    Threater threater;
    cout<<"Enter threater name: ";
    getline(cin, threater.szName);
    cout<<"Enter the number of screens: ";cin>>threater.iNumOfScreens;
    cout<<"Enter the parking spots per screen: ";cin>>threater.iNumOfParking;

    cout<<"\nThreater Information\n";
    cout<<szBreakMessage;
    cout<<"Name: "<<threater.szName<<endl;
    cout<<"Screens: "<<threater.iNumOfScreens<<endl;
    cout<<"Total Parking spots: "<<threater.iNumOfScreens*threater.iNumOfParking<<endl;
    cout<<szBreakMessage;
    

/*PART 2: Debugging Now Showing*/
    // TODO: Fix code errors below
    string szMovie1 = "Hatchback to the Future";
    string szMovie2 = "2001 A Honda Odyssey";
    string szMovie3 = "Guardians of the Ford Galaxy";    
    cout << "\nNow Showing" << endl;
    cout << szBreakMessage;
    cout << szMovie1 << endl;
    cout << szMovie2<<endl;
    cout << szMovie3<< endl;
    cout << szBreakMessage;
    
/*PART 3: Pricing Simulation*/
    
    // Create the pricing categories
    const double dAdultRate = 10.99 , dSeniorRate = 8.99 , dChildRate = 6.99 , dMemberRate = 5.99 , dMembershipFee = 6.00 , dTaxRate = 8;
    double dTotalPriceBeforeTax[2] = {0,0},dTotalPriceAfterTax[2] = {0,0}, dPriceDiff = 0;
    
    // Run simulations
    cout << fixed << setprecision(2);
    cout << "\nCalculating Price Scenario 1" << endl;
    cout << szBreakMessage;
    // TODO: Do Pricing Simulation 1
    dTotalPriceBeforeTax[0] = dAdultRate + dChildRate;
    dTotalPriceAfterTax[0] = dTotalPriceBeforeTax[0] + (dTaxRate/100)*dTotalPriceBeforeTax[0];
    cout<<"1 Adult, 1 Child ticket before tax: $"<<dTotalPriceBeforeTax[0]<<endl;
    cout<<"1 Adult, 1 Child ticket after tax: $"<<dTotalPriceAfterTax[0]<<endl;
    
    dTotalPriceBeforeTax[1] = 2*(dMemberRate + dMembershipFee);
    dTotalPriceAfterTax[1] = dTotalPriceBeforeTax[1] + (dTaxRate/100)*dTotalPriceBeforeTax[1];
    cout<<"\n2 Member tickets before tax: $"<<dTotalPriceBeforeTax[1]<<endl;
    cout<<"2 Member tickets after tax: $"<<dTotalPriceAfterTax[1]<<endl;

    dPriceDiff = abs(dTotalPriceAfterTax[1] - dTotalPriceAfterTax[0]);
    cout<<"\nPrice difference: $"<<dPriceDiff<<endl;
    cout << szBreakMessage;
    
    cout << "\nCalculating Price Scenario 2" << endl;
    cout << szBreakMessage;
    // TODO: Do Pricing Simulation 2
    dTotalPriceBeforeTax[0] = 2*dAdultRate;
    dTotalPriceAfterTax[0] = dTotalPriceBeforeTax[0] + (dTaxRate/100)*dTotalPriceBeforeTax[0];
    cout<<"2 Adult tickets before tax: $"<<dTotalPriceBeforeTax[0]<<endl;
    cout<<"2 Adult tickets after tax: $"<<dTotalPriceAfterTax[0]<<endl;
    cout<<"\n2 Member tickets before tax: $"<<dTotalPriceBeforeTax[1]<<endl;
    cout<<"2 Member tickets after tax: $"<<dTotalPriceAfterTax[1]<<endl;

    dPriceDiff = abs(dTotalPriceAfterTax[1] - dTotalPriceAfterTax[0]);
    cout<<"\nPrice difference: $"<<dPriceDiff<<endl;
    cout << szBreakMessage;

    cout << "\nCalculating Price Scenario 3" << endl;
    cout << szBreakMessage;
    // TODO: Do Pricing Simulation 3
    dTotalPriceBeforeTax[0] = dAdultRate + dSeniorRate + dChildRate;
    dTotalPriceAfterTax[0] = dTotalPriceBeforeTax[0] + (dTaxRate/100)*dTotalPriceBeforeTax[0];
    cout<<"1 Adult, 1 Senior, and 1 Child ticket before tax: $"<<dTotalPriceBeforeTax[0]<<endl;
    cout<<"1 Adult, 1 Senior, and 1 Child ticket after tax: $"<<dTotalPriceAfterTax[0]<<endl;
    
    dTotalPriceBeforeTax[1] = 3*(dMemberRate + dMembershipFee);
    dTotalPriceAfterTax[1] = dTotalPriceBeforeTax[1] + (dTaxRate/100)*dTotalPriceBeforeTax[1];
    cout<<"\n3 Member tickets before tax: $"<<dTotalPriceBeforeTax[1]<<endl;
    cout<<"3 Member tickets after tax: $"<<dTotalPriceAfterTax[1]<<endl;

    dPriceDiff = abs(dTotalPriceAfterTax[1] - dTotalPriceAfterTax[0]);
    cout<<"\nPrice difference: $"<<dPriceDiff<<endl;
    cout << szBreakMessage;
    
    cout << "\nFinished simulation" << endl;
    return 0;
}
