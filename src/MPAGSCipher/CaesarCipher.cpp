#include "CaesarCipher.hpp"

CaesarCipher::CaesarCipher(const std::size_t key) : key_{key} {}

CaesarCipher::CaesarCipher(const std::string skey) : key_{std::stoul(skey)} {}
