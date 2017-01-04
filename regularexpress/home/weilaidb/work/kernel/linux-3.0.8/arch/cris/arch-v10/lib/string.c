#define MEMCPY_BY_BLOCK_THRESHOLD (44 * 2)
__asm__ (".syntax no_register_prefix");
void *
memcpy(void *pdst, const void *psrc, size_t pn)
