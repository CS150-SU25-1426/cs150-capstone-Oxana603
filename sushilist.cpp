#include "sushilist.h"

void SushiList::addSushi (const Sushi& sushi) {
    list.push_back(sushi);
}

bool SushiList::removeSushi (const string& name) {
    for (int i = 0; i < list.size(); ++i) {
        if (list[i].getName() == name) {
            list.erase(list.begin() + i);
            return true;
        }
    }
    return false;
}

bool SushiList::operator==(const SushiList& other) const
{
	return list == other.list;
}

ostream& operator<<(ostream& os, const SushiList& s)
{
    for (int i = 0; i < s.list.size(); i++) {
        os << s.list[i] << "\n";
    }
	return os;
}