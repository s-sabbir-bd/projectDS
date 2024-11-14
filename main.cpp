#include <iostream>
#include <string>
using namespace std;
void shopInterFace();
void startInterFace();
void adminLogin();
bool checkForAdmin(string adminUserName, string adminPassword);
int main()
{
    startInterFace();
    return 0;
}
void shopInterFace()
{
    cout << "===================================================" << endl;
    cout << "||               MiHoYo Daily Goods              ||" << endl;
    cout << "||             Order Online Save time            ||" << endl;
    cout << "===================================================" << endl;
}
void startInterFace()
{
    int choice;
    shopInterFace();
    cout << "||               1. Admin login                  ||" << endl;
    cout << "||               2. Customer login               ||" << endl;
    cout << "||               3. Create account               ||" << endl;
    cout << "||               4. Exit                         ||" << endl;
    cout << "===================================================" << endl;
    cout << "      Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        adminLogin();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        return;
    default:
        shopInterFace();
        cout << "||                   Unknown Value               ||" << endl;
        cout << "===================================================" << endl
             << endl;
        startInterFace();
    }
}

bool checkForAdmin(string adminUserName, string adminPassword)
{
    if (adminUserName == "MiHoYo" || adminPassword == "hoyoverse2024")
    {
        return true;
    }
}

void adminLogin()
{
    string adminUserName, adminPassword;
    shopInterFace();
    cout << "admin-username: ";
    cin >> adminUserName;
    cout << "admin-password: ";
    cin >> adminPassword;

    bool adminCheck = checkForAdmin(adminUserName, adminPassword);
    if (!adminCheck)
    {
        shopInterFace();
        cout << "|| You have entered a wrong username or password ||" << endl;
        cout << "||              Please try again                 ||" << endl;
        cout << "===================================================" << endl;
        adminLogin();
    }
    else
    {
        cout << "You have successfully login as admin. For test" << endl;
        cout << "Enter back to \"back\" to login page: ";
        string back;
        cin >> back;
        while (back != "back")
        {
            cout << "Enter again: ";
            cin >> back;
        }
        startInterFace();
    }
}