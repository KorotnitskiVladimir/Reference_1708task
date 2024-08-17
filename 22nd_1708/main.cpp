#include <iostream>
#include <fstream>
#include "Reference.h"
using namespace std;

int main()
{
   
    Reference c("Clever Team", "Tkachenko", "+380679322732", "Marazliyevska, 1/20","Freight forwarding");
    Reference h("Hilldome", "Amelin", "+380503158828", "Lidersovskiy boulevard, 5", "Freight forwarding");
    Reference v("VGDC", "Korotnitski", "+380675565924", "Palubnaya, 9", "Gamedev");
    Reference arr[] = {c, h, v};
    for (int i=0; i<3; i++)
    {
        arr[i].nameSearch("VGDC");
        arr[i].ownerSearch("Tkachenko");
        arr[i].telSearch("+380503158828");
        arr[i].activitySearch("Freight forwarding");
    }

    ofstream out("List.txt");
    if (out.is_open())
    {
        for (int i=0; i<2; i++)
        {
            out << "Company: " << arr[i].getName() << endl;
            out << "Owner: " << arr[i].getOwner() << endl;
            out << "Tel: " << arr[i].getTel() << endl;
            out << "Address: " << arr[i].getAddress() << endl;
            out << "Activity: " << arr[i].getActivity() << endl << endl;
        }
        out.close();
    }
    else
        cout << "not able to open file" << endl;

    out.open("List.txt", ios::app);
    if (out.is_open())
    {
        out << "Company: " << arr[2].getName() << endl;
        out << "Owner: " << arr[2].getOwner() << endl;
        out << "Tel: " << arr[2].getTel() << endl;
        out << "Address: " << arr[2].getAddress() << endl;
        out << "Activity: " << arr[2].getActivity() << endl << endl;
        out.close();
    }
    else
        cout << "not able to open file" << endl;
    
    return 0;
}