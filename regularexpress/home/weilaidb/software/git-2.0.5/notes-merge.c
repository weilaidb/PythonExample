struct notes_merge_pair ;
void init_notes_merge_options(struct notes_merge_options *o)
static int path_to_sha1(const char *path, unsigned char *sha1)
static int verify_notes_filepair(struct diff_filepair *p, unsigned char *sha1)
static struct notes_merge_pair *find_notes_merge_pair_pos(
struct notes_merge_pair *list, int len, unsigned char *obj,
int insert_new, int *occupied)
static unsigned char uninitialized[20] =
"\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff" \
"\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff";
static struct notes_merge_pair *diff_tree_remote(struct notes_merge_options *o,
const unsigned char *base,
const unsigned char *remote,
int *num_changes)
static void diff_tree_local(struct notes_merge_options *o,
struct notes_merge_pair *changes, int len,
const unsigned char *base,
const unsigned char *local)
static void check_notes_merge_worktree(struct notes_merge_options *o)
static void write_buf_to_worktree(const unsigned char *obj,
const char *buf, unsigned long size)
static void write_note_to_worktree(const unsigned char *obj,
const unsigned char *note)
static int ll_merge_in_worktree(struct notes_merge_options *o,
struct notes_merge_pair *p)
static int merge_one_change_manual(struct notes_merge_options *o,
struct notes_merge_pair *p,
struct notes_tree *t)
static int merge_one_change(struct notes_merge_options *o,
struct notes_merge_pair *p, struct notes_tree *t)
static int merge_changes(struct notes_merge_options *o,
struct notes_merge_pair *changes, int *num_changes,
struct notes_tree *t)
static int merge_from_diffs(struct notes_merge_options *o,
const unsigned char *base,
const unsigned char *local,
const unsigned char *remote, struct notes_tree *t)
int notes_merge(struct notes_merge_options *o,
struct notes_tree *local_tree,
unsigned char *result_sha1)
int notes_merge_commit(struct notes_merge_options *o,
struct notes_tree *partial_tree,
struct commit *partial_commit,
unsigned char *result_sha1)
int notes_merge_abort(struct notes_merge_options *o)
