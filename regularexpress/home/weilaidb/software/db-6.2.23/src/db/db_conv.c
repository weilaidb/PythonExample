int
__db_pgin(dbenv, pg, pp, cookie)
DB_ENV *dbenv;
db_pgno_t pg;
void *pp;
DBT *cookie;
int
__db_pgout(dbenv, pg, pp, cookie)
DB_ENV *dbenv;
db_pgno_t pg;
void *pp;
DBT *cookie;
int
__db_decrypt_pg (env, dbp, pagep)
ENV *env;
DB *dbp;
PAGE *pagep;
int
__db_encrypt_and_checksum_pg (env, dbp, pagep)
ENV *env;
DB *dbp;
PAGE *pagep;
void
__db_metaswap(pg)
PAGE *pg;
int
__db_byteswap(dbp, pg, h, pagesize, pgin)
DB *dbp;
db_pgno_t pg;
PAGE *h;
size_t pagesize;
int pgin;
int
__db_pageswap(env, dbp, pp, len, pdata, pgin)
ENV *env;
DB *dbp;
void *pp;
size_t len;
DBT *pdata;
int pgin;
void
__db_recordswap(op, size, hdr, data, pgin)
u_int32_t op;
u_int32_t size;
void *hdr, *data;
u_int32_t pgin;
