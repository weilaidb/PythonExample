struct aa_namespace *root_ns;
const char *profile_mode_names[] = ;
static const char *hname_tail(const char *hname)
static bool policy_init(struct aa_policy *policy, const char *prefix,
const char *name)
static void policy_destroy(struct aa_policy *policy)
static struct aa_policy *__policy_find(struct list_head *head, const char *name)
static struct aa_policy *__policy_strn_find(struct list_head *head,
const char *str, int len)
static const char *hidden_ns_name = "---";
bool aa_ns_visible(struct aa_namespace *curr, struct aa_namespace *view)
const char *aa_ns_name(struct aa_namespace *curr, struct aa_namespace *view)
static struct aa_namespace *alloc_namespace(const char *prefix,
const char *name)
static void free_namespace(struct aa_namespace *ns)
void aa_free_namespace_kref(struct kref *kref)
static struct aa_namespace *__aa_find_namespace(struct list_head *head,
const char *name)
struct aa_namespace *aa_find_namespace(struct aa_namespace *root,
const char *name)
static struct aa_namespace *aa_prepare_namespace(const char *name)
static void __list_add_profile(struct list_head *list,
struct aa_profile *profile)
static void __list_remove_profile(struct aa_profile *profile)
static void __replace_profile(struct aa_profile *old, struct aa_profile *new)
static void __profile_list_release(struct list_head *head);
static void __remove_profile(struct aa_profile *profile)
static void __profile_list_release(struct list_head *head)
static void __ns_list_release(struct list_head *head);
static void destroy_namespace(struct aa_namespace *ns)
static void __remove_namespace(struct aa_namespace *ns)
static void __ns_list_release(struct list_head *head)
int __init aa_alloc_root_ns(void)
void __init aa_free_root_ns(void)
struct aa_profile *aa_alloc_profile(const char *hname)
struct aa_profile *aa_new_null_profile(struct aa_profile *parent, int hat)
static void free_profile(struct aa_profile *profile)
void aa_free_profile_kref(struct kref *kref)
static struct aa_profile *__find_child(struct list_head *head, const char *name)
static struct aa_profile *__strn_find_child(struct list_head *head,
const char *name, int len)
struct aa_profile *aa_find_child(struct aa_profile *parent, const char *name)
static struct aa_policy *__lookup_parent(struct aa_namespace *ns,
const char *hname)
if (!profile)
return &ns->base;
return &profile->base;
}
static struct aa_profile *__lookup_profile(struct aa_policy *base,
const char *hname)
profile = __find_child(&base->profiles, hname);
return profile;
}
struct aa_profile *aa_lookup_profile(struct aa_namespace *ns, const char *hname)
static int replacement_allowed(struct aa_profile *profile, int noreplace,
const char **info)
static void __add_new_profile(struct aa_namespace *ns, struct aa_policy *policy,
struct aa_profile *profile)
static int audit_policy(int op, gfp_t gfp, const char *name, const char *info,
int error)
bool aa_may_manage_policy(int op)
ssize_t aa_replace_profiles(void *udata, size_t size, bool noreplace)
ssize_t aa_remove_profiles(char *fqname, size_t size)
