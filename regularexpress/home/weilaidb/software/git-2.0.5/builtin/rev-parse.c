#define DO_REVS		1
#define DO_NOREV	2
#define DO_FLAGS	4
#define DO_NONFLAGS	8
static int filter = ~0;
static const char *def;
#define NORMAL 0
#define REVERSED 1
static int show_type = NORMAL;
#define SHOW_SYMBOLIC_ASIS 1
#define SHOW_SYMBOLIC_FULL 2
static int symbolic;
static int abbrev;
static int abbrev_ref;
static int abbrev_ref_strict;
static int output_sq;
static int stuck_long;
static struct string_list *ref_excludes;
static int is_rev_argument(const char *arg)
static void show(const char *arg)
static void show_with_type(int type, const char *arg)
static void show_rev(int type, const unsigned char *sha1, const char *name)
static int show_flag(const char *arg)
static int show_default(void)
static int show_reference(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static int anti_reference(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static int show_abbrev(const unsigned char *sha1, void *cb_data)
static void show_datestring(const char *flag, const char *datestr)
static int show_file(const char *arg, int output_prefix)
static int try_difference(const char *arg)
static int try_parent_shorthands(const char *arg)
static int parseopt_dump(const struct option *o, const char *arg, int unset)
static const char *skipspaces(const char *s)
static int cmd_parseopt(int argc, const char **argv, const char *prefix)
static int cmd_sq_quote(int argc, const char **argv)
static void die_no_single_rev(int quiet)
static const char builtin_rev_parse_usage[] =
N_("git rev-parse --parseopt [options] -- [<args>...]\n"
"   or: git rev-parse --sq-quote [<arg>...]\n"
"   or: git rev-parse [options] [<arg>...]\n"
"\n"
"Run \"git rev-parse --parseopt -h\" for more information on the first usage.");
int cmd_rev_parse(int argc, const char **argv, const char *prefix)
