static int is_shallow = -1;
static struct stat_validity shallow_stat;
static char *alternate_shallow_file;
void set_alternate_shallow_file(const char *path, int override)
int register_shallow(const unsigned char *sha1)
int is_repository_shallow(void)
struct commit_list *get_shallow_commits(struct object_array *heads, int depth,
int shallow_flag, int not_shallow_flag)
void check_shallow_file_for_update(void)
#define SEEN_ONLY 1
#define VERBOSE   2
struct write_shallow_data ;
static int write_one_shallow(const struct commit_graft *graft, void *cb_data)
static int write_shallow_commits_1(struct strbuf *out, int use_pack_protocol,
const struct sha1_array *extra,
unsigned flags)
int write_shallow_commits(struct strbuf *out, int use_pack_protocol,
const struct sha1_array *extra)
static struct strbuf temporary_shallow = STRBUF_INIT;
static void remove_temporary_shallow(void)
static void remove_temporary_shallow_on_signal(int signo)
const char *setup_temporary_shallow(const struct sha1_array *extra)
void setup_alternate_shallow(struct lock_file *shallow_lock,
const char **alternate_shallow_file,
const struct sha1_array *extra)
static int advertise_shallow_grafts_cb(const struct commit_graft *graft, void *cb)
void advertise_shallow_grafts(int fd)
void prune_shallow(int show_only)
#define TRACE_KEY "GIT_TRACE_SHALLOW"
void prepare_shallow_info(struct shallow_info *info, struct sha1_array *sa)
void clear_shallow_info(struct shallow_info *info)
void remove_nonexistent_theirs_shallow(struct shallow_info *info)
define_commit_slab(ref_bitmap, uint32_t *);
struct paint_info ;
static uint32_t *paint_alloc(struct paint_info *info)
static void paint_down(struct paint_info *info, const unsigned char *sha1,
int id)
static int mark_uninteresting(const char *refname,
const unsigned char *sha1,
int flags, void *cb_data)
static void post_assign_shallow(struct shallow_info *info,
struct ref_bitmap *ref_bitmap,
int *ref_status);
void assign_shallow_commits_to_refs(struct shallow_info *info,
uint32_t **used, int *ref_status)
struct commit_array ;
static int add_ref(const char *refname,
const unsigned char *sha1, int flags, void *cb_data)
static void update_refstatus(int *ref_status, int nr, uint32_t *bitmap)
static void post_assign_shallow(struct shallow_info *info,
struct ref_bitmap *ref_bitmap,
int *ref_status)
int delayed_reachability_test(struct shallow_info *si, int c)
