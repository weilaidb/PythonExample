typedef struct  ppc_SHA_CTX;
int ppc_SHA1_Init(ppc_SHA_CTX *c);
int ppc_SHA1_Update(ppc_SHA_CTX *c, const void *p, unsigned long n);
int ppc_SHA1_Final(unsigned char *hash, ppc_SHA_CTX *c);
#define git_SHA_CTX	ppc_SHA_CTX
#define git_SHA1_Init	ppc_SHA1_Init
#define git_SHA1_Update	ppc_SHA1_Update
#define git_SHA1_Final	ppc_SHA1_Final
