#pragma once
#include <string>
class BlockChain{
	Block genesisBlock;
	int blockCount;
public:
	bool initBlockChain();
	int getBlockCount();
}

class Block {
	String prev_hash;
	String timestamp;
	// Merkle mRoot;
	String nonce;
public:
	bool createBlock();
}

