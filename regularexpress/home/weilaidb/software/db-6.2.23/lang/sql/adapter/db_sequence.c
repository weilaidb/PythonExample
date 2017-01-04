#define	vsnprintf _vsnprintf
#define	SEQ_HANDLE_OPEN		0x0001
#define	SEQ_HANDLE_CREATE	0x0002
#define SEQ_TXN(c)							\
(((c)->cache == 0) ? p->savepoint_txn : p->family_txn)
#define	DB_SEQ_NEXT		0x0000
#define	DB_SEQ_CURRENT		0x0001
#define	MSG_CREATE_FAIL		"Sequence create failed: "
#define	MSG_MALLOC_FAIL		"Malloc failed during sequence operation."
#define	MSG_INTMPDB_FAIL	"Sequences do not support in-memory or"	\
" temporary databases."
#define CACHE_ENTRY_VALID(_e)						\
(_e != NULL &&							\
((((SEQ_COOKIE *)_e->cookie)->cache) == 0 || _e->dbp != NULL))
static int btreeSeqCreate(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie);
static void btreeSeqError(
sqlite3_context *context, int code, const char *msg, ...);
static int btreeSeqExists(sqlite3_context *context, Btree *p, const char *name);
static int btreeSeqGetCookie(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie, u_int32_t flags);
static int btreeSeqGetHandle(sqlite3_context *context, Btree *p,
int mode, SEQ_COOKIE *cookie);
static void btreeSeqGetVal(
sqlite3_context *context, const char *name, int next);
static int btreeSeqOpen(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie);
static int btreeSeqPutCookie(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie, u_int32_t flags);
static int btreeSeqRemoveHandle(
sqlite3_context *context, Btree *p, CACHED_DB *cache_entry);
static void btreeSeqSetSeqName(SEQ_COOKIE *cookie, const char *name);
static int btreeSeqStartTransaction(
sqlite3_context *context, Btree *p, int is_write);
static void db_seq_create_func(
sqlite3_context *context, int argc, sqlite3_value **argv)
static void db_seq_drop_func(
sqlite3_context *context, int argc, sqlite3_value **argv)
static void db_seq_nextval_func(
sqlite3_context *context, int argc, sqlite3_value **argv)
static void db_seq_currval_func(
sqlite3_context *context, int argc, sqlite3_value **argv)
static void btreeSeqGetVal(
sqlite3_context *context, const char * name, int mode)
int add_sequence_functions(sqlite3 *db)
static void btreeSeqError(
sqlite3_context *context, int code, const char *fmt, ...)
static int btreeSeqGetHandle(sqlite3_context *context, Btree *p,
int mode, SEQ_COOKIE *cookie)
static int btreeSeqRemoveHandle(
sqlite3_context *context, Btree *p, CACHED_DB *cache_entry)
static int btreeSeqOpen(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie)
static int btreeSeqCreate(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie)
static int btreeSeqExists(sqlite3_context *context, Btree *p, const char *name)
static int btreeSeqGetCookie(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie, u_int32_t flags)
static int btreeSeqPutCookie(
sqlite3_context *context, Btree *p, SEQ_COOKIE *cookie, u_int32_t flags)
static void btreeSeqSetSeqName(SEQ_COOKIE *cookie, const char *name)
static int btreeSeqStartTransaction(
sqlite3_context *context, Btree *p, int is_write)
