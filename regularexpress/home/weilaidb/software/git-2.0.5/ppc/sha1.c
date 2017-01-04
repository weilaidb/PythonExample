extern void ppc_sha1_core(uint32_t *hash, const unsigned char *p,
unsigned int nblocks);
int ppc_SHA1_Init(ppc_SHA_CTX *c)
int ppc_SHA1_Update(ppc_SHA_CTX *c, const void *ptr, unsigned long n)
int ppc_SHA1_Final(unsigned char *hash, ppc_SHA_CTX *c)
