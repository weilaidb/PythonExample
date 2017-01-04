#define CHECKSTATE 8
ub4  phash_log2(val)
ub4  val;
static ub4  permute(
ub4 x,
ub4 nbits)
static void scrambleinit(
ub4      *scramble,
ub4       smax)
static void checkdup(
key      *key1,
key      *key2,
hashform *form)
static int inittab(
bstuff   *tabb,
ub4       blen,
key      *keys,
hashform *form,
int       complete)
static void initnorm(
key      *keys,
ub4       alen,
ub4       blen,
ub4       smax,
ub4       salt,
gencode  *final)
static void initinl(
key      *keys,
ub4       alen,
ub4       blen,
ub4       smax,
ub4       salt,
gencode  *final)
static ub4 initkey(
key      *keys,
ub4       nkeys,
bstuff   *tabb,
ub4       alen,
ub4       blen,
ub4       smax,
ub4       salt,
hashform *form,
gencode  *final)
static void duplicates(
bstuff   *tabb,
ub4       blen,
key      *keys,
hashform *form)
static int apply(
bstuff *tabb,
hstuff *tabh,
qstuff *tabq,
ub4     blen,
ub4    *scramble,
ub4     tail,
int     rollback)
static int augment(
bstuff   *tabb,
hstuff   *tabh,
qstuff   *tabq,
ub4       blen,
ub4      *scramble,
ub4       smax,
bstuff   *item,
ub4       nkeys,
ub4       highwater,
hashform *form)
static int perfect(
bstuff   *tabb,
hstuff   *tabh,
qstuff   *tabq,
ub4       blen,
ub4       smax,
ub4      *scramble,
ub4       nkeys,
hashform *form)
static void hash_ab(
bstuff  **tabb,
ub4      *alen,
ub4      *blen,
ub4      *salt,
gencode  *final,
ub4      *scramble,
ub4      *smax,
key      *keys,
ub4       nkeys,
hashform *form)
static void initalen(
ub4      *alen,
ub4      *blen,
ub4      *smax,
ub4       nkeys,
hashform *form)
void findhash(
bstuff  **tabb,
hstuff  **tabh,
ub4      *alen,
ub4      *blen,
ub4      *salt,
gencode  *final,
ub4      *scramble,
ub4      *smax,
key      *keys,
ub4       nkeys,
hashform *form)
