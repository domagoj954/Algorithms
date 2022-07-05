#include<iostream>
#include<chrono>
#include<vector>

using namespace std;
using namespace std::chrono;
int main() {
 auto t1 = high_resolution_clock::now();
 long long s = 0;
 for (int i = 0; i < 100000000; i++){
 s = s+1;
 }
 auto t2 = high_resolution_clock::now();
 auto ms = duration_cast<milliseconds>(t2 - t1);
 long long trajanje = ms.count();
 cout << "Trajanje:" << trajanje <<"ms"<<endl;
}