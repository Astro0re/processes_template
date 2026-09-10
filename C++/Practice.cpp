#include <iostream>

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