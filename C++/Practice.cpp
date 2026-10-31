#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int a = 2;
    int b = 6;

    //Code to swap values (introduce another variable and shuffle values among them)
    int c = b;
    int b = a;
    int a = c;

    std :: cout << a, b;
    return 0;
}

int mathExp(){
    int x = 10;
    int y = 5;

    int exp = (x + 10) / (3 * y);

    std :: cout << exp;
    return 0;
}


int tax(){
    double sales = 95000;

    double state_t = sales * (4/100);
    double county_t = sales * (2/100);
    double total_t = state_t + county_t;

    cout << "Stat Taxe = " << state_t << endl
         << "County Taxe = " << county_t << endl
         << "Total Taxe = " << total_t << endl;

    return 0;
}

int temp() {
    cout << "Temprature in Farenheit: ";
    double F ;
    cin >> F ;
    double conv = (F - 32) / 1.8;
    cout << "Temprature in Celcius:" << conv << endl ;
    return 0;
}

// List maker 

int list(){
    cout << "What's cooking good looking, make a list of goals ";
    string goals;
    cin >> goals;
    cout << "Good Looking Goals:" << endl <<goals ;
    return 0;
}

// Random number generator

int RandNum(){
    int srand(time(0)); 
    int num_1 = rand();
    cout << "Random number of the moment is:" << num_1;
    return 0; 
}