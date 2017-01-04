BYTE sbox_table[256] = ;
BYTE dot2_table[256] = ;
BYTE dot3_table[256] = ;
static void xor_128(BYTE *a, BYTE *b, BYTE *out)
static void xor_32(BYTE *a, BYTE *b, BYTE *out)
void AddRoundKey(BYTE *key, int round)
void SubBytes(BYTE *in, BYTE *out)
void ShiftRows(BYTE *in, BYTE *out)
void MixColumns(BYTE *in, BYTE *out)
void AESv128(BYTE *key, BYTE *data, BYTE *ciphertext)
BOOL AESbGenCCMP(PBYTE pbyRxKey, PBYTE pbyFrame, WORD wFrameSize)
