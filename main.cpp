#include <iostream>
#include "sushi.h"
#include "sushilist.h" 

using namespace std; 

int main() { 
    SushiList menu;

    Sushi sushi_1("Mango Roll", 6, 5.99);
    Sushi sushi_2("Avocado Salmon Roll", 8, 8.99);
    Sushi sushi_3("Baked Shrimp Roll", 2, 8.99);
    Sushi sushi_4("California Roll", 8, 9.99);
    Sushi sushi_5("Tartar Salmon Roll", 4, 10.99);
    Sushi sushi_6("Baked Shrimp Roll", 2, 8.99);

    menu.addSushi(sushi_1);
    menu.addSushi(sushi_2);
    menu.addSushi(sushi_3);
    menu.addSushi(sushi_4);
    menu.addSushi(sushi_5);
    menu.addSushi(sushi_6);

 if (sushi_1 == sushi_5) {
    cout << sushi_1.getName() << " and " << sushi_5.getName() << " are the same" << endl;
} else {
    cout << sushi_1.getName() << " and " << sushi_5.getName() << " are not the same" << endl;
}

if (sushi_2 == sushi_4) {
    cout << sushi_2.getName() << " and " << sushi_4.getName() << " are the same" << endl;
} else {
    cout << sushi_2.getName() << " and " << sushi_4.getName() << " are not the same" << endl;
}

if (sushi_3 == sushi_6) {
    cout << sushi_3.getName() << " and " << sushi_6.getName() << " are the same" << endl;
} else {
    cout << sushi_3.getName() << " and " << sushi_6.getName() << " are not the same" << endl;
}

cout << "\n\n";

    int choice = 0;
    do {
        cout << "Please make a choice from the following options:\n";
        cout << "1) Add a new sushi to menu\n";
        cout << "2) Remove sushi from menu\n";
        cout << "3) Display all sushi in menu\n";
        cout << "4) Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice;

        cin.ignore(); 

        if (choice == 1) {
            string name;
            int amount;
            double price;

            cout << "Enter sushi name: ";
            getline(cin, name);
            cout << "Enter amount: ";
            cin >> amount;
            cout << "Enter price: $";
            cin >> price;
            cin.ignore(); 

            menu.addSushi(Sushi(name, amount, price));
            cout << "Sushi added!\n";

        } else if (choice == 2) {
            string name;
            cout << "Enter sushi name to remove: ";
            getline(cin, name);

            if (menu.removeSushi(name)) {
                cout << "Sushi removed.\n";
            } else {
                cout << "Sushi not found.\n";
            }

        } else if (choice == 3) {
            cout << "\n---- Menu ----\n";
            cout << menu;
        }

    } while (choice != 4); 
    return EXIT_SUCCESS;
}
