#include "sushi.h"

Sushi::Sushi (const string name, int amount, double price) 
: name(name), amount(amount), price(price) {}

string Sushi::getName() const {
    return name;
}

int Sushi::getAmount() const {
    return amount;
}

double Sushi::getPrice() const {
    return price;
}


bool Sushi::operator==(const Sushi& other) const
{
	return name == other.name;
}

ostream& operator<<(ostream& os, const Sushi& sushi)
{
    os << "Sushi Name: " << sushi.name << endl;
    os << "Amount of Sushi: " << sushi.amount << endl;
    os << "Price: $" << sushi.price << endl;
	return os;
}

