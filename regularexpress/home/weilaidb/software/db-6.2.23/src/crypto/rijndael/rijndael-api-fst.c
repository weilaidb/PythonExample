int
__db_makeKey(key, direction, keyLen, keyMaterial)
keyInstance *key;
int direction;
int keyLen;
char *keyMaterial;
int
__db_cipherInit(cipher, mode, IV)
cipherInstance *cipher;
int mode;
char *IV;
int
__db_blockEncrypt(cipher, key, input, inputLen, outBuffer)
cipherInstance *cipher;
keyInstance *key;
u_int8_t *input;
size_t inputLen;
u_int8_t *outBuffer;
int
__db_padEncrypt(cipher, key, input, inputOctets, outBuffer)
cipherInstance *cipher;
keyInstance *key;
u_int8_t *input;
int inputOctets;
u_int8_t *outBuffer;
int
__db_blockDecrypt(cipher, key, input, inputLen, outBuffer)
cipherInstance *cipher;
keyInstance *key;
u_int8_t *input;
size_t inputLen;
u_int8_t *outBuffer;
int
__db_padDecrypt(cipher, key, input, inputOctets, outBuffer)
cipherInstance *cipher;
keyInstance *key;
u_int8_t *input;
int inputOctets;
u_int8_t *outBuffer;
int
__db_cipherUpdateRounds(cipher, key, input, inputLen, outBuffer, rounds)
cipherInstance *cipher;
keyInstance *key;
u_int8_t *input;
size_t inputLen;
u_int8_t *outBuffer;
int rounds;
