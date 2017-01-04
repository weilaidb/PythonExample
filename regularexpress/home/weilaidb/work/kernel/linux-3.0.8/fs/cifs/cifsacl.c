static const struct cifs_sid sid_everyone = ;
static const struct cifs_sid sid_authusers = ;
static const struct cifs_sid sid_user = ;
const struct cred *root_cred;
static void
shrink_idmap_tree(struct rb_root *root, int nr_to_scan, int *nr_rem,
int *nr_del)
static int
cifs_idmap_shrinker(struct shrinker *shrink, struct shrink_control *sc)
static struct shrinker cifs_shrinker = ;
static int
cifs_idmap_key_instantiate(struct key *key, const void *data, size_t datalen)
static inline void
cifs_idmap_key_destroy(struct key *key)
struct key_type cifs_idmap_key_type = ;
static void
sid_to_str(struct cifs_sid *sidptr, char *sidstr)
static void
id_rb_insert(struct rb_root *root, struct cifs_sid *sidptr,
struct cifs_sid_id **psidid, char *typestr)
static struct cifs_sid_id *
id_rb_search(struct rb_root *root, struct cifs_sid *sidptr)
static int
sidid_pending_wait(void *unused)
static int
sid_to_id(struct cifs_sb_info *cifs_sb, struct cifs_sid *psid,
struct cifs_fattr *fattr, uint sidtype)
int
init_cifs_idmap(void)
void
exit_cifs_idmap(void)
void
cifs_destroy_idmaptrees(void)
int compare_sids(const struct cifs_sid *ctsid, const struct cifs_sid *cwsid)
static void copy_sec_desc(const struct cifs_ntsd *pntsd,
struct cifs_ntsd *pnntsd, __u32 sidsoffset)
static void access_flags_to_mode(__le32 ace_flags, int type, umode_t *pmode,
umode_t *pbits_to_set)
static void mode_to_access_flags(umode_t mode, umode_t bits_to_use,
__u32 *pace_flags)
static __u16 fill_ace_for_sid(struct cifs_ace *pntace,
const struct cifs_sid *psid, __u64 nmode, umode_t bits)
static void dump_ace(struct cifs_ace *pace, char *end_of_acl)
static void parse_dacl(struct cifs_acl *pdacl, char *end_of_acl,
struct cifs_sid *pownersid, struct cifs_sid *pgrpsid,
struct cifs_fattr *fattr)
static int set_chmod_dacl(struct cifs_acl *pndacl, struct cifs_sid *pownersid,
struct cifs_sid *pgrpsid, __u64 nmode)
static int parse_sid(struct cifs_sid *psid, char *end_of_acl)
static int parse_sec_desc(struct cifs_sb_info *cifs_sb,
struct cifs_ntsd *pntsd, int acl_len, struct cifs_fattr *fattr)
static int build_sec_desc(struct cifs_ntsd *pntsd, struct cifs_ntsd *pnntsd,
struct inode *inode, __u64 nmode)
static struct cifs_ntsd *get_cifs_acl_by_fid(struct cifs_sb_info *cifs_sb,
__u16 fid, u32 *pacllen)
static struct cifs_ntsd *get_cifs_acl_by_path(struct cifs_sb_info *cifs_sb,
const char *path, u32 *pacllen)
struct cifs_ntsd *get_cifs_acl(struct cifs_sb_info *cifs_sb,
struct inode *inode, const char *path,
u32 *pacllen)
static int set_cifs_acl_by_fid(struct cifs_sb_info *cifs_sb, __u16 fid,
struct cifs_ntsd *pnntsd, u32 acllen)
static int set_cifs_acl_by_path(struct cifs_sb_info *cifs_sb, const char *path,
struct cifs_ntsd *pnntsd, u32 acllen)
int set_cifs_acl(struct cifs_ntsd *pnntsd, __u32 acllen,
struct inode *inode, const char *path)
int
cifs_acl_to_fattr(struct cifs_sb_info *cifs_sb, struct cifs_fattr *fattr,
struct inode *inode, const char *path, const __u16 *pfid)
int mode_to_cifs_acl(struct inode *inode, const char *path, __u64 nmode)
