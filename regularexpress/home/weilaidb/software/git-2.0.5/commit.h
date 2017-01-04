#define COMMIT_H
struct commit_list ;
struct commit ;
extern int save_commit_buffer;
extern const char *commit_type;
extern struct decoration name_decoration;
struct name_decoration ;
struct commit *lookup_commit(const unsigned char *sha1);
struct commit *lookup_commit_reference(const unsigned char *sha1);
struct commit *lookup_commit_reference_gently(const unsigned char *sha1,
int quiet);
struct commit *lookup_commit_reference_by_name(const char *name);
struct commit *lookup_commit_or_die(const unsigned char *sha1, const char *ref_name);
int parse_commit_buffer(struct commit *item, const void *buffer, unsigned long size);
int parse_commit(struct commit *item);
void parse_commit_or_die(struct commit *item);
void set_commit_buffer(struct commit *, void *buffer, unsigned long size);
const void *get_cached_commit_buffer(const struct commit *, unsigned long *size);
const void *get_commit_buffer(const struct commit *, unsigned long *size);
void unuse_commit_buffer(const struct commit *, const void *buffer);
void free_commit_buffer(struct commit *);
const void *detach_commit_buffer(struct commit *, unsigned long *sizep);
int find_commit_subject(const char *commit_buffer, const char **subject);
struct commit_list *commit_list_insert(struct commit *item,
struct commit_list **list);
struct commit_list **commit_list_append(struct commit *commit,
struct commit_list **next);
unsigned commit_list_count(const struct commit_list *l);
struct commit_list *commit_list_insert_by_date(struct commit *item,
struct commit_list **list);
void commit_list_sort_by_date(struct commit_list **list);
struct commit_list *copy_commit_list(struct commit_list *list);
void free_commit_list(struct commit_list *list);
enum cmit_fmt ;
struct pretty_print_context ;
struct userformat_want ;
extern int has_non_ascii(const char *text);
struct rev_info;
extern const char *logmsg_reencode(const struct commit *commit,
char **commit_encoding,
const char *output_encoding);
extern void get_commit_format(const char *arg, struct rev_info *);
extern const char *format_subject(struct strbuf *sb, const char *msg,
const char *line_separator);
extern void userformat_find_requirements(const char *fmt, struct userformat_want *w);
extern void format_commit_message(const struct commit *commit,
const char *format, struct strbuf *sb,
const struct pretty_print_context *context);
extern void pretty_print_commit(struct pretty_print_context *pp,
const struct commit *commit,
struct strbuf *sb);
extern void pp_commit_easy(enum cmit_fmt fmt, const struct commit *commit,
struct strbuf *sb);
void pp_user_info(struct pretty_print_context *pp,
const char *what, struct strbuf *sb,
const char *line, const char *encoding);
void pp_title_line(struct pretty_print_context *pp,
const char **msg_p,
struct strbuf *sb,
const char *encoding,
int need_8bit_cte);
void pp_remainder(struct pretty_print_context *pp,
const char **msg_p,
struct strbuf *sb,
int indent);
struct commit *pop_most_recent_commit(struct commit_list **list,
unsigned int mark);
struct commit *pop_commit(struct commit_list **stack);
void clear_commit_marks(struct commit *commit, unsigned int mark);
void clear_commit_marks_many(int nr, struct commit **commit, unsigned int mark);
void clear_commit_marks_for_object_array(struct object_array *a, unsigned mark);
enum rev_sort_order ;
void sort_in_topological_order(struct commit_list **, enum rev_sort_order);
struct commit_graft ;
typedef int (*each_commit_graft_fn)(const struct commit_graft *, void *);
struct commit_graft *read_graft_line(char *buf, int len);
int register_commit_graft(struct commit_graft *, int);
struct commit_graft *lookup_commit_graft(const unsigned char *sha1);
extern struct commit_list *get_merge_bases(struct commit *rev1, struct commit *rev2, int cleanup);
extern struct commit_list *get_merge_bases_many(struct commit *one, int n, struct commit **twos, int cleanup);
extern struct commit_list *get_octopus_merge_bases(struct commit_list *in);
#define INFINITE_DEPTH 0x7fffffff
struct sha1_array;
struct ref;
extern int register_shallow(const unsigned char *sha1);
extern int unregister_shallow(const unsigned char *sha1);
extern int for_each_commit_graft(each_commit_graft_fn, void *);
extern int is_repository_shallow(void);
extern struct commit_list *get_shallow_commits(struct object_array *heads,
int depth, int shallow_flag, int not_shallow_flag);
extern void check_shallow_file_for_update(void);
extern void set_alternate_shallow_file(const char *path, int override);
extern int write_shallow_commits(struct strbuf *out, int use_pack_protocol,
const struct sha1_array *extra);
extern void setup_alternate_shallow(struct lock_file *shallow_lock,
const char **alternate_shallow_file,
const struct sha1_array *extra);
extern const char *setup_temporary_shallow(const struct sha1_array *extra);
extern void advertise_shallow_grafts(int);
struct shallow_info ;
extern void prepare_shallow_info(struct shallow_info *, struct sha1_array *);
extern void clear_shallow_info(struct shallow_info *);
extern void remove_nonexistent_theirs_shallow(struct shallow_info *);
extern void assign_shallow_commits_to_refs(struct shallow_info *info,
uint32_t **used,
int *ref_status);
extern int delayed_reachability_test(struct shallow_info *si, int c);
extern void prune_shallow(int show_only);
int is_descendant_of(struct commit *, struct commit_list *);
int in_merge_bases(struct commit *, struct commit *);
int in_merge_bases_many(struct commit *, int, struct commit **);
extern int interactive_add(int argc, const char **argv, const char *prefix, int patch);
extern int run_add_interactive(const char *revision, const char *patch_mode,
const struct pathspec *pathspec);
static inline int single_parent(struct commit *commit)
struct commit_list *reduce_heads(struct commit_list *heads);
struct commit_extra_header ;
extern void append_merge_tag_headers(struct commit_list *parents,
struct commit_extra_header ***tail);
extern int commit_tree(const char *msg, size_t msg_len,
const unsigned char *tree,
struct commit_list *parents, unsigned char *ret,
const char *author, const char *sign_commit);
extern int commit_tree_extended(const char *msg, size_t msg_len,
const unsigned char *tree,
struct commit_list *parents, unsigned char *ret,
const char *author, const char *sign_commit,
struct commit_extra_header *);
extern struct commit_extra_header *read_commit_extra_headers(struct commit *, const char **);
extern void free_commit_extra_headers(struct commit_extra_header *extra);
struct merge_remote_desc ;
#define merge_remote_util(commit) ((struct merge_remote_desc *)((commit)->util))
struct commit *get_merge_parent(const char *name);
extern int parse_signed_commit(const struct commit *commit,
struct strbuf *message, struct strbuf *signature);
extern void print_commit_list(struct commit_list *list,
const char *format_cur,
const char *format_last);
extern void check_commit_signature(const struct commit* commit, struct signature_check *sigc);
int compare_commits_by_commit_date(const void *a_, const void *b_, void *unused);
LAST_ARG_MUST_BE_NULL
extern int run_commit_hook(int editor_is_used, const char *index_file, const char *name, ...);
