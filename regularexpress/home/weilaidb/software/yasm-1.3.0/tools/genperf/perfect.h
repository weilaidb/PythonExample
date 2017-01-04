#define PERFECT
#define MAXKEYLEN 30
#define USE_SCRAMBLE  4096
#define SCRAMBLE_LEN ((ub4)1<<16)
#define RETRY_INITKEY 2048
#define RETRY_PERFECT 1
#define RETRY_HEX     200
struct gencode
;
typedef  struct gencode  gencode;
struct hashform
;
typedef  struct hashform  hashform;
struct key
;
typedef  struct key  key;
struct bstuff
;
typedef  struct bstuff  bstuff;
struct hstuff
;
typedef  struct hstuff hstuff;
struct qstuff
;
typedef  struct qstuff  qstuff;
ub4 phash_log2(ub4 x);
void findhash(bstuff **tabb, hstuff **tabh, ub4 *alen, ub4 *blen, ub4 *salt,
gencode *final, ub4 *scramble, ub4 *smax, key *keys, ub4 nkeys,
hashform *form);
int inithex(key *keys, ub4 nkeys, ub4 alen, ub4 blen, ub4 smax, ub4 salt,
gencode *final, hashform *form);
