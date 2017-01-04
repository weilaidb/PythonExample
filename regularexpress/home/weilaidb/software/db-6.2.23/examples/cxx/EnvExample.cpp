using std::ostream;
using std::cout;
using std::cerr;
void db_setup(const char *, const char *, ostream&);
void db_teardown(const char *, const char *, ostream&);
static int usage();
const char *progname = "EnvExample";
int
main(int argc, char *argv[])
void
db_setup(const char *home, const char *data_dir, ostream& err_stream)
void
db_teardown(const char *home, const char *data_dir, ostream& err_stream)
static int
usage()
