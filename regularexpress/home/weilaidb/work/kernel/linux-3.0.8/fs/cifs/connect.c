#define CIFS_PORT 445
#define RFC1001_PORT 139
#define SMB_ECHO_INTERVAL (60 * HZ)
extern mempool_t *cifs_req_poolp;
#define TLINK_ERROR_EXPIRE	(1 * HZ)
#define TLINK_IDLE_EXPIRE	(600 * HZ)
static int ip_connect(struct TCP_Server_Info *server);
static int generic_ip_connect(struct TCP_Server_Info *server);
static void tlink_rb_insert(struct rb_root *root, struct tcon_link *new_tlink);
static void cifs_prune_tlinks(struct work_struct *work);
static int cifs_setup_volume_info(struct smb_vol *volume_info, char *mount_data,
const char *devname);
static int
cifs_reconnect(struct TCP_Server_Info *server)
static int check2ndT2(struct smb_hdr *pSMB, unsigned int maxBufSize)
static int coalesce_t2(struct smb_hdr *psecond, struct smb_hdr *pTargetSMB)
static void
cifs_echo_request(struct work_struct *work)
static int
cifs_demultiplex_thread(struct TCP_Server_Info *server)
static char *
extract_hostname(const char *unc)
static int
cifs_parse_mount_options(const char *mountdata, const char *devname,
struct smb_vol *vol)
if (vol->UNC == NULL)  else
}
if (vol->multiuser && !(vol->secFlg & CIFSSEC_MAY_KRB5))
if (vol->UNCip == NULL)
vol->UNCip = &vol->UNC[2];
if (uid_specified)
vol->override_uid = override_uid;
else if (override_uid == 1)
printk(KERN_NOTICE "CIFS: ignoring forceuid mount option "
"specified with no uid= option.\n");
if (gid_specified)
vol->override_gid = override_gid;
else if (override_gid == 1)
printk(KERN_NOTICE "CIFS: ignoring forcegid mount option "
"specified with no gid= option.\n");
kfree(mountdata_copy);
return 0;
cifs_parse_mount_err:
kfree(mountdata_copy);
return 1;
}
static bool
srcip_matches(struct sockaddr *srcaddr, struct sockaddr *rhs)
static bool
match_port(struct TCP_Server_Info *server, struct sockaddr *addr)
static bool
match_address(struct TCP_Server_Info *server, struct sockaddr *addr,
struct sockaddr *srcaddr)
static bool
match_security(struct TCP_Server_Info *server, struct smb_vol *vol)
static int match_server(struct TCP_Server_Info *server, struct sockaddr *addr,
struct smb_vol *vol)
static struct TCP_Server_Info *
cifs_find_tcp_session(struct sockaddr *addr, struct smb_vol *vol)
static void
cifs_put_tcp_session(struct TCP_Server_Info *server)
static struct TCP_Server_Info *
cifs_get_tcp_session(struct smb_vol *volume_info)
static int match_session(struct cifs_ses *ses, struct smb_vol *vol)
static struct cifs_ses *
cifs_find_smb_ses(struct TCP_Server_Info *server, struct smb_vol *vol)
static void
cifs_put_smb_ses(struct cifs_ses *ses)
static bool warned_on_ntlm;
static struct cifs_ses *
cifs_get_smb_ses(struct TCP_Server_Info *server, struct smb_vol *volume_info)
static int match_tcon(struct cifs_tcon *tcon, const char *unc)
static struct cifs_tcon *
cifs_find_tcon(struct cifs_ses *ses, const char *unc)
static void
cifs_put_tcon(struct cifs_tcon *tcon)
static struct cifs_tcon *
cifs_get_tcon(struct cifs_ses *ses, struct smb_vol *volume_info)
void
cifs_put_tlink(struct tcon_link *tlink)
static inline struct tcon_link *
cifs_sb_master_tlink(struct cifs_sb_info *cifs_sb)
static int
compare_mount_options(struct super_block *sb, struct cifs_mnt_data *mnt_data)
int
cifs_match_super(struct super_block *sb, void *data)
int
get_dfs_path(int xid, struct cifs_ses *pSesInfo, const char *old_path,
const struct nls_table *nls_codepage, unsigned int *pnum_referrals,
struct dfs_info3_param **preferrals, int remap)
static struct lock_class_key cifs_key[2];
static struct lock_class_key cifs_slock_key[2];
static inline void
cifs_reclassify_socket4(struct socket *sock)
static inline void
cifs_reclassify_socket6(struct socket *sock)
static inline void
cifs_reclassify_socket4(struct socket *sock)
static inline void
cifs_reclassify_socket6(struct socket *sock)
static void rfc1002mangle(char *target, char *source, unsigned int length)
static int
bind_socket(struct TCP_Server_Info *server)
static int
ip_rfc1001_connect(struct TCP_Server_Info *server)
static int
generic_ip_connect(struct TCP_Server_Info *server)
static int
ip_connect(struct TCP_Server_Info *server)
void reset_cifs_unix_caps(int xid, struct cifs_tcon *tcon,
struct cifs_sb_info *cifs_sb, struct smb_vol *vol_info)
void cifs_setup_cifs_sb(struct smb_vol *pvolume_info,
struct cifs_sb_info *cifs_sb)
#define CIFS_MAX_WSIZE ((1<<24) - 1 - sizeof(WRITE_REQ) + 4)
#define CIFS_MAX_RFC1002_WSIZE (128 * 1024 - sizeof(WRITE_REQ) + 4)
#define CIFS_DEFAULT_WSIZE (1024 * 1024)
static unsigned int
cifs_negotiate_wsize(struct cifs_tcon *tcon, struct smb_vol *pvolume_info)
static int
is_path_accessible(int xid, struct cifs_tcon *tcon,
struct cifs_sb_info *cifs_sb, const char *full_path)
static void
cleanup_volume_info_contents(struct smb_vol *volume_info)
void
cifs_cleanup_volume_info(struct smb_vol *volume_info)
static char *
build_unc_path_to_root(const struct smb_vol *vol,
const struct cifs_sb_info *cifs_sb)
static int
expand_dfs_referral(int xid, struct cifs_ses *pSesInfo,
struct smb_vol *volume_info, struct cifs_sb_info *cifs_sb,
int check_prefix)
static int
cifs_setup_volume_info(struct smb_vol *volume_info, char *mount_data,
const char *devname)
struct smb_vol *
cifs_get_volume_info(char *mount_data, const char *devname)
int
cifs_mount(struct cifs_sb_info *cifs_sb, struct smb_vol *volume_info)
int
CIFSTCon(unsigned int xid, struct cifs_ses *ses,
const char *tree, struct cifs_tcon *tcon,
const struct nls_table *nls_codepage)
void
cifs_umount(struct cifs_sb_info *cifs_sb)
int cifs_negotiate_protocol(unsigned int xid, struct cifs_ses *ses)
int cifs_setup_session(unsigned int xid, struct cifs_ses *ses,
struct nls_table *nls_info)
static struct cifs_tcon *
cifs_construct_tcon(struct cifs_sb_info *cifs_sb, uid_t fsuid)
struct cifs_tcon *
cifs_sb_master_tcon(struct cifs_sb_info *cifs_sb)
static int
cifs_sb_tcon_pending_wait(void *unused)
static struct tcon_link *
tlink_rb_search(struct rb_root *root, uid_t uid)
static void
tlink_rb_insert(struct rb_root *root, struct tcon_link *new_tlink)
struct tcon_link *
cifs_sb_tlink(struct cifs_sb_info *cifs_sb)
static void
cifs_prune_tlinks(struct work_struct *work)
