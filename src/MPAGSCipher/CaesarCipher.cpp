#include "CaesarCipher.hpp"
#include "RunCaesarCipher.hpp"

CaesarCipher::CaesarCipher(const std::size_t key) : key_{key} {}

CaesarCipher::CaesarCipher(const std::string skey) : key_{std::stoul(skey)} {}

std::string CaesarCipher::applyCipher(bool& encrypt, std::string& inputText) {
    // call function to en/decrypt based on boolean input
    // and return en/decrypted message
    return runCaesarCipher(inputText, key_, encrypt);
}