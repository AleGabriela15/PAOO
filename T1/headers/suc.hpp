#ifndef SUC_H
#define SUC_H

#include <iostream>
#include <string>

namespace suc{
    
    template <typename T>
    class Suc {
        private:
            std::string nume;
            T numarLitri;

        public:
            Suc(const std::string& name, const T& nrLitri);
            void afiseazaSuc() const;
    };

    // Explicit instantiation for int and double
    extern template class Suc<int>;
    extern template class Suc<double>;

}

#endif // SUC_H
