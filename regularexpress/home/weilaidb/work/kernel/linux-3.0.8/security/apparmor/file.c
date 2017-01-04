struct file_perms nullperms;
static void audit_file_mask(struct audit_buffer *ab, u32 mask)
static void file_audit_cb(struct audit_buffer *ab, void *va)
int aa_audit_file(struct aa_profile *profile, struct file_perms *perms,
gfp_t gfp, int op, u32 request, const char *name,
const char *target, uid_t ouid, const char *info, int error)
static u32 map_old_perms(u32 old)
static struct file_perms compute_perms(struct aa_dfa *dfa, unsigned int state,
struct path_cond *cond)
unsigned int aa_str_perms(struct aa_dfa *dfa, unsigned int start,
const char *name, struct path_cond *cond,
struct file_perms *perms)
static inline bool is_deleted(struct dentry *dentry)
int aa_path_perm(int op, struct aa_profile *profile, struct path *path,
int flags, u32 request, struct path_cond *cond)
static inline bool xindex_is_subset(u32 link, u32 target)
int aa_path_link(struct aa_profile *profile, struct dentry *old_dentry,
struct path *new_dir, struct dentry *new_dentry)
int aa_file_perm(int op, struct aa_profile *profile, struct file *file,
u32 request)
