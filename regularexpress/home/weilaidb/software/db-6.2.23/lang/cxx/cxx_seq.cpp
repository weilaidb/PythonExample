#define	DBSEQ_METHOD(_name, _argspec, _arglist, _destructor)		\
int DbSequence::_name _argspec						\
DbSequence::DbSequence(Db *db, u_int32_t flags)
:	imp_(0)
DbSequence::DbSequence(DB_SEQUENCE *seq)
:	imp_(seq)
DbSequence::~DbSequence()
DBSEQ_METHOD(open, (DbTxn *txnid, Dbt *key, u_int32_t flags),
(seq, unwrap(txnid), key, flags), 0)
DBSEQ_METHOD(initial_value, (db_seq_t value), (seq, value), 0)
DBSEQ_METHOD(close, (u_int32_t flags), (seq, flags), 1)
DBSEQ_METHOD(remove, (DbTxn *txnid, u_int32_t flags),
(seq, unwrap(txnid), flags), 1)
DBSEQ_METHOD(stat, (DB_SEQUENCE_STAT **sp, u_int32_t flags),
(seq, sp, flags), 0)
DBSEQ_METHOD(stat_print, (u_int32_t flags), (seq, flags), 0)
DBSEQ_METHOD(get,
(DbTxn  *txnid, u_int32_t delta, db_seq_t *retp, u_int32_t flags),
(seq, unwrap(txnid), delta, retp, flags), 0)
DBSEQ_METHOD(get_cachesize, (u_int32_t *sizep), (seq, sizep), 0)
DBSEQ_METHOD(set_cachesize, (u_int32_t size), (seq, size), 0)
DBSEQ_METHOD(get_flags, (u_int32_t *flagsp), (seq, flagsp), 0)
DBSEQ_METHOD(set_flags, (u_int32_t flags), (seq, flags), 0)
DBSEQ_METHOD(get_range, (db_seq_t *minp, db_seq_t *maxp), (seq, minp, maxp), 0)
DBSEQ_METHOD(set_range, (db_seq_t min, db_seq_t max), (seq, min, max), 0)
Db *DbSequence::get_db()
Dbt *DbSequence::get_key()
DbSequence *DbSequence::wrap_DB_SEQUENCE(DB_SEQUENCE *seq)
