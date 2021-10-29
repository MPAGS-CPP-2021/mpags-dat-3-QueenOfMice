#ifndef CAESAR_CIPHER_HPP
#define CAESAR_CIPHER_HPP

#include <cstddef>
#include <string>

class CaesarCipher {
    public:
        explicit CaesarCipher(const std::size_t key);
        explicit CaesarCipher(const std::string skey);
    
    std::size_t key_{0};
};

#endif