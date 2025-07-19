#include <iostream>
#include <string>

#ifndef SUSHI_H
#define SUSHI_H

using namespace std;

class Sushi {
    private:
    string name;
    int amount;
    double price;

    public:
    Sushi(const string name, int amount, double price);
    string getName() const;
    int getAmount() const;
    double getPrice() const;

    bool operator==(const Sushi& other) const;

	friend ostream& operator<<(ostream& os, const Sushi& Sushi);
};

#endif
