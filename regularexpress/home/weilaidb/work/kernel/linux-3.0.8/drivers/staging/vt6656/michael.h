#define __MICHAEL_H__
void MIC_vInit(DWORD dwK0, DWORD dwK1);
void MIC_vUnInit(void);
void MIC_vAppend(PBYTE src, unsigned int nBytes);
void MIC_vGetMIC(PDWORD pdwL, PDWORD pdwR);
#define ROL32(A, n) \
(((A) << (n)) | (((A)>>(32-(n)))  & ((1UL << (n)) - 1)))
#define ROR32(A, n) ROL32((A), 32-(n))
