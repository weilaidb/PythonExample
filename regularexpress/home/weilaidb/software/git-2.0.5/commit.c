static struct commit_extra_header *read_commit_extra_header_lines(const char *buf, size_t len, const char **);
int save_commit_buffer = 1;
const char *commit_type = "commit";
struct commit *lookup_commit_reference_gently(const unsigned char *sha1,
int quiet)
struct commit *lookup_commit_reference(const unsigned char *sha1)
struct commit *lookup_commit_or_die(const unsigned char *sha1, const char *ref_name)
struct commit *lookup_commit(const unsigned char *sha1)
struct commit *lookup_commit_reference_by_name(const char *name)
static unsigned long parse_commit_date(const char *buf, const char *tail)
static struct commit_graft **commit_graft;
static int commit_graft_alloc, commit_graft_nr;
static const unsigned char *commit_graft_sha1_access(size_t index, void *table)
static int commit_graft_pos(const unsigned char *sha1)
int register_commit_graft(struct commit_graft *graft, int ignore_dups)
struct commit_graft *read_graft_line(char *buf, int len)
static int read_graft_file(const char *graft_file)
static void prepare_commit_graft(void)
struct commit_graft *lookup_commit_graft(const unsigned char *sha1)
int for_each_commit_graft(each_commit_graft_fn fn, void *cb_data)
int unregister_shallow(const unsigned char *sha1)
struct commit_buffer ;
define_commit_slab(buffer_slab, struct commit_buffer);
static struct buffer_slab buffer_slab = COMMIT_SLAB_INIT(1, buffer_slab);
void set_commit_buffer(struct commit *commit, void *buffer, unsigned long size)
const void *get_cached_commit_buffer(const struct commit *commit, unsigned long *sizep)
const void *get_commit_buffer(const struct commit *commit, unsigned long *sizep)
void unuse_commit_buffer(const struct commit *commit, const void *buffer)
void free_commit_buffer(struct commit *commit)
const void *detach_commit_buffer(struct commit *commit, unsigned long *sizep)
int parse_commit_buffer(struct commit *item, const void *buffer, unsigned long size)
int parse_commit(struct commit *item)
void parse_commit_or_die(struct commit *item)
int find_commit_subject(const char *commit_buffer, const char **subject)
struct commit_list *commit_list_insert(struct commit *item, struct commit_list **list_p)
unsigned commit_list_count(const struct commit_list *l)
struct commit_list *copy_commit_list(struct commit_list *list)
void free_commit_list(struct commit_list *list)
struct commit_list * commit_list_insert_by_date(struct commit *item, struct commit_list **list)
static int commit_list_compare_by_date(const void *a, const void *b)
static void *commit_list_get_next(const void *a)
static void commit_list_set_next(void *a, void *next)
void commit_list_sort_by_date(struct commit_list **list)
struct commit *pop_most_recent_commit(struct commit_list **list,
unsigned int mark)
static void clear_commit_marks_1(struct commit_list **plist,
struct commit *commit, unsigned int mark)
void clear_commit_marks_many(int nr, struct commit **commit, unsigned int mark)
void clear_commit_marks(struct commit *commit, unsigned int mark)
void clear_commit_marks_for_object_array(struct object_array *a, unsigned mark)
struct commit *pop_commit(struct commit_list **stack)
define_commit_slab(indegree_slab, int);
define_commit_slab(author_date_slab, unsigned long);
static void record_author_date(struct author_date_slab *author_date,
struct commit *commit)
static int compare_commits_by_author_date(const void *a_, const void *b_,
void *cb_data)
int compare_commits_by_commit_date(const void *a_, const void *b_, void *unused)
void sort_in_topological_order(struct commit_list **list, enum rev_sort_order sort_order)
#define PARENT1		(1u<<16)
#define PARENT2		(1u<<17)
#define STALE		(1u<<18)
#define RESULT		(1u<<19)
static const unsigned all_flags = (PARENT1 | PARENT2 | STALE | RESULT);
static struct commit *interesting(struct commit_list *list)
static struct commit_list *paint_down_to_common(struct commit *one, int n, struct commit **twos)
static struct commit_list *merge_bases_many(struct commit *one, int n, struct commit **twos)
struct commit_list *get_octopus_merge_bases(struct commit_list *in)
static int remove_redundant(struct commit **array, int cnt)
struct commit_list *get_merge_bases_many(struct commit *one,
int n,
struct commit **twos,
int cleanup)
struct commit_list *get_merge_bases(struct commit *one, struct commit *two,
int cleanup)
int is_descendant_of(struct commit *commit, struct commit_list *with_commit)
int in_merge_bases_many(struct commit *commit, int nr_reference, struct commit **reference)
int in_merge_bases(struct commit *commit, struct commit *reference)
struct commit_list *reduce_heads(struct commit_list *heads)
static const char gpg_sig_header[] = "gpgsig";
static const int gpg_sig_header_len = sizeof(gpg_sig_header) - 1;
static int do_sign_commit(struct strbuf *buf, const char *keyid)
int parse_signed_commit(const struct commit *commit,
struct strbuf *payload, struct strbuf *signature)
static void handle_signed_tag(struct commit *parent, struct commit_extra_header ***tail)
static struct  sigcheck_gpg_status[] = ;
static void parse_gpg_output(struct signature_check *sigc)
void check_commit_signature(const struct commit* commit, struct signature_check *sigc)
void append_merge_tag_headers(struct commit_list *parents,
struct commit_extra_header ***tail)
static void add_extra_header(struct strbuf *buffer,
struct commit_extra_header *extra)
struct commit_extra_header *read_commit_extra_headers(struct commit *commit,
const char **exclude)
static inline int standard_header_field(const char *field, size_t len)
static int excluded_header_field(const char *field, size_t len, const char **exclude)
static struct commit_extra_header *read_commit_extra_header_lines(
const char *buffer, size_t size,
const char **exclude)
void free_commit_extra_headers(struct commit_extra_header *extra)
int commit_tree(const char *msg, size_t msg_len,
const unsigned char *tree,
struct commit_list *parents, unsigned char *ret,
const char *author, const char *sign_commit)
static int find_invalid_utf8(const char *buf, int len)
static int verify_utf8(struct strbuf *buf)
static const char commit_utf8_warn[] =
"Warning: commit message did not conform to UTF-8.\n"
"You may want to amend it after fixing the message, or set the config\n"
"variable i18n.commitencoding to the encoding your project uses.\n";
int commit_tree_extended(const char *msg, size_t msg_len,
const unsigned char *tree,
struct commit_list *parents, unsigned char *ret,
const char *author, const char *sign_commit,
struct commit_extra_header *extra)
struct commit *get_merge_parent(const char *name)
struct commit_list **commit_list_append(struct commit *commit,
struct commit_list **next)
void print_commit_list(struct commit_list *list,
const char *format_cur,
const char *format_last)
