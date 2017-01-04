static int   dump_verbose_stats __P((DB *, CONFIG *));
static int   is_del_workload __P((int));
static int   is_get_workload __P((int));
static int   is_put_workload __P((int));
static int   run_mixed_workload __P((DB *, CONFIG *));
static int   run_std_workload __P((DB *, CONFIG *));
static int   usage __P((void));
static char *workload_str __P((int));
int
b_workload(argc, argv)
int argc;
char *argv[];
#define	GET_PROPORTION 90
#define	PUT_PROPORTION 7
#define	DEL_PROPORTION 3
static int
run_mixed_workload(dbp, config)
DB *dbp;
CONFIG *config;
static int
run_std_workload(dbp, config)
DB *dbp;
CONFIG *config;
static int
dump_verbose_stats(dbp, config)
DB *dbp;
CONFIG *config;
{
struct _stat fstat;
struct stat fstat;
DB_HASH_STAT *hstat;
DB_BTREE_STAT *bstat;
double free_prop;
char path[1024];
printf("Completed workload benchmark.\n");
printf("Configuration summary:\n");
printf("\tworkload type: %d\n", (int)config->workload);
printf("\tdatabase type: %s\n", config->ts);
if (config->cachesz != 0)
printf("\tcache size: %lu\n", (u_long)config->cachesz);
if (config->pagesz != 0)
printf("\tdatabase page size: %lu\n", (u_long)config->pagesz);
printf("\tput element count: %lu\n", (u_long)config->pcount);
if ( is_get_workload(config->workload) == 0)
printf("\tget element count: %lu\n", (u_long)config->gcount);
if (config->orderedkeys)
printf("\tInserting items in order\n");
else if (config->ksize == 0)
printf("\tInserting keys with size 10\n");
else
printf(
"\tInserting keys with size: %lu\n", (u_long)config->ksize);
printf("\tInserting data elements size: %lu\n", (u_long)config->dsize);
if (is_del_workload(config->workload) == 0)
if (is_put_workload(config->workload) == 0)
printf("%s Time spent inserting (%lu) (%s) items: %lu/%lu\n",
config->message[0] == '\0' ? "" : config->message,
(u_long)config->pcount, config->ts,
(u_long)config->put_time.tv_sec, config->put_time.tv_nsec);
if (is_get_workload(config->workload) == 0)
printf("%s Time spent getting (%lu) (%s) items: %lu/%lu\n",
config->message[0] == '\0' ? "" : config->message,
(u_long)config->pcount * ((config->gcount == 0) ?
1 : config->gcount), config->ts,
(u_long)config->get_time.tv_sec, config->get_time.tv_nsec);
if (is_del_workload(config->workload) == 0)
printf("%s Time spent deleting (%lu) (%s) items: %lu/%lu\n",
config->message[0] == '\0' ? "" : config->message,
(u_long)config->pcount, config->ts,
(u_long)config->del_time.tv_sec, config->del_time.tv_nsec);
(void)snprintf(path, sizeof(path),
"%s%c%s", TESTDIR, PATH_SEPARATOR[0], TESTFILE);
if (_stat(path, &fstat) == 0)
static char *
workload_str(workload)
int workload;
static int
is_get_workload(workload)
int workload;
static int
is_put_workload(workload)
int workload;
static int
is_del_workload(workload)
int workload;
static int
usage()
