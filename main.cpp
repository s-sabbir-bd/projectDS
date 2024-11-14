#include <iostream>
using namespace std;
void shopInterFace();
void startInterFace();
int main()
{
}
void shopInterFace()
{
    cout << "====================================" << endl;
    cout << "||         MiHoYo Daily Goods     ||" << endl;
    cout << "||     Order Online Save time     ||" << endl;
    cout << "====================================" << endl;
}
void startInterFace()
{
    int choice;
    shopInterFace();
    cout << "====================================" << endl;
    cout << "||        1. Admin login          ||" << endl;
    cout << "||        2. Customer login       ||" << endl;
    cout << "||        3. Create account       ||" << endl;
    cout << "====================================" << endl;
    cout << "      Enter your choice: " << endl;
    cin >> choice;
}
