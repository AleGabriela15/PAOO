#ifndef ADRESA_HPP
#define ADRESA_HPP

#include <string>

using namespace std;

namespace adresa{
    
    class Adresa_livrare {

        private:
            string str;
            int nr;
        
        public:
            Adresa_livrare(string strada, int numar);
            string getStrada();
            int getNumar();
    };
}

#endif