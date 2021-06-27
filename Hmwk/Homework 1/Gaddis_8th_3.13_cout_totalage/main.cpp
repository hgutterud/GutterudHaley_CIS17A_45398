/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Haley Gutterud
 * Class: CIS-17A
 * Purpose: Write a cout statement so the variable totalAge is displayed in a field of 12 spaces,
in fixed point notation, with a precision of 4 decimal places.
 * Created on June 27, 2021, 3:37 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float totalAge;
    
    totalAge = 3563.956789;
    cout << setw(12) << fixed << setprecision(4) << totalAge << endl;

    return 0;
}

