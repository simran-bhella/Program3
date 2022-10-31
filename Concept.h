#include <iostream>
#include <vector>
#include <map>
using namespace std;
//Simranjit Bhella
//5/13/2022
//CS202
//The purpose of this code is to set up hierarchy of concept classes for the CS202 Concept Management Program.
//This file includes the concept base class with the STL, Modern, and Python subclasses.
//The base Concept class has a create concept function, a display function, an edit website function,
// a remove_concept function, as well as several operators.
//The hotel, food, and event subclasses all have additional data not present in the concept class.

#ifndef CONC_H
#define  CONC_H

//Functions from this class will be available to subclasses
class Concept {
public:
    Concept(); //constructor
    void virtual msg();
    Concept * create_concept(string type,  map<string,string> data);//Thinking about using a map to send in data with a type to determine data type for creation.
    void display();
    bool is_full();
    void edit_website(string new_website);
    void remove_concept(string to_remove);


    //Not sure if operators can be pushed up, but will leave here for now.
    friend ostream & operator << (ostream & out, const Concept & op2);
    Concept operator+ (const Concept op2);
    Concept operator+= (const Concept op2);
    Concept operator- (const Concept op2);
    Concept operator-= (const Concept op2);
    bool operator== (const Concept * op2) const;
    bool operator!= (const Concept & op2) const;
    bool operator< (const Concept * op2) const;
    bool operator<= (const Concept & op2) const;
    bool operator> (const Concept & op2) const;
    bool operator>= (const Concept & op2) const;


protected:
    string website;
    int rating;
    int valid;
    string comment;

};

class STL : public Concept {
public:
    STL(); //constructor
    STL(const STL &copy); //copy constructor
    void msg() override;
    Concept * create_concept(string type, map<string,string> data);//Thinking about using a map to send in data with a type to determine data type for creation.
    void add_methods(map<string,string> data);

protected:
    string keyword;
    map<string, string> methods; //map will be useful to match name and description of methods

};

class Modern : public Concept {
public:
    Modern(); //constructor
    Modern(const Modern &copy); //copy constructor
    void msg() override;

    Concept * create_concept(string type, map<string,string> data);//Thinking about using a map to send in data with a type to determine data type for creation.


protected:
    string concept;
    string benefit;
    string drawback;
};

class Python : public Concept {
public:
    Python(); //constructor
    Python(const Python &copy); //copy constructor
    void msg() override;
    Concept * create_concept(string type, map<string,string> data);//Thinking about using a map to send in data with a type to determine data type for creation.
    void add_methods(map<string,string> data);

protected:
    string name;
    string use;
    map<string,string> methods;
};

#endif
