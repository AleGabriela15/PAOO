#include "../headers/persoana.hpp"

#include <iostream>
#include <memory>

using namespace std;

namespace persoana{
    Persoana::Persoana(string name, shared_ptr<Adresa_livrare> address){
        nume = name;
        adresa = make_shared<adresa::Adresa_livrare>(address->getStrada(), address->getNumar());
    }
    
    void Persoana::afiseazaPersoana(){
        cout << "Numele persoanei este: " << nume << "si are adresa " << adresa->getStrada() << ", "<< adresa->getNumar()<< endl;
    }
}
