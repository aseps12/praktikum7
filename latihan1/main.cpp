#include <iostream>

using namespace std;
void tukar(int &a, int &b){
    a=10;
    b=20;
}
int main()
{
    int a,b;
    a=20;
    b=10;
    cout << "Nilai a = " <<a<< endl;
    cout << "Nilai b = " <<b<< endl;
    cout << "SETELAH DITUKAR"<< endl;
    tukar(a,b);
    cout << "Nilai a = " <<a<< endl;
    cout << "Nilai b = " <<b<< endl;
    return 0;
}
