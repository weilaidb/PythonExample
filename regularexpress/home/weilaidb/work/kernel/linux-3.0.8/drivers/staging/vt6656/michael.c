static void s_vClear(void);
static void s_vSetKey(DWORD dwK0, DWORD dwK1);
static void s_vAppendByte(BYTE b);
static DWORD  L, R;
static DWORD  K0, K1;
static DWORD  M;
static unsigned int   nBytesInM;
static void s_vClear(void)
static void s_vSetKey(DWORD dwK0, DWORD dwK1)
static void s_vAppendByte(BYTE b)
void MIC_vInit(DWORD dwK0, DWORD dwK1)
void MIC_vUnInit(void)
void MIC_vAppend(PBYTE src, unsigned int nBytes)
void MIC_vGetMIC(PDWORD pdwL, PDWORD pdwR)
