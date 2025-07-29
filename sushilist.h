#ifndef SUSHILIST_H
#define SUSHILIST_H

#include <vector>
#include <iostream>
#include "sushi.h"

using namespace std;

class SushiList {
private:
    vector<Sushi> list;

public:
    void addSushi(const Sushi& sushi);
    bool removeSushi(const string& name);
    bool operator==(const SushiList& other) const;

    friend ostream& operator<<(ostream& os, const SushiList& s);
};

#endif