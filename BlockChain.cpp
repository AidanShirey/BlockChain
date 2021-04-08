#include "BlockChain.h"
#include "time.h"
#include <sstream>

// bool initBlockChain(): returns true if a block is successfully created, false otherwise
BlockChain::BlockChain(){
    chain.emplace_back(Block(0, "Genesis Block"));
    diff = 6;
}

void BlockChain::addBlock(Block newBlock){
    newBlock.prev_hash = getLastBlock().getHash();
    newBlock.mineBlock(diff);
    chain.push_back(newBlock);
}

Block BlockChain::getLastBlock() const{
    return chain.back();
}

