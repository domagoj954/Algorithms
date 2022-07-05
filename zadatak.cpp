//učitati 3 broja i zbrojiti njihove decimalne dijelove ukoliko su parni
#include<iostream>

int main(){
    double br1, br2, br3;
    int d1, d2, d3;
    int zbroj = 0;

    std::cout << "Unesite brojeve: ";
    std::cin >> br1 >> br2 >> br3;

    d1 = (int)(br1 * 10) % 10;
    d2 = (int)(br2 * 10) % 10;
    d3 = (int)(br3 * 10) % 10;

    std::cout << d1 << " " << d2 << " " << d3 << std::endl;

    if(d1 % 2 == 0) {
        zbroj += d1;
    }
    if(d2 % 2 == 0) {
        zbroj += d2;
    }

    if(d3 % 2 == 0) {
        zbroj += d3;
    }


    std::cout << zbroj << std::endl;


}