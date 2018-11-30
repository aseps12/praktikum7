#include <iostream>

using namespace std;
int total;
void hitung (){
total*= 3;
}
int main()
{
    total=2;
    total++;
    hitung();
    cout << total << endl;
    return 0;
}
