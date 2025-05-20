#include <iostream>
#include <stack> // for list of ids
#include "USBConnection.h"
using namespace std;

int main() {
    int max_usb_ports = 10;
    USBConnection* c[max_usb_ports];
    
    for (int i = 0; i < max_usb_ports; i++) {
        c[i] = USBConnection::create();
        if (c[i] != nullptr) {
            cout << "USB connection with ID = " << c[i]->getID() << " was created\n";
        } else {
            cout << "No more USB ports available\n";
        }
    }

    // Let's unplug one USB connection (ID 2 assumed to be at index 1)
    delete c[1];  // Destructor will return ID to stack

    // Try creating another connection
    USBConnection* a = USBConnection::create();
    if (a != nullptr) {
        cout << "USB connection with ID = " << a->getID() << " was created\n";
    } else {
        cout << "No more USB ports available\n";
    }

    // Clean up remaining dynamic allocations
    for (int i = 0; i < max_usb_ports; ++i) {
        if (c[i] != nullptr) delete c[i];
    }
    delete a;

    return 0;
}
