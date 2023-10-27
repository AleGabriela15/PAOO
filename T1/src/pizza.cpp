#include <iostream>
#include <string>

#include "pizza.hpp"

using namespace std;

class Pizza{
    private:
        int nr_felii;
        string nume;
    
    public:
        Pizza(int nr_felii, const string& nume){
            cout<<"\nConstructor apelat.";
            this->nr_felii = nr_felii;
            this->nume = nume;
        }

        ~Pizza(){
            cout<<"\nDestructor apelat.";
        }
        
        Pizza(Pizza &pizza){
            nr_felii = pizza.nr_felii;
            nume = pizza.nume;
            cout<<"\nCopy-constructor apelat.";
        }

        int getNrFelii(){
            return nr_felii;
        }

        string getNume(){
            return nume;
        }

        void setNrFelii(int val){
            nr_felii = val;
            cout<<"\nIncapsulare setter.";
        }

        Pizza operator=(Pizza const &obj){
           if( this == &obj){
            return *this;
           }
           nr_felii = obj.nr_felii;
           nume = obj.nume;

           return *this;
        }
};

int main()
{
    Pizza margerita(4, "Margerita");
    Pizza prosciuto(4, "Prosciuto");
    Pizza concarne(10, "Con Carne");
    Pizza pizza = margerita;
    concarne = prosciuto;


    cout<<"\nPrima pizza se numeste: "<< margerita.getNume()<<" si are: "<< margerita.getNrFelii()<<" felii.";
    cout<<"\nA doua pizza se numeste: "<< prosciuto.getNume()<<" si are: "<< prosciuto.getNrFelii()<<" felii.";
    cout<<"\nA treia pizza se numeste: "<< pizza.getNume()<<" si are: "<< pizza.getNrFelii()<<" felii.";
    cout<<"\nA patra se numeste: "<< concarne.getNume()<<" si are: "<< concarne.getNrFelii()<<" felii.";

    margerita.setNrFelii(5);
    cout<<"\nPrima pizza se numeste: "<< margerita.getNume()<<" si acum are: "<< margerita.getNrFelii()<<" felii.";
    
    cout<<"\nPizza dupa overloading se numeste: "<< concarne.getNume()<<" si are: "<< concarne.getNrFelii()<<" felii.";


    return 0;
}