#if DB_VERSION_MAJOR > 4 || DB_VERSION_MAJOR == 4 && DB_VERSION_MINOR > 0
#undef	MEGABYTE
#define	MEGABYTE	(1024 * 1024)
u_int32_t bulkbufsize = 4 * MEGABYTE;
u_int32_t cachesize = 32 * MEGABYTE;
u_int32_t datasize = 32;
u_int32_t keysize = 8;
u_int32_t logbufsize = 8 * MEGABYTE;
u_int32_t numitems;
u_int32_t pagesize = 32 * 1024;
FILE *fp;
static void op_ds __P((u_int, int));
static void op_ds_bulk __P((u_int, u_int *));
static void op_tds __P((u_int, int, u_int32_t, u_int32_t));
static int  usage __P((void));
static void
op_ds(u_int ops, int update)
static void
op_ds_bulk(u_int ops, u_int *totalp)
static void
op_tds(u_int ops, int update, u_int32_t env_flags, u_int32_t log_flags)
#define	DEFAULT_OPS	1000000
int
b_inmem(int argc, char *argv[])
static int
usage()
int
b_inmem(int argc, char *argv[])
