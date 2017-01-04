enum map_direction ;
static struct refspec s_tag_refspec =
static void add_merge(struct branch *branch, const char *name)
static struct branch *make_branch(const char *name, int len)
static struct rewrite *make_rewrite(struct rewrites *r, const char *base, int len)
static void add_instead_of(struct rewrite *rewrite, const char *instead_of)
static void read_remotes_file(struct remote *remote)
static void read_branches_file(struct remote *remote)
static int handle_config(const char *key, const char *value, void *cb)
static void alias_all_urls(void)
static void read_config(void)
static void free_refspecs(struct refspec *refspec, int nr_refspec)
static struct refspec *parse_refspec_internal(int nr_refspec, const char **refspec, int fetch, int verify)
int valid_fetch_refspec(const char *fetch_refspec_str)
struct refspec *parse_fetch_refspec(int nr_refspec, const char **refspec)
static struct refspec *parse_push_refspec(int nr_refspec, const char **refspec)
void free_refspec(int nr_refspec, struct refspec *refspec)
static int valid_remote_nick(const char *name)
static struct remote *remote_get_1(const char *name, const char *pushremote_name)
struct remote *remote_get(const char *name)
struct remote *pushremote_get(const char *name)
int remote_is_configured(const char *name)
int for_each_remote(each_remote_fn fn, void *priv)
static void handle_duplicate(struct ref *ref1, struct ref *ref2)
struct ref *ref_remove_duplicates(struct ref *ref_map)
int remote_has_url(struct remote *remote, const char *url)
static int match_name_with_pattern(const char *key, const char *name,
const char *value, char **result)
static void query_refspecs_multiple(struct refspec *refs, int ref_count, struct refspec *query, struct string_list *results)
int query_refspecs(struct refspec *refs, int ref_count, struct refspec *query)
char *apply_refspecs(struct refspec *refspecs, int nr_refspec,
const char *name)
int remote_find_tracking(struct remote *remote, struct refspec *refspec)
static struct ref *alloc_ref_with_prefix(const char *prefix, size_t prefixlen,
const char *name)
struct ref *alloc_ref(const char *name)
struct ref *copy_ref(const struct ref *ref)
struct ref *copy_ref_list(const struct ref *ref)
static void free_ref(struct ref *ref)
void free_refs(struct ref *ref)
int ref_compare_name(const void *va, const void *vb)
static void *ref_list_get_next(const void *a)
static void ref_list_set_next(void *a, void *next)
void sort_ref_list(struct ref **l, int (*cmp)(const void *, const void *))
int count_refspec_match(const char *pattern,
struct ref *refs,
struct ref **matched_ref)
static void tail_link_ref(struct ref *ref, struct ref ***tail)
static struct ref *alloc_delete_ref(void)
static int try_explicit_object_name(const char *name,
struct ref **match)
static struct ref *make_linked_ref(const char *name, struct ref ***tail)
static char *guess_ref(const char *name, struct ref *peer)
static int match_explicit_lhs(struct ref *src,
struct refspec *rs,
struct ref **match,
int *allocated_match)
static int match_explicit(struct ref *src, struct ref *dst,
struct ref ***dst_tail,
struct refspec *rs)
static int match_explicit_refs(struct ref *src, struct ref *dst,
struct ref ***dst_tail, struct refspec *rs,
int rs_nr)
static char *get_ref_match(const struct refspec *rs, int rs_nr, const struct ref *ref,
int send_mirror, int direction, const struct refspec **ret_pat)
static struct ref **tail_ref(struct ref **head)
struct tips ;
static void add_to_tips(struct tips *tips, const unsigned char *sha1)
static void add_missing_tags(struct ref *src, struct ref **dst, struct ref ***dst_tail)
struct ref *find_ref_by_name(const struct ref *list, const char *name)
static void prepare_ref_index(struct string_list *ref_index, struct ref *ref)
int check_push_refs(struct ref *src, int nr_refspec, const char **refspec_names)
int match_push_refs(struct ref *src, struct ref **dst,
int nr_refspec, const char **refspec, int flags)
void set_ref_status_for_push(struct ref *remote_refs, int send_mirror,
int force_update)
struct branch *branch_get(const char *name)
int branch_has_merge_config(struct branch *branch)
int branch_merge_matches(struct branch *branch,
int i,
const char *refname)
static int ignore_symref_update(const char *refname)
static struct ref *get_expanded_map(const struct ref *remote_refs,
const struct refspec *refspec)
static const struct ref *find_ref_by_name_abbrev(const struct ref *refs, const char *name)
struct ref *get_remote_ref(const struct ref *remote_refs, const char *name)
static struct ref *get_local_ref(const char *name)
int get_fetch_map(const struct ref *remote_refs,
const struct refspec *refspec,
struct ref ***tail,
int missing_ok)
int resolve_remote_symref(struct ref *ref, struct ref *list)
static void unmark_and_free(struct commit_list *list, unsigned int mark)
int ref_newer(const unsigned char *new_sha1, const unsigned char *old_sha1)
int stat_tracking_info(struct branch *branch, int *num_ours, int *num_theirs)
int format_tracking_info(struct branch *branch, struct strbuf *sb)
static int one_local_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
struct ref *get_local_heads(void)
struct ref *guess_remote_head(const struct ref *head,
const struct ref *refs,
int all)
struct stale_heads_info ;
static int get_stale_heads_cb(const char *refname,
const unsigned char *sha1, int flags, void *cb_data)
struct ref *get_stale_heads(struct refspec *refs, int ref_count, struct ref *fetch_map)
void clear_cas_option(struct push_cas_option *cas)
static struct push_cas *add_cas_entry(struct push_cas_option *cas,
const char *refname,
size_t refnamelen)
int parse_push_cas_option(struct push_cas_option *cas, const char *arg, int unset)
int parseopt_push_cas_option(const struct option *opt, const char *arg, int unset)
int is_empty_cas(const struct push_cas_option *cas)
static int remote_tracking(struct remote *remote, const char *refname,
unsigned char sha1[20])
static void apply_cas(struct push_cas_option *cas,
struct remote *remote,
struct ref *ref)
void apply_push_cas(struct push_cas_option *cas,
struct remote *remote,
struct ref *remote_refs)
