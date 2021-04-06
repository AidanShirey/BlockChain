#pragma once
#include <string>
using namespace std;

class BlockChain{
	Block genesisBlock;
	int blockCount;
public:
	bool initBlockChain();
	int getBlockCount();
};


class Block {
	string prev_hash;
	string timestamp;
	// Merkle mRoot;
	string nonce;
public:
	bool createBlock();
};
