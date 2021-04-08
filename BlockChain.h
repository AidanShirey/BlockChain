#include "Block.h"
#include <vector>
using namespace std;

class BlockChain{
public:
	BlockChain();

	void addBlock(Block newBlock);
private:
	uint32_t diff;
	vector<Block> chain;

	Block getLastBlock() const;
};
