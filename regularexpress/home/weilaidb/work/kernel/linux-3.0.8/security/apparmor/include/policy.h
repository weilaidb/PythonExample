#define __AA_POLICY_H
extern const char *profile_mode_names[];
#define APPARMOR_NAMES_MAX_INDEX 3
#define COMPLAIN_MODE(_profile)	\
((aa_g_profile_mode == APPARMOR_COMPLAIN) || \
((_profile)->mode == APPARMOR_COMPLAIN))
#define KILL_MODE(_profile) \
((aa_g_profile_mode == APPARMOR_KILL) || \
((_profile)->mode == APPARMOR_KILL))
#define PROFILE_IS_HAT(_profile) ((_profile)->flags & PFLAG_HAT)
enum profile_mode ;
enum profile_flags ;
struct aa_profile;
struct aa_policy ;
struct aa_ns_acct ;
struct aa_namespace ;
struct aa_profile ;
extern struct aa_namespace *root_ns;
extern enum profile_mode aa_g_profile_mode;
void aa_add_profile(struct aa_policy *common, struct aa_profile *profile);
bool aa_ns_visible(struct aa_namespace *curr, struct aa_namespace *view);
const char *aa_ns_name(struct aa_namespace *parent, struct aa_namespace *child);
int aa_alloc_root_ns(void);
void aa_free_root_ns(void);
void aa_free_namespace_kref(struct kref *kref);
struct aa_namespace *aa_find_namespace(struct aa_namespace *root,
const char *name);
static inline struct aa_policy *aa_get_common(struct aa_policy *c)
static inline struct aa_namespace *aa_get_namespace(struct aa_namespace *ns)
static inline void aa_put_namespace(struct aa_namespace *ns)
struct aa_profile *aa_alloc_profile(const char *name);
struct aa_profile *aa_new_null_profile(struct aa_profile *parent, int hat);
void aa_free_profile_kref(struct kref *kref);
struct aa_profile *aa_find_child(struct aa_profile *parent, const char *name);
struct aa_profile *aa_lookup_profile(struct aa_namespace *ns, const char *name);
struct aa_profile *aa_match_profile(struct aa_namespace *ns, const char *name);
ssize_t aa_replace_profiles(void *udata, size_t size, bool noreplace);
ssize_t aa_remove_profiles(char *name, size_t size);
#define PROF_ADD 1
#define PROF_REPLACE 0
#define unconfined(X) ((X)->flags & PFLAG_UNCONFINED)
static inline struct aa_profile *aa_newest_version(struct aa_profile *profile)
static inline struct aa_profile *aa_get_profile(struct aa_profile *p)
static inline void aa_put_profile(struct aa_profile *p)
static inline int AUDIT_MODE(struct aa_profile *profile)
bool aa_may_manage_policy(int op);
