extern int getopt(int, char * const *, const char *);
int db_init __P((const char *, u_int32_t, int));
int main __P((int, char *[]));
int usage __P((void));
DB_ENV	 *dbenv;
const char
*progname = "ex_lock";
int
main(argc, argv)
int argc;
char *argv[];
int
db_init(home, maxlocks, do_unlink)
const char *home;
u_int32_t maxlocks;
int do_unlink;
int
usage()
