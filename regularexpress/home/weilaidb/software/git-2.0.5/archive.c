static char const * const archive_usage[] = ;
static const struct archiver **archivers;
static int nr_archivers;
static int alloc_archivers;
static int remote_allow_unreachable;
void register_archiver(struct archiver *ar)
static void format_subst(const struct commit *commit,
const char *src, size_t len,
struct strbuf *buf)
void *sha1_file_to_archive(const struct archiver_args *args,
const char *path, const unsigned char *sha1,
unsigned int mode, enum object_type *type,
unsigned long *sizep)
static void setup_archive_check(struct git_attr_check *check)
struct archiver_context ;
static int write_archive_entry(const unsigned char *sha1, const char *base,
int baselen, const char *filename, unsigned mode, int stage,
void *context)
int write_archive_entries(struct archiver_args *args,
write_archive_entry_fn_t write_entry)
static const struct archiver *lookup_archiver(const char *name)
static int reject_entry(const unsigned char *sha1, const char *base,
int baselen, const char *filename, unsigned mode,
int stage, void *context)
static int path_exists(struct tree *tree, const char *path)
static void parse_pathspec_arg(const char **pathspec,
struct archiver_args *ar_args)
static void parse_treeish_arg(const char **argv,
struct archiver_args *ar_args, const char *prefix,
int remote)
#define OPT__COMPR(s, v, h, p) \
#define OPT__COMPR_HIDDEN(s, v, p) \
static int parse_archive_args(int argc, const char **argv,
const struct archiver **ar, struct archiver_args *args,
const char *name_hint, int is_remote)
static int git_default_archive_config(const char *var, const char *value,
void *cb)
int write_archive(int argc, const char **argv, const char *prefix,
int setup_prefix, const char *name_hint, int remote)
static int match_extension(const char *filename, const char *ext)
const char *archive_format_from_filename(const char *filename)
