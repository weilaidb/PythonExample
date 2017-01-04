#define REMOTE_H
enum ;
struct remote ;
struct remote *remote_get(const char *name);
struct remote *pushremote_get(const char *name);
int remote_is_configured(const char *name);
typedef int each_remote_fn(struct remote *remote, void *priv);
int for_each_remote(each_remote_fn fn, void *priv);
int remote_has_url(struct remote *remote, const char *url);
struct refspec ;
extern const struct refspec *tag_refspec;
struct ref ;
#define REF_NORMAL	(1u << 0)
#define REF_HEADS	(1u << 1)
#define REF_TAGS	(1u << 2)
extern struct ref *find_ref_by_name(const struct ref *list, const char *name);
struct ref *alloc_ref(const char *name);
struct ref *copy_ref(const struct ref *ref);
struct ref *copy_ref_list(const struct ref *ref);
void sort_ref_list(struct ref **, int (*cmp)(const void *, const void *));
extern int count_refspec_match(const char *, struct ref *refs, struct ref **matched_ref);
int ref_compare_name(const void *, const void *);
int check_ref_type(const struct ref *ref, int flags);
void free_refs(struct ref *ref);
struct sha1_array;
extern struct ref **get_remote_heads(int in, char *src_buf, size_t src_len,
struct ref **list, unsigned int flags,
struct sha1_array *extra_have,
struct sha1_array *shallow);
int resolve_remote_symref(struct ref *ref, struct ref *list);
int ref_newer(const unsigned char *new_sha1, const unsigned char *old_sha1);
struct ref *ref_remove_duplicates(struct ref *ref_map);
int valid_fetch_refspec(const char *refspec);
struct refspec *parse_fetch_refspec(int nr_refspec, const char **refspec);
void free_refspec(int nr_refspec, struct refspec *refspec);
extern int query_refspecs(struct refspec *specs, int nr, struct refspec *query);
char *apply_refspecs(struct refspec *refspecs, int nr_refspec,
const char *name);
int check_push_refs(struct ref *src, int nr_refspec, const char **refspec);
int match_push_refs(struct ref *src, struct ref **dst,
int nr_refspec, const char **refspec, int all);
void set_ref_status_for_push(struct ref *remote_refs, int send_mirror,
int force_update);
int get_fetch_map(const struct ref *remote_refs, const struct refspec *refspec,
struct ref ***tail, int missing_ok);
struct ref *get_remote_ref(const struct ref *remote_refs, const char *name);
int remote_find_tracking(struct remote *remote, struct refspec *refspec);
struct branch ;
struct branch *branch_get(const char *name);
int branch_has_merge_config(struct branch *branch);
int branch_merge_matches(struct branch *, int n, const char *);
enum match_refs_flags ;
int stat_tracking_info(struct branch *branch, int *num_ours, int *num_theirs);
int format_tracking_info(struct branch *branch, struct strbuf *sb);
struct ref *get_local_heads(void);
struct ref *guess_remote_head(const struct ref *head,
const struct ref *refs,
int all);
struct ref *get_stale_heads(struct refspec *refs, int ref_count, struct ref *fetch_map);
#define CAS_OPT_NAME "force-with-lease"
struct push_cas_option ;
extern int parseopt_push_cas_option(const struct option *, const char *arg, int unset);
extern int parse_push_cas_option(struct push_cas_option *, const char *arg, int unset);
extern void clear_cas_option(struct push_cas_option *);
extern int is_empty_cas(const struct push_cas_option *);
void apply_push_cas(struct push_cas_option *, struct remote *, struct ref *);
