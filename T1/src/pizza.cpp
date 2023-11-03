#include <iostream>
#include <cstring>

#include "pizza.hpp"

using namespace std;

namespace pizza{
    Pizza::Pizza(int nr_felii, const char* name){
        cout<<"\nConstructor apelat.";
        this->nr_felii = nr_felii;
        nume = new char[strlen(name) + 1];
        strcpy(nume, name);
    }

    Pizza::~Pizza(){
        delete[] nume;
        cout<<"\nDestructor apelat.";
    }

    Pizza::Pizza(const Pizza &pizza){
        nr_felii = pizza.nr_felii;
        nume = pizza.nume;
        cout<<"\nCopy-constructor apelat.";
    }

    int Pizza::getNrFelii(){
        return nr_felii;
    }

    const char* Pizza::getNume(){
        return nume;
    }

    void Pizza::setNrFelii(int val){
        nr_felii = val;
        cout<<"\nIncapsulare setter.";
    }

    Pizza& Pizza::operator=(Pizza const &obj){
        cout<<"\nAssigment apelat.";
        if( this == &obj){
            return *this;
        }
        nr_felii = obj.nr_felii;
        nume = obj.nume;

        return *this;
    }
}