#define DIFF_NO_INDEX_EXPLICIT 1
#define DIFF_NO_INDEX_IMPLICIT 2
struct blobinfo ;
static const char builtin_diff_usage[] =
"git diff [<options>] [<commit> [<commit>]] [--] [<path>...]";
static void stuff_change(struct diff_options *opt,
unsigned old_mode, unsigned new_mode,
const unsigned char *old_sha1,
const unsigned char *new_sha1,
int old_sha1_valid,
int new_sha1_valid,
const char *old_name,
const char *new_name)
static int builtin_diff_b_f(struct rev_info *revs,
int argc, const char **argv,
struct blobinfo *blob)
static int builtin_diff_blobs(struct rev_info *revs,
int argc, const char **argv,
struct blobinfo *blob)
static int builtin_diff_index(struct rev_info *revs,
int argc, const char **argv)
static int builtin_diff_tree(struct rev_info *revs,
int argc, const char **argv,
struct object_array_entry *ent0,
struct object_array_entry *ent1)
static int builtin_diff_combined(struct rev_info *revs,
int argc, const char **argv,
struct object_array_entry *ent,
int ents)
static void refresh_index_quietly(void)
static int builtin_diff_files(struct rev_info *revs, int argc, const char **argv)
int cmd_diff(int argc, const char **argv, const char *prefix)
