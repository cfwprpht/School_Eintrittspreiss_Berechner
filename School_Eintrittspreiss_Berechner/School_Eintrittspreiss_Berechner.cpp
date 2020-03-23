//
// This Code belongs to Harald Swoboda a Student of HTL WienWest Class 1BBIF
// This work was done for AINF Prof Jaich.
//

#include <iostream>
using namespace std;

int main() {
    unsigned int besucherAlter = 0;
    string empty = "";

    cout << "\n\n Bitte geben Sie das Alter des Besuchers ein:\n ";
    cin >> besucherAlter;

    system("cls");
    if (besucherAlter <= 18) cout << "\n\n Der Eintrittspreiss betraegt 20,- Euro\n\n ";
    else cout << "\n\n Der Eintrittspreiss betraegt 40,- Euro\n\n ";

    cout << "Druecken Sie einen Buchstaben oder eine Zahl und dan enter, um fortzufahren...\n ";
    cin >> empty;
    return 0;
}
