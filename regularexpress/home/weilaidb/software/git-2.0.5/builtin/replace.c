static const char * const git_replace_usage[] = ;
enum replace_format ;
struct show_data ;
static int show_reference(const char *refname, const unsigned char *sha1,
int flag, void *cb_data)
static int list_replace_refs(const char *pattern, const char *format)
typedef int (*each_replace_name_fn)(const char *name, const char *ref,
const unsigned char *sha1);
static int for_each_replace_name(const char **argv, each_replace_name_fn fn)
static int delete_replace_ref(const char *name, const char *ref,
const unsigned char *sha1)
static int replace_object(const char *object_ref, const char *replace_ref,
int force)
int cmd_replace(int argc, const char **argv, const char *prefix)
