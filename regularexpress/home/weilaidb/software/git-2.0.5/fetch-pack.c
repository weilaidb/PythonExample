static int transfer_unpack_limit = -1;
static int fetch_unpack_limit = -1;
static int unpack_limit = 100;
static int prefer_ofs_delta = 1;
static int no_done;
static int fetch_fsck_objects = -1;
static int transfer_fsck_objects = -1;
static int agent_supported;
static struct lock_file shallow_lock;
static const char *alternate_shallow_file;
#define COMPLETE	(1U << 0)
#define COMMON		(1U << 1)
#define COMMON_REF	(1U << 2)
#define SEEN		(1U << 3)
#define POPPED		(1U << 4)
static int marked;
#define MAX_IN_VAIN 256
static struct prio_queue rev_list = ;
static int non_common_revs, multi_ack, use_sideband, allow_tip_sha1_in_want;
static void rev_list_push(struct commit *commit, int mark)
static int rev_list_insert_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static int clear_marks(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static void mark_common(struct commit *commit,
int ancestors_only, int dont_parse)
static const unsigned char *get_rev(void)
enum ack_type ;
static void consume_shallow_list(struct fetch_pack_args *args, int fd)
static enum ack_type get_ack(int fd, unsigned char *result_sha1)
static void send_request(struct fetch_pack_args *args,
int fd, struct strbuf *buf)
static void insert_one_alternate_ref(const struct ref *ref, void *unused)
#define INITIAL_FLUSH 16
#define PIPESAFE_FLUSH 32
#define LARGE_FLUSH 1024
static int next_flush(struct fetch_pack_args *args, int count)
static int find_common(struct fetch_pack_args *args,
int fd[2], unsigned char *result_sha1,
struct ref *refs)
static struct commit_list *complete;
static int mark_complete(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static void mark_recent_complete_commits(struct fetch_pack_args *args,
unsigned long cutoff)
static void filter_refs(struct fetch_pack_args *args,
struct ref **refs,
struct ref **sought, int nr_sought)
static void mark_alternate_complete(const struct ref *ref, void *unused)
static int everything_local(struct fetch_pack_args *args,
struct ref **refs,
struct ref **sought, int nr_sought)
static int sideband_demux(int in, int out, void *data)
static int get_pack(struct fetch_pack_args *args,
int xd[2], char **pack_lockfile)
static int cmp_ref_by_name(const void *a_, const void *b_)
static struct ref *do_fetch_pack(struct fetch_pack_args *args,
int fd[2],
const struct ref *orig_ref,
struct ref **sought, int nr_sought,
struct shallow_info *si,
char **pack_lockfile)
static int fetch_pack_config(const char *var, const char *value, void *cb)
static void fetch_pack_setup(void)
static int remove_duplicates_in_refs(struct ref **ref, int nr)
static void update_shallow(struct fetch_pack_args *args,
struct ref **sought, int nr_sought,
struct shallow_info *si)
struct ref *fetch_pack(struct fetch_pack_args *args,
int fd[], struct child_process *conn,
const struct ref *ref,
const char *dest,
struct ref **sought, int nr_sought,
struct sha1_array *shallow,
char **pack_lockfile)
