#define	SEQ_SWAP(rp)							\
do  while (0)
#define	SEQ_SWAP_IN(env, seq) \
do  while (0)
#define	SEQ_SWAP_OUT(env, seq) \
do  while (0)
static int __seq_chk_cachesize __P((ENV *, u_int32_t, db_seq_t, db_seq_t));
static int __seq_close_pp __P((DB_SEQUENCE *, u_int32_t));
static int __seq_get_pp
__P((DB_SEQUENCE *,
DB_TXN *, u_int32_t,  db_seq_t *, u_int32_t));
static int __seq_get_cachesize __P((DB_SEQUENCE *, u_int32_t *));
static int __seq_get_db __P((DB_SEQUENCE *, DB **));
static int __seq_get_flags __P((DB_SEQUENCE *, u_int32_t *));
static int __seq_get_key __P((DB_SEQUENCE *, DBT *));
static int __seq_get_range __P((DB_SEQUENCE *, db_seq_t *, db_seq_t *));
static int __seq_open_pp __P((DB_SEQUENCE *, DB_TXN *, DBT *, u_int32_t));
static int __seq_remove __P((DB_SEQUENCE *, DB_TXN *, u_int32_t));
static int __seq_set_cachesize __P((DB_SEQUENCE *, u_int32_t));
static int __seq_set_flags __P((DB_SEQUENCE *, u_int32_t));
static int __seq_set_range __P((DB_SEQUENCE *, db_seq_t, db_seq_t));
static int __seq_update
__P((DB_SEQUENCE *, DB_THREAD_INFO *, DB_TXN *, u_int32_t, u_int32_t));
int
db_sequence_create(seqp, dbp, flags)
DB_SEQUENCE **seqp;
DB *dbp;
u_int32_t flags;
static int
__seq_open_pp(seq, txn, keyp, flags)
DB_SEQUENCE *seq;
DB_TXN *txn;
DBT *keyp;
u_int32_t flags;
int
__seq_open(seq, txn, keyp, flags)
DB_SEQUENCE *seq;
DB_TXN *txn;
DBT *keyp;
u_int32_t flags;
static int
__seq_get_cachesize(seq, cachesize)
DB_SEQUENCE *seq;
u_int32_t *cachesize;
static int
__seq_set_cachesize(seq, cachesize)
DB_SEQUENCE *seq;
u_int32_t cachesize;
#define	SEQ_SET_FLAGS	(DB_SEQ_WRAP | DB_SEQ_INC | DB_SEQ_DEC)
static int
__seq_get_flags(seq, flagsp)
DB_SEQUENCE *seq;
u_int32_t *flagsp;
static int
__seq_set_flags(seq, flags)
DB_SEQUENCE *seq;
u_int32_t flags;
int
__seq_initial_value(seq, value)
DB_SEQUENCE *seq;
db_seq_t value;
static int
__seq_get_range(seq, minp, maxp)
DB_SEQUENCE *seq;
db_seq_t *minp, *maxp;
static int
__seq_set_range(seq, min, max)
DB_SEQUENCE *seq;
db_seq_t min, max;
static int
__seq_update(seq, ip, txn, delta, flags)
DB_SEQUENCE *seq;
DB_THREAD_INFO *ip;
DB_TXN *txn;
u_int32_t delta, flags;
int
__seq_get(seq, txn, delta, retp, flags)
DB_SEQUENCE *seq;
DB_TXN *txn;
u_int32_t delta, flags;
db_seq_t *retp;
static int
__seq_get_pp(seq, txn, delta, retp, flags)
DB_SEQUENCE *seq;
DB_TXN *txn;
u_int32_t delta, flags;
db_seq_t *retp;
static int
__seq_get_db(seq, dbpp)
DB_SEQUENCE *seq;
DB **dbpp;
static int
__seq_get_key(seq, key)
DB_SEQUENCE *seq;
DBT *key;
static int
__seq_close_pp(seq, flags)
DB_SEQUENCE *seq;
u_int32_t flags;
int
__seq_close(seq, flags)
DB_SEQUENCE *seq;
u_int32_t flags;
static int
__seq_remove(seq, txn, flags)
DB_SEQUENCE *seq;
DB_TXN *txn;
u_int32_t flags;
static int
__seq_chk_cachesize(env, cachesize, max, min)
ENV *env;
u_int32_t cachesize;
db_seq_t max, min;
int
db_sequence_create(seqp, dbp, flags)
DB_SEQUENCE **seqp;
DB *dbp;
u_int32_t flags;
