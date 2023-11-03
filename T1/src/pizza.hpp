#ifndef PIZZA_HPP
#define PIZZA_HPP

namespace pizza{
    
    class Pizza{
        private:
            int nr_felii;
            char* nume;   
            
        public:
            Pizza(int nr_felii, const char* nume);
            ~Pizza();        
            Pizza(const Pizza &pizza);
            // Getters
            int getNrFelii();
            const char* getNume();
            // Setters
            void setNrFelii(int val);
            // Others
            Pizza& operator=(Pizza const &obj);
    };
}

#endif