#include "Concept.h"

//Simranjit Bhella
//5/14/2022
//CS202
//The purpose of this file is to implement the functions from the classes in the Concept.h file.
//Functions include constructors, create concept functions, and operators for right now. More will be added soon.




Concept::Concept() {}

void Concept::msg() {}

STL::STL() {}

void STL::msg() {}

Modern::Modern() {}

void Modern::msg() {}

Python::Python() {}

void Python::msg() {}

Concept* Concept::create_concept(string type, map <string, string> data) {

    Concept * c = new Concept();
    for(auto &item: data){
        if (item.first == "website") {
            c->website = item.second;
        }

        if (item.first == "rating") {
            c->rating = stoi(item.second);
        }

        if (item.first == "valid") {
            c->valid = stoi(item.second);
        }

        if (item.first == "comment") {
            c->comment = item.second;
        }
    }


    if (type == "STL") {
        STL * s = dynamic_cast<STL*> (c);

        s->create_concept(type, data);

        return s;

    }

    if (type == "Modern") {
        Modern * m = dynamic_cast<Modern*> (c);

        m->create_concept(type, data);

        return m;

    }

    if (type == "Python") {
        Python * p = dynamic_cast<Python*> (c);

        p->create_concept(type, data);

        return p;

    }



}

Concept* STL::create_concept(string type, map<string, string> data) {

    for (auto &item: data) {
        if (item.first == "keyword") {
            this->keyword = item.second;
        }

    }
}

void STL::add_methods(map<string, string> data) {
    this->methods = data;
}

bool Concept::operator==(const Concept * op2) const {
    if (this->rating == op2->rating) {
        return true;
    }

    return false;
}

bool Concept::operator<(const Concept * op2) const {
    if (this->rating < op2->rating) {
        return true;
    }

    return false;
}

bool Concept::is_full() {

    if (this->website.empty()) {
        return true;
    }

    return false;
}


Concept* Modern::create_concept(string type, map<string, string> data) {

    for(auto &item: data){
        if (item.first == "concept") {
            this->concept = item.second;
        }

        if (item.first == "benefit") {
            this->benefit = item.second;
        }

        if (item.first == "drawback") {
            this->drawback = item.second;
        }
    }

}

Concept* Python::create_concept(string type, map<string, string> data) {

    for(auto &item: data){
        if (item.first == "name") {
            this->name = item.second;
        }

        if (item.first == "use") {
            this->use = item.second;
        }

    }

}

void Python::add_methods(map<string, string> data) {
    this->methods = data;
}

void Concept::edit_website(string new_website) {

    this->website = new_website;

}

ostream & operator<<(ostream &os, const Concept &c) {

    os << "Website: " << c.website << endl << "Rating: " << c.rating << endl << "Valid: ";

    if (c.valid == 1) {
        os << "Yes";

    }

    else {
        os << "No";
    }

    os << endl << "Comments: " << c.comment << endl;
}
