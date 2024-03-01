// Final Discreta 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#pragma warning(push, 0)
#pragma warning(pop)
using namespace std;

enum  VendingMachineState {
    Select, quantity, calculate, update
};

enum BRAND {
    Cola = 1, Sprite = 2, Arizona = 3, Gatorade = 4
};

struct Student {
    string name;
    int points;

};
struct soda {
    BRAND brandname;
    int inventory;
    int prices;

};
int main()
{
    VendingMachineState currentState= Select;
    soda vendingMachine[4];
    vendingMachine[0].brandname = Cola;
    vendingMachine[0].inventory = 10;
    vendingMachine[0].prices = 100;
    vendingMachine[1].brandname = Sprite;
    vendingMachine[1].inventory = 15;
    vendingMachine[1].prices = 150;
    vendingMachine[2].brandname = Arizona;
    vendingMachine[2].inventory = 10;
    vendingMachine[2].prices = 200;
    vendingMachine[3].brandname = Gatorade;
    vendingMachine[3].inventory = 10;
    vendingMachine[3].prices = 250;

    soda selectedbev;
    Student Alex;
    Alex.points = 10000000;

    switch (currentState) {
    case Select:
        cout << "<<--Current Status-->>" << endl;
        cout << "[Vending Machine]" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << vendingMachine[i].brandname << " has " << vendingMachine[i].inventory << " drinks, and more " << endl;

        }
        cout << "[student]" << endl;
        cout << Alex.name << " has " << Alex.points << "  points total  " << endl;
        cout << "<<--End Status-->>" << endl << endl;
        cout << "Please select a drink from the following available option:" << endl;
        cout << "cola = 1\nSprite= 2\nArizone= 3\nGatorade=4" << endl;
        int(selectedDrink);
        cin >> selectedDrink;
        switch (selectedDrink) {
        case Cola:
            cout << "Selection : Cola";
            selectedbev.brandname = Cola;
            currentState = quantity;
            break;
        case Sprite:
            cout << "selection:Sprite";
            selectedbev.brandname = Sprite;
            currentState = quantity;
            break;
        case Arizona:
            cout << "Selection:Arizona";
            selectedbev.brandname = Arizona;
            currentState = quantity;
            break;
        case Gatorade:
            cout << "Selection:Gatorade" << endl;
            selectedbev.brandname = Gatorade;
            currentState = quantity;
            break;
        default:
            cout << "Invalid drink selected! Please try again!";
            currentState = Select;
            break;

        }

        break;
    case quantity:
        cout << "How many would you like?" << endl;
        int orderQuantity;
        cin >> orderQuantity;
        switch (selectedDrink) {
        case Cola:
            if (orderQuantity<0 || orderQuantity>vendingMachine[0].inventory) {
                cout << "Not Enough in Stock" << endl;
                currentState = Select;
                cout << endl << endl;
            }
            break;
        case Sprite:
            if (orderQuantity<0 || orderQuantity>vendingMachine[0].inventory) {
                cout << "Not Enough in Stock" << endl;
                currentState = Select;
                cout << endl << endl;
            }

            break;
        case Arizona:
            if (orderQuantity<0 || orderQuantity>vendingMachine[0].inventory) {
                cout << "Not Enough in Stock" << endl;
                currentState = Select;
                cout << endl << endl;
            }
            break;
        case Gatorade:
            if (orderQuantity<0 || orderQuantity>vendingMachine[0].inventory) {
                cout << "Not Enough in Stock" << endl;
                currentState = Select;
                cout << endl << endl;
            }
            break;
        default:
            cout << "Invalid amount recieved";
            currentState = Select;
            break;
        }

        break;
    case calculate:
        break;
    case update:
        break;
    default:
        cout << "Error has occured, Please try again";
        break;

    }


    return 0;

}