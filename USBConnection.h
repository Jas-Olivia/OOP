// USBConnection.h
#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
#include <memory> // for std::unique_ptr if needed

class USBConnection {
private:
    int ID;
    USBConnection(int id) : ID(id) {}

public:
    ~USBConnection();  // Destructor declaration

    // Static method to create a new USBConnection object
    static USBConnection* create();

    // Optional: Getter for ID (for testing or external use)
    int getID() const { return ID; }

private:
    // Stack of available IDs (1 to 3)
    static std::stack<int> ids;
};

#endif // USBCONNECTION_H
