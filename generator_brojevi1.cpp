#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
 
int main() {
    int n, random;
    cout << "Enter number of random numbers\n";
    cin >> n;
  
    // print n random numbers using rand function
    cout << "Random numbers between 0 to 1000\n";
    while(n--){
        random = rand()%10000 + 1;
        cout << random << ", ";
    }
     
    return 0;
}
