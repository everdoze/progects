#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include "menu.h"
using namespace std;

    bool menu::showmenu()
    {
        cout<<"--------MENU---------"<< endl;
        cout<<"1: Show data"<< endl <<"2: Add element"<< endl <<"3: Delete element"<< endl <<"4: Edit element"<< endl << "5: Save to data" << endl <<"6: To Exit"<< endl;
        cin >> tmp;
        if ((tmp[0] == '1') || (tmp[0] == '2') || (tmp[0] == '3') || (tmp[0] == '4') || (tmp[0] == '5') || (tmp[0] == '6'))
        {
        a = tmp[0] - 48;
        if (a == 6)
            return false;
        else {
            execute();
            return true;
            }
        }
        else {
            tmp = "";
            cout << endl << "Такое больше не прокатит."<< endl;
            cin.ignore().get();
            system("clear");
            return true;
            }

    }

    void  menu::execute()
    {
        switch (a)
        {
            case 1:
                {
                    system("clear");
                    cout << "---SHOWING NODE---" << endl;
                    if (!(data->show()))
                        cout << endl << "Node doesn't exists!";
                    cin.ignore().get();
                    system("clear");
                    break;
                }
             case 2:
                {
                    system("clear");
                    cout << "----ADD ELEMENT----" << endl;
                    cout << "Enter Lastname : "; cin>>lastname;
                    cout << endl << "Enter Surname : "; cin>>surname;
                    cout << endl << "Enter Name : ";  cin>>name;
                    cout << endl << "Enter Address : "; cin>>address;
                    cout << endl << "Enter Telephone : "; cin>>telephone;
                    if (!(data->add(lastname,surname,name,address,telephone)))
                        cout << endl << "Element with this inf. already exists!";
                    else oneel++;
                    system("clear");
                    break;
                }

            case 3:
                {
                    system("clear");
                    cout << endl << "----DELETE ELEMENT----";
                    cout << endl << "Enter Lastname : "; cin>>lastname;
                    cout << endl << "Enter Surname : "; cin>>surname;
                    cout << endl << "Enter Name : "; cin>>name;
                    cout << endl << "Enter Address : "; cin>>address;
                    cout << endl << "Enter Telephone : "; cin>>telephone;
                    if (!(data->reMove(lastname,surname,name,address,telephone, oneel)))
                        cout << endl << "Error! Element not removed!";
                    cin.ignore().get();
                    system("clear");
                    break;
                }
            case 4:
                {
                    system("clear");
                    cout << "---------EDIT ELEMENT---------";
                    cout << endl << "PLEASE ENTER INFORMATION FROM " << endl << "ELEMENT WHICH YOU WANT TO EDIT";
                    cout << endl << "Enter Lastname : "; cin>>lastname;
                    cout << endl << "Enter Surname : "; cin>>surname;
                    cout << endl << "Enter Name : "; cin>>name;
                    cout << endl << "Enter Address : "; cin>>address;
                    cout << endl << "Enter Telephone : "; cin>>telephone;
                    if (!(data->edit(lastname,surname,name,address,telephone,oneel)))
                        cout << endl << "Error! Element not edited!";
                    cin.ignore().get();
                    system("clear");
                    break;
                }
             case 5:
                {
                    system("clear");
                    cout << "-------SAVING TO FILE---------";
                    if (data_info->write(data))
                        cout << endl << "DONE!";
                    else cout << endl << "ERROR!";
                    cin.ignore().get();
                    system("clear");
                    break;
                }
        }
    }

    void  menu::cNode()
    {
        data = new node();
        data_info = new file_rw();
        oneel = (data_info->read(data));
    }
    bool menu::tick()
    {
       return showmenu();
    }
