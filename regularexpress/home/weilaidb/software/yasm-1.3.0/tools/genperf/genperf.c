typedef STAILQ_HEAD(slist, sval) slist;
typedef struct sval  sval;
typedef STAILQ_HEAD(keyword_list, keyword) keyword_list;
typedef struct keyword  keyword;
static unsigned int cur_line = 1;
static int errors = 0;
static void
report_error(const char *fmt, ...)
void
yasm__fatal(const char *message, ...)
static void
make_c_tab(
FILE *f,
bstuff *tab,
ub4 smax,
ub4 blen,
ub4 *scramble)
{
ub4   i;
if (blen >= USE_SCRAMBLE)
static void
perfect_gen(FILE *out, const char *lookup_function_name,
const char *struct_name, keyword_list *kws,
const char *filename)
int
main(int argc, char *argv[])
