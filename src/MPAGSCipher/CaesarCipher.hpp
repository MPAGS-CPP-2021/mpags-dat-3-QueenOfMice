#ifndef CAESAR_CIPHER_HPP
#define CAESAR_CIPHER_HPP

#include <cstddef>

class CaesarCipher {
    public:
        CaesarCipher(const std::size_t key);
    
    std::size_t key_{0};
};

#endif