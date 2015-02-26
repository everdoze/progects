#include <string>
#include "node.h"
#include <iostream>
#include <cstdlib>
using namespace std;

     bool node::add(string lastname, string surname, string name, string address, string telephone)
     {
        bool _head;
        element *temp = new element();
        if (this->finD(lastname, surname, name, address, telephone, _head) != nullptr)
            return false;
        else
            if (temp)
                {
                    temp->Lastname = lastname;
                    temp->Surname = surname;
                    temp->Name = name;
                    temp->Address = address;
                    temp->Telephone = telephone;
                    temp->next = head;
                    head = temp;
                    return true;
                }
     }
     bool node::edit(string lastname, string surname, string name, string address, string telephone, int _count)
     {
        bool _head;
        element* newel;
        if (finD(lastname, surname, name, address, telephone, _head) == nullptr)
            return false;
        else
            {
                if (_count > 1)
                {
                newel = finD(lastname,surname,name,address,telephone,_head);
                system("clear");
                cout<<"Ok! I found your element!" << endl;
                cout<<"Enter new information." << endl;
                cout<<"Lastname: "; cin>>newel->next->Lastname; cout<<endl;
                cout<<"Surname: "; cin>>newel->next->Surname; cout<<endl;
                cout<<"Name: "; cin>>newel->next->Name; cout<<endl;
                cout<<"Address: "; cin>>newel->next->Address; cout<<endl;
                cout<<"Telephone: "; cin>>newel->next->Telephone; cout<<endl;
                system("clear");
                return true;
                }
                else
                {
                newel = finD(lastname,surname,name,address,telephone,_head);
                system("clear");
                cout<<"Ok! I found your element!" << endl;
                cout<<"Enter new information." << endl;
                cout<<"Lastname: "; cin>>newel->Lastname; cout<<endl;
                cout<<"Surname: "; cin>>newel->Surname; cout<<endl;
                cout<<"Name: "; cin>>newel->Name; cout<<endl;
                cout<<"Address: "; cin>>newel->Address; cout<<endl;
                cout<<"Telephone: "; cin>>newel->Telephone; cout<<endl;
                system("clear");
                return true;
                }
            }

     }
     bool node::reMove(string lastname, string surname, string name, string address, string telephone, int _count)
    {
        bool _head;
       element* newel = finD(lastname,surname,name,address,telephone, _head);
        if (newel == nullptr)
            return false;
        else
            {
               if (_count > 1)
               {
               element *temp;
               temp = newel->next;
               newel->next = temp->next;
               delete temp;
               return true;
               }
               else
               {
                if (_head == true)
               {
                  head = newel->next;
                  delete newel;
               }
               else
               {
                head = nullptr;
                delete newel;
                return true;
               }
               }
            }

     }
     element* node::finD(string lastname, string surname, string name, string address, string telephone, bool &_head)
     {
        element* temp = head;
        bool loop;
        loop = true;
        if (temp)
            while(loop && temp)
            {
                if ((temp->Lastname == lastname) && (temp->Address == address) && (temp->Name == name) && (temp->Telephone == telephone) && (temp->Surname == surname))
                    {
                        loop = false;
                        _head = true;
                        return temp;
                    }
                    else
                      if (temp->next != nullptr)
                        if ((temp->next->Lastname == lastname) && (temp->next->Address == address) && (temp->next->Name == name) && (temp->next->Telephone == telephone) && (temp->next->Surname == surname))
                        {
                            loop = false;
                            _head = false;
                            return temp;
                        }
                temp = temp->next;
            }
        }

    bool node::show()
    {
        bool exist = true;
        element *temp;
        temp = head;
        system("clear");
        if (temp)
        while (temp != nullptr)
        {
            cout << "------------------------------------" << endl;
            cout << "Lastname: " << temp->Lastname << endl;
            cout << "Surname: " << temp->Surname << endl;
            cout << "Name: " << temp->Name << endl;
            cout << "Telephone: " << temp->Telephone << endl;
            cout << "Address: " << temp->Address << endl;
            cout << "------------------------------------" << endl << endl;
            temp = temp->next;
          }
        else exist = false;
        return exist;
    }

