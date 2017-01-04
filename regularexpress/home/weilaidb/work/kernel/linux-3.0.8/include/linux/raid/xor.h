#define _XOR_H
#define MAX_XOR_BLOCKS 4
extern void xor_blocks(unsigned int count, unsigned int bytes,
void *dest, void **srcs);
struct xor_block_template ;
