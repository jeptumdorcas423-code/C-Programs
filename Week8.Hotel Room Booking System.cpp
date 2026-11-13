#include <iostream>
using namespace std;

class RoomBooking {


    string guestName;
    int roomNumber;
    int daysBooked;

public:

    RoomBooking(string name, int room, int days) {

        guestName = name;
        roomNumber = room;
        daysBooked = days;

        cout << "Room booking confirmed" << endl;
    }

    
    void displayBooking() {

        cout << "\n--- ROOM BOOKING DETAILS ---" << endl;

        cout << "Guest Name: " << guestName << endl;

        cout << "Room Number: " << roomNumber << endl;

        cout << "Number of Days Booked: " << daysBooked << endl;
    }

   
    ~RoomBooking() {

        cout << "\nBooking ended, room released" << endl;
    }

};

int main() {

 
    RoomBooking booking1("Dorcas", 205, 3);

    booking1.displayBooking();

    return 0;
}
