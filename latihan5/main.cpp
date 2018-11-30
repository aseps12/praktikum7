#include <iostream>

using namespace std;
void hitung(){
    static int total = 0;
    total++;
    cout<< "Nilai Total = "<< total<<endl;
}
int main()
{
    hitung();
    hitung();
    hitung();
    hitung();
    return 0;
}
