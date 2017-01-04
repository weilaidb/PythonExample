void aa_free_domain_entries(struct aa_domain *domain)
static int may_change_ptraced_domain(struct task_struct *task,
struct aa_profile *to_profile)
static struct file_perms change_profile_perms(struct aa_profile *profile,
struct aa_namespace *ns,
const char *name, u32 request,
unsigned int start)
static struct aa_profile *__attach_match(const char *name,
struct list_head *head)
static struct aa_profile *find_attach(struct aa_namespace *ns,
struct list_head *list, const char *name)
static const char *separate_fqname(const char *fqname, const char **ns_name)
static const char *next_name(int xtype, const char *name)
static struct aa_profile *x_table_lookup(struct aa_profile *profile, u32 xindex)
static struct aa_profile *x_to_profile(struct aa_profile *profile,
const char *name, u32 xindex)
int apparmor_bprm_set_creds(struct linux_binprm *bprm)
int apparmor_bprm_secureexec(struct linux_binprm *bprm)
void apparmor_bprm_committing_creds(struct linux_binprm *bprm)
void apparmor_bprm_committed_creds(struct linux_binprm *bprm)
static char *new_compound_name(const char *n1, const char *n2)
int aa_change_hat(const char *hats[], int count, u64 token, bool permtest)
int aa_change_profile(const char *ns_name, const char *hname, bool onexec,
bool permtest)
