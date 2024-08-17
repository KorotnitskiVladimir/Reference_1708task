#include "Reference.h"

Reference::Reference()
{
    name = owner = tel = address = activity = "";
}

Reference::Reference(const char* n, const char* o, const char* t, const char* a, const char* act)
{
    try
    {
        if (strlen(n)>0 && strlen(o)>0 && strlen(t)>0 && strlen(a)>0 && strlen(act)>0)
        {
            name = n;
            owner = o;
            tel = t;
            address = a;
            activity = act;
        }
        else
            throw "wrong input";
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
}

void Reference::setName(const char* n)
{
    if (strlen(n)>0)
        name = n;
}

void Reference::setOwner(const char* o)
{
    if (strlen(o)>0)
        owner = o;
}

void Reference::setTel(const char* t)
{
    if (strlen(t)>0)
        tel = t;
}

void Reference::setAdress(const char* a)
{
    if (strlen(a)>0)
        address = a;
}

void Reference::setActivity(const char* a)
{
    if (strlen(a)>0)
        activity = a;
}

string Reference::getName() const
{
    return name;
}

string Reference::getOwner() const
{
    return owner;
}

string Reference::getTel() const
{
    return tel;
}

string Reference::getAddress() const
{
    return address;
}

string Reference::getActivity() const
{
    return activity;
}

void Reference::print() const
{
    cout << "Company: " << name << endl;
    cout << "Owner: " << owner << endl;
    cout << "Tel: " << tel << endl;
    cout << "Address: " << address << endl;
    cout << "Activity: " << activity << endl;
}

void Reference::nameSearch(const char* n) const
{
    if (n == name)
    {
        cout << "match found: " << endl;
        print();
        cout << endl;
    }
}

void Reference::ownerSearch(const char* o) const
{
    if (o == owner)
    {
        cout << "match found: " << endl;
        print();
        cout << endl;
    }
}

void Reference::telSearch(const char* t) const
{
    if (t == tel)
    {
        cout << "match found: " << endl;
        print();
        cout << endl;
    }
}

void Reference::activitySearch(const char* a) const
{
    if (a == activity)
    {
        cout << "match found: " << endl;
        print();
        cout << endl;
    }
}
