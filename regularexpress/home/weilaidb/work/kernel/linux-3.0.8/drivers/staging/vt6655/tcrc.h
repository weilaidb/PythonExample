#define __TCRC_H__
unsigned long CRCdwCrc32(unsigned char *pbyData, unsigned int cbByte, unsigned long dwCrcSeed);
unsigned long CRCdwGetCrc32(unsigned char *pbyData, unsigned int cbByte);
unsigned long CRCdwGetCrc32Ex(unsigned char *pbyData, unsigned int cbByte, unsigned long dwPreCRC);
