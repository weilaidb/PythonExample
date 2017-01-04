#define __TCRC_H__
DWORD CRCdwCrc32(PBYTE pbyData, unsigned int cbByte, DWORD dwCrcSeed);
DWORD CRCdwGetCrc32(PBYTE pbyData, unsigned int cbByte);
DWORD CRCdwGetCrc32Ex(PBYTE pbyData, unsigned int cbByte, DWORD dwPreCRC);
