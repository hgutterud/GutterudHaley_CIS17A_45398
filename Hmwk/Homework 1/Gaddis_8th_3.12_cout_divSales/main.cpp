/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Haley Gutterud
 * Class: CIS-17A
 * Purpose: Write a cout statement so the variable divSales is displayed in a field of 8 spaces, in
fixed point notation, with a precision of 2 decimal places. The decimal point should
always be displayed.
 * Created on June 27, 2021, 3:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float divSales;
    
    cout << "Please enter the sales." << endl;
    cin >> divSales;
    cout << setw(12) << setprecision(4) << fixed << divSales << endl;

    return 0;
}

