#define __TKIP_H__
#define TKIP_KEY_LEN        16
void TKIPvMixKey(
unsigned char *pbyTKey,
unsigned char *pbyTA,
unsigned short wTSC15_0,
unsigned long dwTSC47_16,
unsigned char *pbyRC4Key
);
