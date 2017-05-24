#include "Main_process.h"

void Process::process() {
	if (next.size() == 0) {
		next.push_back(block.get_mino());
	}
}