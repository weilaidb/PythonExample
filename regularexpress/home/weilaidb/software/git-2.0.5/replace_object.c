static struct replace_object  **replace_object;
static int replace_object_alloc, replace_object_nr;
static const unsigned char *replace_sha1_access(size_t index, void *table)
static int replace_object_pos(const unsigned char *sha1)
static int register_replace_object(struct replace_object *replace,
int ignore_dups)
static int register_replace_ref(const char *refname,
const unsigned char *sha1,
int flag, void *cb_data)
static void prepare_replace_object(void)
#define MAXREPLACEDEPTH 5
const unsigned char *do_lookup_replace_object(const unsigned char *sha1)
