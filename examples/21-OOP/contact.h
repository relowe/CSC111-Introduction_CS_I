// Class definition for the contact class
#ifndef CONTACT_H
#define CONTACT_H

#include <vector>
#include <string>
#include "contact_info.h"

class Contact 
{
public:
    //Constructors
    Contact();
    Contact(std::string name);

    //add information to the contact
    void add(const Contact_Info& info);

    //get the name of the contact
    std::string get_name();

    //set the name of the contact
    void set_name(const std::string& name);

    //return the number of info items in the contact
    int get_size();

    //return the indexed contact info (indexed from 0)
    Contact_Info get_info(int index);

    //change contact info
    void update_info(int index, const Contact_Info& info);

    //remove the contact info
    void remove_info(int index);

private:
    //the contact information
    std::vector<Contact_Info>  info;

    //the name of the contact
    std::string name;
};

#endif
