struct connectivity_progress ;
static void update_progress(struct connectivity_progress *cp)
static void process_blob(struct blob *blob,
struct object_array *p,
struct name_path *path,
const char *name,
struct connectivity_progress *cp)
static void process_gitlink(const unsigned char *sha1,
struct object_array *p,
struct name_path *path,
const char *name)
static void process_tree(struct tree *tree,
struct object_array *p,
struct name_path *path,
const char *name,
struct connectivity_progress *cp)
static void process_tag(struct tag *tag, struct object_array *p,
const char *name, struct connectivity_progress *cp)
static void walk_commit_list(struct rev_info *revs,
struct connectivity_progress *cp)
static int add_one_reflog_ent(unsigned char *osha1, unsigned char *nsha1,
const char *email, unsigned long timestamp, int tz,
const char *message, void *cb_data)
static int add_one_ref(const char *path, const unsigned char *sha1, int flag, void *cb_data)
static int add_one_reflog(const char *path, const unsigned char *sha1, int flag, void *cb_data)
static void add_one_tree(const unsigned char *sha1, struct rev_info *revs)
static void add_cache_tree(struct cache_tree *it, struct rev_info *revs)
static void add_cache_refs(struct rev_info *revs)
void mark_reachable_objects(struct rev_info *revs, int mark_reflog,
struct progress *progress)
