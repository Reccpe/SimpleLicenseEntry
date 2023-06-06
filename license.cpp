#include <iostream>

typedef std::string string;

int main(){
    string LicenseKey = "Example123";
    string licenseKeyCntrl;

    do
    {
        std::cout << "Please enter your License Key : ";
        std::cin >> licenseKeyCntrl; // we getting input cuz we need to control our licenseKeyCntrl string

    } while (licenseKeyCntrl != LicenseKey);
    
}