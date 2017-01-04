#define REFS_H
struct ref_lock ;
struct ref_update ;
#define REF_ISSYMREF 0x01
#define REF_ISPACKED 0x02
#define REF_ISBROKEN 0x04
typedef int each_ref_fn(const char *refname,
const unsigned char *sha1, int flags, void *cb_data);
extern int head_ref(each_ref_fn, void *);
extern int for_each_ref(each_ref_fn, void *);
extern int for_each_ref_in(const char *, each_ref_fn, void *);
extern int for_each_tag_ref(each_ref_fn, void *);
extern int for_each_branch_ref(each_ref_fn, void *);
extern int for_each_remote_ref(each_ref_fn, void *);
extern int for_each_replace_ref(each_ref_fn, void *);
extern int for_each_glob_ref(each_ref_fn, const char *pattern, void *);
extern int for_each_glob_ref_in(each_ref_fn, const char *pattern, const char* prefix, void *);
extern int head_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data);
extern int for_each_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data);
extern int for_each_ref_in_submodule(const char *submodule, const char *prefix,
each_ref_fn fn, void *cb_data);
extern int for_each_tag_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data);
extern int for_each_branch_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data);
extern int for_each_remote_ref_submodule(const char *submodule, each_ref_fn fn, void *cb_data);
extern int head_ref_namespaced(each_ref_fn fn, void *cb_data);
extern int for_each_namespaced_ref(each_ref_fn fn, void *cb_data);
static inline const char *has_glob_specials(const char *pattern)
extern int for_each_rawref(each_ref_fn, void *);
extern void warn_dangling_symref(FILE *fp, const char *msg_fmt, const char *refname);
extern void warn_dangling_symrefs(FILE *fp, const char *msg_fmt, const struct string_list* refnames);
extern int lock_packed_refs(int flags);
extern void add_packed_ref(const char *refname, const unsigned char *sha1);
extern int commit_packed_refs(void);
extern void rollback_packed_refs(void);
#define PACK_REFS_PRUNE 0x0001
#define PACK_REFS_ALL   0x0002
int pack_refs(unsigned int flags);
extern int repack_without_refs(const char **refnames, int n);
extern int ref_exists(const char *);
extern int peel_ref(const char *refname, unsigned char *sha1);
extern struct ref_lock *lock_ref_sha1(const char *refname, const unsigned char *old_sha1);
#define REF_NODEREF	0x01
extern struct ref_lock *lock_any_ref_for_update(const char *refname,
const unsigned char *old_sha1,
int flags, int *type_p);
extern int close_ref(struct ref_lock *lock);
extern int commit_ref(struct ref_lock *lock);
extern void unlock_ref(struct ref_lock *lock);
extern int write_ref_sha1(struct ref_lock *lock, const unsigned char *sha1, const char *msg);
int log_ref_setup(const char *ref_name, char *logfile, int bufsize);
extern int read_ref_at(const char *refname, unsigned long at_time, int cnt,
unsigned char *sha1, char **msg,
unsigned long *cutoff_time, int *cutoff_tz, int *cutoff_cnt);
typedef int each_reflog_ent_fn(unsigned char *osha1, unsigned char *nsha1, const char *, unsigned long, int, const char *, void *);
int for_each_reflog_ent(const char *refname, each_reflog_ent_fn fn, void *cb_data);
int for_each_reflog_ent_reverse(const char *refname, each_reflog_ent_fn fn, void *cb_data);
extern int for_each_reflog(each_ref_fn, void *);
#define REFNAME_ALLOW_ONELEVEL 1
#define REFNAME_REFSPEC_PATTERN 2
#define REFNAME_DOT_COMPONENT 4
extern int check_refname_format(const char *refname, int flags);
extern const char *prettify_refname(const char *refname);
extern char *shorten_unambiguous_ref(const char *refname, int strict);
extern int rename_ref(const char *oldref, const char *newref, const char *logmsg);
extern int resolve_gitlink_ref(const char *path, const char *refname, unsigned char *sha1);
enum action_on_err ;
int update_ref(const char *action, const char *refname,
const unsigned char *sha1, const unsigned char *oldval,
int flags, enum action_on_err onerr);
int update_refs(const char *action, const struct ref_update **updates,
int n, enum action_on_err onerr);
extern int parse_hide_refs_config(const char *var, const char *value, const char *);
extern int ref_is_hidden(const char *);
