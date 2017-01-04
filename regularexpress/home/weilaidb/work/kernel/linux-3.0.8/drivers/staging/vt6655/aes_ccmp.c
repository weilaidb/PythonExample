unsigned char sbox_table[256] =
;
unsigned char dot2_table[256] = ;
unsigned char dot3_table[256] = ;
void xor_128(unsigned char *a, unsigned char *b, unsigned char *out)
void xor_32(unsigned char *a, unsigned char *b, unsigned char *out)
void AddRoundKey(unsigned char *key, int round)
void SubBytes(unsigned char *in, unsigned char *out)
void ShiftRows(unsigned char *in, unsigned char *out)
void MixColumns(unsigned char *in, unsigned char *out)
void AESv128(unsigned char *key, unsigned char *data, unsigned char *ciphertext)
bool AESbGenCCMP(unsigned char *pbyRxKey, unsigned char *pbyFrame, unsigned short wFrameSize)
