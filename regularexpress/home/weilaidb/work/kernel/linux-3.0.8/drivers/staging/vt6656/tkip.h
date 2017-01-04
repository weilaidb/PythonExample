#define __TKIP_H__
#define TKIP_KEY_LEN        16
void TKIPvMixKey(
PBYTE   pbyTKey,
PBYTE   pbyTA,
WORD    wTSC15_0,
DWORD   dwTSC47_16,
PBYTE   pbyRC4Key
);
