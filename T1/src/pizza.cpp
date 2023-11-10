#include <iostream>
#include <cstring>

#include "../headers/pizza.hpp"

using namespace std;

namespace pizza{
    Pizza::Pizza(int nr_felii, const char* name){
        this->nr_felii = nr_felii;
        nume = new char[strlen(name) + 1];
        strcpy(nume, name);
        cout<<"\nConstructor apelat pentru pizza cu numele: "<<name;
    }

    Pizza::~Pizza(){
        delete[] nume;
        cout<<"\nDestructor apelat.";
    }

    Pizza::Pizza(const Pizza &pizza){
        nr_felii = pizza.nr_felii;
        strcpy(nume, pizza.nume);
        cout<<"\nCopy-constructor apelat pentru pizza cu numele: "<<nume;
    }

    Pizza::Pizza(Pizza &&pizza){
        nr_felii = pizza.nr_felii;
        strcpy(nume, pizza.nume);
        cout<<"\nMove-constructor apelat pentru pizza cu numele: "<<nume;
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
        cout<<"\nAssigment apelat pentru pizza cu numele: "<<nume;
        if( this == &obj){
            return *this;
        }
        nr_felii = obj.nr_felii;
        strcpy(nume, obj.nume);

        return *this;
    }

    void Pizza::tipBlat() {
        cout<<"\nClasa abstracta apelata, exista doar blat pufos.";
    }
}