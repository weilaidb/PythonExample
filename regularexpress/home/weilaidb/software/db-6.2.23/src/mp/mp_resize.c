static int __memp_add_bucket __P((DB_MPOOL *));
static int __memp_add_region __P((DB_MPOOL *));
static int __memp_map_regions __P((DB_MPOOL *));
static int __memp_merge_buckets
__P((DB_MPOOL *, u_int32_t, u_int32_t, u_int32_t));
static int __memp_remove_bucket __P((DB_MPOOL *));
static int __memp_remove_region __P((DB_MPOOL *));
int
__memp_get_bucket(env, mfp, pgno, infopp, hpp, bucketp)
ENV *env;
MPOOLFILE *mfp;
db_pgno_t pgno;
REGINFO **infopp;
DB_MPOOL_HASH **hpp;
u_int32_t *bucketp;
static int
__memp_merge_buckets(dbmp, new_nbuckets, old_bucket, new_bucket)
DB_MPOOL *dbmp;
u_int32_t new_nbuckets, old_bucket, new_bucket;
static int
__memp_add_bucket(dbmp)
DB_MPOOL *dbmp;
static int
__memp_add_region(dbmp)
DB_MPOOL *dbmp;
static int
__memp_remove_bucket(dbmp)
DB_MPOOL *dbmp;
static int
__memp_remove_region(dbmp)
DB_MPOOL *dbmp;
static int
__memp_map_regions(dbmp)
DB_MPOOL *dbmp;
int
__memp_resize(dbmp, gbytes, bytes)
DB_MPOOL *dbmp;
u_int32_t gbytes, bytes;
int
__memp_get_cache_max(dbenv, max_gbytesp, max_bytesp)
DB_ENV *dbenv;
u_int32_t *max_gbytesp, *max_bytesp;
int
__memp_set_cache_max(dbenv, max_gbytes, max_bytes)
DB_ENV *dbenv;
u_int32_t max_gbytes, max_bytes;
