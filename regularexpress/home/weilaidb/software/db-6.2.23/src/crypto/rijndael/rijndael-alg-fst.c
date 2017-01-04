static const u32 Te0[256] = ;
static const u32 Te1[256] = ;
static const u32 Te2[256] = ;
static const u32 Te3[256] = ;
static const u32 Te4[256] = ;
static const u32 Td0[256] = ;
static const u32 Td1[256] = ;
static const u32 Td2[256] = ;
static const u32 Td3[256] = ;
static const u32 Td4[256] = ;
static const u32 rcon[] = ;
#define	SWAP(x) (_lrotl(x, 8) & 0x00ff00ff | _lrotr(x, 8) & 0xff00ff00)
#define	GETU32(p) SWAP(*((u32 *)(p)))
#define	PUTU32(ct, st)
#define	GETU32(pt) (((u32)(pt)[0] << 24) ^ ((u32)(pt)[1] << 16) ^ ((u32)(pt)[2] <<  8) ^ ((u32)(pt)[3]))
#define	PUTU32(ct, st)
int
__db_rijndaelKeySetupEnc(rk, cipherKey, keyBits)
u32 *rk;
const u8 *cipherKey;
int keyBits;
int
__db_rijndaelKeySetupDec(rk, cipherKey, keyBits)
u32 *rk;
const u8 *cipherKey;
int keyBits;
void
__db_rijndaelEncrypt(rk, Nr, pt, ct)
u32 *rk;
int Nr;
const u8 *pt;
u8 *ct;
void
__db_rijndaelDecrypt(rk, Nr, ct, pt)
u32 *rk;
int Nr;
const u8 *ct;
u8 *pt;
void
__db_rijndaelEncryptRound(rk, Nr, pt, ct)
const u32 *rk;
int Nr;
u8 *block;
int rounds;
void
__db_rijndaelDecryptRound(rk, Nr, pt, ct)
const u32 *rk;
int Nr;
u8 *block;
int rounds;
