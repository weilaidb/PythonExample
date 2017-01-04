static void s_vClear(void);
static void s_vSetKey(unsigned long dwK0, unsigned long dwK1);
static void s_vAppendByte(unsigned char b);
static unsigned long L, R;
static unsigned long K0, K1;
static unsigned long M;
static unsigned int nBytesInM;
static void s_vClear (void)
static void s_vSetKey (unsigned long dwK0, unsigned long dwK1)
static void s_vAppendByte (unsigned char b)
void MIC_vInit (unsigned long dwK0, unsigned long dwK1)
void MIC_vUnInit (void)
void MIC_vAppend (unsigned char *src, unsigned int nBytes)
void MIC_vGetMIC (unsigned long *pdwL, unsigned long *pdwR)
