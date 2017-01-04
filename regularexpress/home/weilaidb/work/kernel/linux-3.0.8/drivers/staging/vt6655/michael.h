#define __MICHAEL_H__
void MIC_vInit(unsigned long dwK0, unsigned long dwK1);
void MIC_vUnInit(void);
void MIC_vAppend(unsigned char *src, unsigned int nBytes);
void MIC_vGetMIC(unsigned long *pdwL, unsigned long *pdwR);
#define ROL32( A, n ) \
( ((A) << (n)) | ( ((A)>>(32-(n)))  & ( (1UL << (n)) - 1 ) ) )
#define ROR32( A, n ) ROL32( (A), 32-(n) )
