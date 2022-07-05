/*Napišite program koji traži da sa tastature unesemo podatke o dva vremenska trenutka, u satima,
minutama i sekundama, a koji računa i ispisuje vrijeme koje je proteklo između ta dva vremenska
trenutka, također u satima, minutama i sekundama. Pretpostaviti da je drugi vremenski trenuta*/

#include<iostream>

int main(){
    int t1;
    int t2;
    int t3;
    
    int h1, m1, s1;
    int h2, m2, s2;
    int h3, m3, s3;

    std::cout << "Unesite prvo vrijeme: ";
    std::cin >> h1 >> m1 >> s1;

    std::cout << "Unesite drugo vrijeme: ";
    std::cin >> h2 >> m2 >> s2;

    t1 = h1 * 3600 + m1 * 60 + s1;
    t2 = h2 * 3600 + m2 * 60 + s2;
    t3 = t2 - t1;

    h3 = t3 / 3600;
    m3 = (t3 % 3600) / 60;
    s3 = (t3 % 3600) % 60;

    std::cout << "Proteklo vrijeme je: " << h3 << "h " << m3 << "m " << s3 << "s ";

}