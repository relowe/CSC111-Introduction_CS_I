// Main program for the address book program
#include <iostream>
#include <fstream>
#include <sstream>
#include "iofun.h"
#include "address_book.h"
#include "contact_info.h"
#include "contact.h"

using namespace std;

//prototypes
int menu();
void load(Address_Book &book);
void save(Address_Book &book);
void view_contact_list(Address_Book &book);
void add_contact(Address_Book &book);
void remove_contact(Address_Book &book);

int main()
{
    enum Menu_Choice{VIEW=1, ADD, REMOVE, EXIT};
    Address_Book book;
    int choice;

    //retore from the file
    load(book);

    do {
        choice = menu();

        //do the menu selection
        if(choice == VIEW) {
            view_contact_list(book);
        } else if(choice == ADD) {
            add_contact(book);
        } else if(choice == REMOVE) {
            remove_contact(book);
        }
    } while(choice != EXIT);

    //save the address book
    save(book);
}


//display a menu and return the user's selection
int menu()
{
    ostringstream os;

    //construct the menu
    os << endl
       << "\t   MAIN MENU" << endl
       << "\t1.) View Contact List" << endl
       << "\t2.) Add Contact" << endl
       << "\t3.) Remove Contact" << endl
       << "\t4.) Exit" << endl
       << endl
       << "\tYour Choice? ";
    
    return prompt_int_range(os.str(), 1, 4);
}


//load address book from a file
void load(Address_Book &book)
{
    cout << "TODO: Implement Load Address Book" << endl;
}


//save address book to a file
void save(Address_Book &book)
{
    cout << "TODO: Implement Save Address Book" << endl;
}


//View the contact list
void view_contact_list(Address_Book &book)
{
    cout << "TODO: Implement View Contact List" << endl;
}


//Add a contact
void add_contact(Address_Book &book)
{
    cout << "TODO: Implement Add Contact" << endl;
}


//Remove a contact
void remove_contact(Address_Book &book)
{
    cout << "TODO: Implement Remove Contact" << endl;
}
