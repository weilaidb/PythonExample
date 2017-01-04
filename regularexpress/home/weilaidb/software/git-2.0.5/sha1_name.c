static int get_sha1_oneline(const char *, unsigned char *, struct commit_list *);
typedef int (*disambiguate_hint_fn)(const unsigned char *, void *);
struct disambiguate_state ;
static void update_candidates(struct disambiguate_state *ds, const unsigned char *current)
static void find_short_object_filename(int len, const char *hex_pfx, struct disambiguate_state *ds)
static int match_sha(unsigned len, const unsigned char *a, const unsigned char *b)
static void unique_in_pack(int len,
const unsigned char *bin_pfx,
struct packed_git *p,
struct disambiguate_state *ds)
static void find_short_packed_object(int len, const unsigned char *bin_pfx,
struct disambiguate_state *ds)
#define SHORT_NAME_NOT_FOUND (-1)
#define SHORT_NAME_AMBIGUOUS (-2)
static int finish_object_disambiguation(struct disambiguate_state *ds,
unsigned char *sha1)
static int disambiguate_commit_only(const unsigned char *sha1, void *cb_data_unused)
static int disambiguate_committish_only(const unsigned char *sha1, void *cb_data_unused)
static int disambiguate_tree_only(const unsigned char *sha1, void *cb_data_unused)
static int disambiguate_treeish_only(const unsigned char *sha1, void *cb_data_unused)
static int disambiguate_blob_only(const unsigned char *sha1, void *cb_data_unused)
static int prepare_prefixes(const char *name, int len,
unsigned char *bin_pfx,
char *hex_pfx)
static int get_short_sha1(const char *name, int len, unsigned char *sha1,
unsigned flags)
int for_each_abbrev(const char *prefix, each_abbrev_fn fn, void *cb_data)
const char *find_unique_abbrev(const unsigned char *sha1, int len)
static int ambiguous_path(const char *path, int len)
static inline int upstream_mark(const char *string, int len)
static int get_sha1_1(const char *name, int len, unsigned char *sha1, unsigned lookup_flags);
static int interpret_nth_prior_checkout(const char *name, int namelen, struct strbuf *buf);
static int get_sha1_basic(const char *str, int len, unsigned char *sha1)
')
static int get_parent(const char *name, int len,
unsigned char *result, int idx)
static int get_nth_ancestor(const char *name, int len,
unsigned char *result, int generation)
struct object *peel_to_type(const char *name, int namelen,
struct object *o, enum object_type expected_type)
static int peel_onion(const char *name, int len, unsigned char *sha1)
')
return -1;
for (sp = name + len - 1; name <= sp; sp--) "))
expected_type = OBJ_COMMIT;
else if (starts_with(sp, "tag}"))
expected_type = OBJ_TAG;
else if (starts_with(sp, "tree}"))
expected_type = OBJ_TREE;
else if (starts_with(sp, "blob}"))
expected_type = OBJ_BLOB;
else if (starts_with(sp, "object}"))
expected_type = OBJ_ANY;
else if (sp[0] == '}')
expected_type = OBJ_NONE;
else if (sp[0] == '/')
expected_type = OBJ_COMMIT;
else
return -1;
if (expected_type == OBJ_COMMIT)
lookup_flags = GET_SHA1_COMMITTISH;
else if (expected_type == OBJ_TREE)
lookup_flags = GET_SHA1_TREEISH;
if (get_sha1_1(name, sp - name - 2, outer, lookup_flags))
return -1;
o = parse_object(outer);
if (!o)
return -1;
if (!expected_type)
o = peel_to_type(name, len, o, expected_type);
if (!o)
return -1;
hashcpy(sha1, o->sha1);
if (sp[0] == '/') ')
return 0;
prefix = xstrndup(sp + 1, name + len - 1 - (sp + 1));
commit_list_insert((struct commit *)o, &list);
ret = get_sha1_oneline(prefix, sha1, list);
free(prefix);
return ret;
}
return 0;
}
static int get_describe_name(const char *name, int len, unsigned char *sha1)
static int get_sha1_1(const char *name, int len, unsigned char *sha1, unsigned lookup_flags)
#define ONELINE_SEEN (1u<<20)
static int handle_one_ref(const char *path,
const unsigned char *sha1, int flag, void *cb_data)
static int get_sha1_oneline(const char *prefix, unsigned char *sha1,
struct commit_list *list)
struct grab_nth_branch_switch_cbdata ;
static int grab_nth_branch_switch(unsigned char *osha1, unsigned char *nsha1,
const char *email, unsigned long timestamp, int tz,
const char *message, void *cb_data)
static int interpret_nth_prior_checkout(const char *name, int namelen,
struct strbuf *buf)
int get_sha1_mb(const char *name, unsigned char *sha1)
static int interpret_empty_at(const char *name, int namelen, int len, struct strbuf *buf)
{
const char *next;
if (len || name[1] == '{')
return -1;
next = memchr(name + len + 1, '@', namelen - len - 1);
if (next && next[1] != '
static int reinterpret(const char *name, int namelen, int len, struct strbuf *buf)
static void set_shortened_ref(struct strbuf *buf, const char *ref)
static const char *get_upstream_branch(const char *branch_buf, int len)
static int interpret_upstream_mark(const char *name, int namelen,
int at, struct strbuf *buf)
int interpret_branch_name(const char *name, int namelen, struct strbuf *buf)
int strbuf_branchname(struct strbuf *sb, const char *name)
int strbuf_check_branch_ref(struct strbuf *sb, const char *name)
int get_sha1(const char *name, unsigned char *sha1)
int get_sha1_committish(const char *name, unsigned char *sha1)
int get_sha1_treeish(const char *name, unsigned char *sha1)
int get_sha1_commit(const char *name, unsigned char *sha1)
int get_sha1_tree(const char *name, unsigned char *sha1)
int get_sha1_blob(const char *name, unsigned char *sha1)
static void diagnose_invalid_sha1_path(const char *prefix,
const char *filename,
const unsigned char *tree_sha1,
const char *object_name,
int object_name_len)
static void diagnose_invalid_index_path(int stage,
const char *prefix,
const char *filename)
static char *resolve_relative_path(const char *rel)
static int get_sha1_with_context_1(const char *name,
unsigned flags,
const char *prefix,
unsigned char *sha1,
struct object_context *oc)
void maybe_die_on_misspelt_object_name(const char *name, const char *prefix)
int get_sha1_with_context(const char *str, unsigned flags, unsigned char *sha1, struct object_context *orc)
