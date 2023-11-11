#include "../headers/adresa.hpp"

using namespace std;

namespace adresa{
    Adresa_livrare::Adresa_livrare(string strada, int numar){
        str = strada;
        nr = numar;
    }
    
    string Adresa_livrare::getStrada(){
        return str;
    }

    int Adresa_livrare::getNumar(){
        return nr;
    }
}
