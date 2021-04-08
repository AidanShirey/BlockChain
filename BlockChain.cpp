#include "BlockChain.h"
#include "time.h"
#include <sstream>

// bool initBlockChain(): returns true if a block is successfully created, false otherwise
bool initBlockChain(){
    bst * mnode;
    Block block;
    stringstream ss;
    string stringtime;
    time_t t = time(0);
    char * time = ctime(&t);
    ss << time;
    ss >> stringtime;
    block.setAttributes("0", stringtime, mnode, "nonce");
}

