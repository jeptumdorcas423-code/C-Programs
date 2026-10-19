#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    double revenue[7];
    double totalRevenue = 0;
    double averageRevenue;

    cout << "WEEKLY REVENUE TRACKER" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];

        totalRevenue = totalRevenue + revenue[i];
    }

    averageRevenue = totalRevenue / 7;

    cout << "\nTotal Weekly Revenue: " << totalRevenue << endl;
    cout << "Average Daily Revenue: " << averageRevenue << endl;


   
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0));

    cout << "\nROOM OCCUPANCY FOR ONE BRANCH" << endl;

    for (int i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;

            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        cout << "Floor " << i + 1
             << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
    }


    int chain[3][5][10];
    int totalOccupied = 0;

    cout << "\nROOM OCCUPANCY ACROSS THREE BRANCHES" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2;

                if (chain[i][j][k] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    cout << "Total occupied rooms across all branches: "
         << totalOccupied << endl;

    return 0;
}

