static SQLITE_WSD struct sqlite3PrngType  sqlite3Prng;
void sqlite3_randomness(int N, void *pBuf)
static SQLITE_WSD struct sqlite3PrngType sqlite3SavedPrng;
void sqlite3PrngSaveState(void)
void sqlite3PrngRestoreState(void)
