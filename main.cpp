#include <iostream>
#include "sushi.h"

int main() { 
    Sushi sushi_1 ("Mango Roll", 6, 5.99);
    Sushi sushi_2 ("Avocado Salmon Roll", 8, 8.99);
    Sushi sushi_3 ("Baked Shrimp Roll", 2, 8.99);
    Sushi sushi_4 ("California Roll", 8, 9.99);
    Sushi sushi_5 ("Tartar Salmon Roll", 4, 10.99);
    Sushi sushi_6 ("Baked Shrimp Roll", 2, 8.99);

    cout << "-------- Menu --------" << endl;
    cout << "Sushi #1: " << sushi_1 << endl;
    cout << "Sushi #2: " << sushi_2 << endl;
    cout << "Sushi #3: " << sushi_3 << endl;
    cout << "Sushi #4: " << sushi_4 << endl;
    cout << "Sushi #5: " << sushi_5 << endl;
    cout << "Sushi #6: " << sushi_6 << endl;


    if (sushi_1 == sushi_5) {
      cout << "Sushi #1 and #5 are same" << endl;
    } else {
      cout << "Sushi #1 and #5 are not same" << endl;
    }
    
    if (sushi_2 == sushi_4) {
      cout << "Sushi #2 and #4 are same" << endl;
    } else {
      cout << "Sushi #2 and #4 are not same" << endl;
    }

    if (sushi_3 == sushi_6) {
      cout << "Sushi #3 and #6 are same" << endl;
    } else {
      cout << "Sushi #3 and #6 are not same" << endl;
    }
return 0;
}