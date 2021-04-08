#pragma once
#include <cstdint>
#include <iostream>
#include <sstream>
#include "time.h"
using namespace std;

class Block {
public:
    string prev_hash;

    Block(uint32_t indexin, const string &datain);

    string getHash();

    void mineBlock (uint32_t difficulty);
private:
    uint32_t index;
    int64_t nonce;
    string data;
    string hash;
    time_t ntime;

    string calculateHash() const;

};