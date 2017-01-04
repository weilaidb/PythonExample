typedef struct PgHdr PgHdr;
struct PgHdr ;
int sqlite3PcacheInitialize(void);
void sqlite3PcacheShutdown(void);
void sqlite3PCacheBufferSetup(void *p, int sz, int n);
void sqlite3PCacheSetDefault(void);
void sqlite3PcacheStats(int *a,int *b,int *c,int *d);
int sqlite3PcacheReleaseMemory(int nReq);
