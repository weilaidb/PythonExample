static int __bam_compress_marshal_data __P((DB *, const DBT *, DBT *));
static int __bam_compress_set_dbt __P((DB *, DBT *, const void *, u_int32_t));
static int __bam_compress_check_sort_multiple_key __P((DB *, DBT *));
static int __bam_compress_check_sort_multiple __P((DB *, DBT *, DBT *));
static int __bam_compress_check_sort_multiple_keyonly __P((DB *, DBT *));
static int __bamc_compress_del_and_get_next __P((DBC *, DBT *, DBT *));
static int __bamc_compress_get_bothc __P((DBC *, DBT *, u_int32_t));
static int __bamc_compress_get_multiple_key __P((DBC *, DBT *, u_int32_t));
static int __bamc_compress_get_multiple __P((DBC *, DBT *, DBT *,u_int32_t));
static int __bamc_compress_get_next __P((DBC *, u_int32_t));
static int __bamc_compress_get_next_dup __P((DBC *, DBT *, u_int32_t));
static int __bamc_compress_get_next_nodup __P((DBC *, u_int32_t));
static int __bamc_compress_get_prev __P((DBC *, u_int32_t));
static int __bamc_compress_get_prev_dup __P((DBC *, u_int32_t));
static int __bamc_compress_get_prev_nodup __P((DBC *, u_int32_t));
static int __bamc_compress_get_set __P((DBC *,
DBT *, DBT *, u_int32_t, u_int32_t));
static int __bamc_compress_ibulk_del __P((DBC *, DBT *, u_int32_t));
static int __bamc_compress_idel __P((DBC *, u_int32_t));
static int __bamc_compress_iget __P((DBC *, DBT *, DBT *, u_int32_t));
static int __bamc_compress_iput __P((DBC *, DBT *, DBT *, u_int32_t));
static int __bamc_compress_relocate __P((DBC *));
static void __bamc_compress_reset __P((DBC *));
static int __bamc_compress_seek __P((DBC *,
const DBT *, const DBT *, u_int32_t));
static int __bamc_compress_store __P((DBC *,
DBT *, DBT*, DBT **, DBT **, DBT *, DBT *));
static int __bamc_next_decompress __P((DBC *));
static int __bamc_start_decompress __P((DBC *));
#define	CMP_IGET_RETRY(ret, dbc, dbt1, dbt2, flags) do  while (0)
#define	CMP_INIT_DBT(dbt) do  while (0)
#define	CMP_FREE_DBT(env, dbt) do  while (0)
#define	CMP_RESIZE_DBT(ret, env, dbt)					\
(((dbt)->size > (dbt)->ulen) ?					\
((((ret) = __os_realloc((env), (dbt)->size, &(dbt)->data))	\
!= 0) ? (ret) : (((dbt)->ulen = (dbt)->size), 0)) : 0)
static int
__bam_compress_set_dbt(dbp, dbt, data, size)
DB *dbp;
DBT *dbt;
const void *data;
u_int32_t size;
struct __bam_compress_stream;
typedef struct __bam_compress_stream BTREE_COMPRESS_STREAM;
struct __bam_compress_stream
;
static int __bam_cs_next_done __P((BTREE_COMPRESS_STREAM *, DBT *, DBT *));
static int __bam_cs_single_next __P((BTREE_COMPRESS_STREAM *, DBT *, DBT *));
static void __bam_cs_create_single
__P((BTREE_COMPRESS_STREAM *, DBT *, DBT *));
static int __bam_cs_single_keyonly_next
__P((BTREE_COMPRESS_STREAM *, DBT *, DBT *));
static void __bam_cs_create_single_keyonly
__P((BTREE_COMPRESS_STREAM *, DBT *));
static int __bam_cs_multiple_key_next
__P((BTREE_COMPRESS_STREAM *, DBT *, DBT *));
static void __bam_cs_create_multiple_key __P((BTREE_COMPRESS_STREAM *, DBT *));
static int __bam_cs_multiple_next __P((BTREE_COMPRESS_STREAM *, DBT *, DBT *));
static void __bam_cs_create_multiple
__P((BTREE_COMPRESS_STREAM *, DBT *, DBT *));
static int __bam_cs_multiple_keyonly_next
__P((BTREE_COMPRESS_STREAM *, DBT *, DBT *));
static void __bam_cs_create_multiple_keyonly
__P((BTREE_COMPRESS_STREAM *, DBT *));
static int __bamc_compress_merge_insert
__P((DBC *, BTREE_COMPRESS_STREAM *, u_int32_t *, u_int32_t));
static int __bamc_compress_merge_delete
__P((DBC *, BTREE_COMPRESS_STREAM *, u_int32_t *));
static int __bamc_compress_merge_delete_dups
__P((DBC *, BTREE_COMPRESS_STREAM *, u_int32_t *));
static int
__bam_cs_next_done(stream, key, data)
BTREE_COMPRESS_STREAM *stream;
DBT *key, *data;
static int
__bam_cs_single_next(stream, key, data)
BTREE_COMPRESS_STREAM *stream;
DBT *key, *data;
static void
__bam_cs_create_single(stream, key, data)
BTREE_COMPRESS_STREAM *stream;
DBT *key, *data;
static int
__bam_cs_single_keyonly_next(stream, key, data)
BTREE_COMPRESS_STREAM *stream;
DBT *key, *data;
static void
__bam_cs_create_single_keyonly(stream, key)
BTREE_COMPRESS_STREAM *stream;
DBT *key;
static int
__bam_cs_multiple_key_next(stream, key, data)
BTREE_COMPRESS_STREAM *stream;
DBT *key, *data;
static void
__bam_cs_create_multiple_key(stream, multiple)
BTREE_COMPRESS_STREAM *stream;
DBT *multiple;
static int
__bam_cs_multiple_next(stream, key, data)
BTREE_COMPRESS_STREAM *stream;
DBT *key, *data;
static void
__bam_cs_create_multiple(stream, key, data)
BTREE_COMPRESS_STREAM *stream;
DBT *key, *data;
static int
__bam_cs_multiple_keyonly_next(stream, key, data)
BTREE_COMPRESS_STREAM *stream;
DBT *key, *data;
static void
__bam_cs_create_multiple_keyonly(stream, key)
BTREE_COMPRESS_STREAM *stream;
DBT *key;
static int
__bam_compress_marshal_data(dbp, data, destbuf)
DB *dbp;
const DBT *data;
DBT *destbuf;
#define	CMP_UNMARSHAL_DATA(src, dest) do  while (0)
int
__bam_compress_dupcmp(db, a, b, locp)
DB *db;
const DBT *a;
const DBT *b;
size_t *locp;
int
__bam_defcompress(dbp, prevKey, prevData, key, data, dest)
DB *dbp;
const DBT *prevKey, *prevData, *key, *data;
DBT *dest;
int
__bam_defdecompress(dbp, prevKey, prevData, compressed, destKey, destData)
DB *dbp;
const DBT *prevKey, *prevData;
DBT *compressed, *destKey, *destData;
static int
__bamc_start_decompress(dbc)
DBC *dbc;
static int
__bamc_next_decompress(dbc)
DBC *dbc;
static int
__bamc_compress_store(dbc, key, data, prevKey, prevData, destkey, destbuf)
DBC *dbc;
DBT *key, *data;
DBT **prevKey, **prevData;
DBT *destkey, *destbuf;
static int
__bamc_compress_seek(dbc, seek_key, seek_data, flags)
DBC *dbc;
const DBT *seek_key;
const DBT *seek_data;
u_int32_t flags;
static void
__bamc_compress_reset(dbc)
DBC *dbc;
static int
__bamc_compress_del_and_get_next(dbc, nextk, nextc)
DBC *dbc;
DBT *nextk, *nextc;
static int
__bamc_compress_relocate(dbc)
DBC *dbc;
#define	CMP_STORE(key, data) do  while (0)
static int
__bamc_compress_merge_insert(dbc, stream, countp, flags)
DBC *dbc;
BTREE_COMPRESS_STREAM *stream;
u_int32_t *countp;
u_int32_t flags;
static int
__bamc_compress_merge_delete(dbc, stream, countp)
DBC *dbc;
BTREE_COMPRESS_STREAM *stream;
u_int32_t *countp;
static int
__bamc_compress_merge_delete_dups(dbc, stream, countp)
DBC *dbc;
BTREE_COMPRESS_STREAM *stream;
u_int32_t *countp;
static int
__bamc_compress_get_prev(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__bamc_compress_get_prev_dup(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__bamc_compress_get_prev_nodup(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__bamc_compress_get_next(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__bamc_compress_get_next_dup(dbc, key, flags)
DBC *dbc;
DBT *key;
u_int32_t flags;
static int
__bamc_compress_get_next_nodup(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__bamc_compress_get_set(dbc, key, data, method, flags)
DBC *dbc;
DBT *key;
DBT *data;
u_int32_t method;
u_int32_t flags;
static int
__bamc_compress_get_bothc(dbc, data, flags)
DBC *dbc;
DBT *data;
u_int32_t flags;
static int
__bamc_compress_get_multiple_key(dbc, data, flags)
DBC *dbc;
DBT *data;
u_int32_t flags;
static int
__bamc_compress_get_multiple(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
static int
__bamc_compress_iget(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__bamc_compress_get(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
static int
__bamc_compress_iput(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
int
__bamc_compress_put(dbc, key, data, flags)
DBC *dbc;
DBT *key, *data;
u_int32_t flags;
static int
__bamc_compress_idel(dbc, flags)
DBC *dbc;
u_int32_t flags;
int
__bamc_compress_del(dbc, flags)
DBC *dbc;
u_int32_t flags;
static int
__bamc_compress_ibulk_del(dbc, key, flags)
DBC *dbc;
DBT *key;
u_int32_t flags;
int
__bamc_compress_bulk_del(dbc, key, flags)
DBC *dbc;
DBT *key;
u_int32_t flags;
int
__bamc_compress_count(dbc, countp)
DBC *dbc;
db_recno_t *countp;
int
__bamc_compress_cmp(dbc, other_dbc, result)
DBC *dbc, *other_dbc;
int *result;
int
__bamc_compress_dup(orig_dbc, new_dbc, flags)
DBC *orig_dbc, *new_dbc;
u_int32_t flags;
int
__bam_compress_salvage(dbp, vdp, handle, callback, key, data)
DB *dbp;
VRFY_DBINFO *vdp;
void *handle;
int (*callback) __P((void *, const void *));
DBT *key, *data;
int
__bam_compress_count(dbc, nkeysp, ndatap)
DBC *dbc;
u_int32_t *nkeysp, *ndatap;
static int
__bam_compress_check_sort_multiple_key(dbp, key)
DB *dbp;
DBT *key;
static int
__bam_compress_check_sort_multiple(dbp, key, data)
DB *dbp;
DBT *key, *data;
static int
__bam_compress_check_sort_multiple_keyonly(dbp, key)
DB *dbp;
DBT *key;
