#define MEMSET_BY_BLOCK_THRESHOLD (1 * 48)
__asm__ (".syntax no_register_prefix");
void *memset(void *pdst, int c, unsigned int plen)
