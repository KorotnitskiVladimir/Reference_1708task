#pragma once
#include <iostream>
using namespace std;

class Reference
{
private:
    string name;
    string owner;
    string tel;
    string address;
    string activity;
public:
    Reference();
    Reference(const char* n, const char* o, const char* t, const char* a, const char* act);
    void setName(const char* n);
    void setOwner(const char* o);
    void setTel(const char* t);
    void setAdress(const char* a);
    void setActivity(const char* a);
    string getName() const;
    string getOwner() const;
    string getTel() const;
    string getAddress() const;
    string getActivity() const;
    void print() const;
    void nameSearch(const char* n) const;
    void ownerSearch(const char* o) const;
    void telSearch(const char* t) const;
    void activitySearch(const char* a) const;
};
