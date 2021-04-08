#pragma once
#include <cstdint>
#include <iostream>
using namespace std;

class Block {
public:
    string prev_hash;

    Block(uint32_t indexin, const string &datain);

    string getHash();

    void MineBlock (uint32_t difficulty);
private:
    uint32_t index;
    int64_t nonce;
    string data;
    string hash;
    time_t time;

    string calculatehHash() const;

};