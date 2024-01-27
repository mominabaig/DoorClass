#include <iostream>
using namespace std;

class Door {
private:
    bool isOpen;

public:
    Door() : isOpen(false) {}

    void open() {
        isOpen = true;
        cout << "Door is open." << endl;
    }

    void close() {
        isOpen = false;
        cout << "Door is closed." << endl;
    }

    bool isOpenStatus() {
        return isOpen;
    }
    void lockDoor() {
        if (!isOpen) {
            isLocked = true;
            cout << "Door is locked." << endl;
        }
        else {
            cout << "Cannot lock. The door is open." << endl;
        }
    }

};

int main() {
    Door frontDoor;
    frontDoor.open();
    cout << "Is the door open? " << (frontDoor.isOpenStatus() ? "Yes" : "No") << endl;
    frontDoor.close();
    cout << "Is the door open? " << (frontDoor.isOpenStatus() ? "Yes" : "No") << endl;

    return 0;
}