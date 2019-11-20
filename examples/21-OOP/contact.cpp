//The implementation of the Contact class
#include <vector>
#include "contact.h"
#include "contact_info.h"

//Constructors
Contact::Contact()
{
    //this space left intentionally blank
}


Contact::Contact(std::string name)
{
    this->name = name;
}


//add information to the contact
void Contact::add(const Contact_Info& info)
{
    this->info.push_back(info);
}


//get the name of the contact
std::string Contact::get_name()
{
    return name;
}


//set the name of the contact
void Contact::set_name(const std::string& name)
{
    this->name = name;
}


//return the number of info items in the contact
int Contact::get_size()
{
    return info.size();
}


//return the indexed contact info (indexed from 0)
Contact_Info Contact::get_info(int index)
{
    return info[index];
}

//change contact info
void Contact::update_info(int index, const Contact_Info& info)
{
    this->info[index] = info;
}


//remove the contact info
void Contact::remove_info(int index)
{
    info.erase(info.begin() + index);
}
