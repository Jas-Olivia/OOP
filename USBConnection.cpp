// USBConnection.cpp
#include "USBConnection.h"

// Initialize the static stack with available IDs
std::stack<int> USBConnection::ids({3, 2, 1});

// Static method to create a new USBConnection object
USBConnection* USBConnection::create() {
    if (ids.empty()) {
        return nullptr;  // No available USB ports
    }
    int newID = ids.top();
    ids.pop();
    return new USBConnection(newID);
}

// Destructor: Returns the ID back to the stack
USBConnection::~USBConnection() {
    ids.push(ID);
}
