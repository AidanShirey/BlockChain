#include "Block.h"
#include "sha256.h"

Block::Block(uint32_t indexin, const string &datain) : index(indexin), data(datain){
    nonce = -1;
    ntime = time(nullptr);
}

string Block::getHash(){
    return hash;
}

void Block::mineBlock(uint32_t difficulty){
    char cstr[difficulty + 1];
    for (uint32_t i = 0; i < difficulty; ++i){
        cstr[i] = '0';
    }
    cstr[difficulty] = '\0';

    string str(cstr);

    do {
        nonce++;
        hash = calculateHash();
    } while (hash.substr(0,difficulty) != str);

    cout << "Block mined: " << hash << endl;
}

inline string Block::calculateHash() const {
    stringstream ss;
    ss << index << ntime << data << nonce << prev_hash;

    return sha256(ss.str());
}