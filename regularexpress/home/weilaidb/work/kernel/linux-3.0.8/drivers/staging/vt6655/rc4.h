#define __RC4_H__
typedef struct  RC4Ext, *PRC4Ext;
void rc4_init(PRC4Ext pRC4, unsigned char *pbyKey, unsigned int cbKey_len);
unsigned int rc4_byte(PRC4Ext pRC4);
void rc4_encrypt(PRC4Ext pRC4, unsigned char *pbyDest, unsigned char *pbySrc, unsigned int cbData_len);
