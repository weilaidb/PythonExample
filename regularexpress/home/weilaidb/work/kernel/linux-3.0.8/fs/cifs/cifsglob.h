#define _CIFS_GLOB_H
#define MAX_UID_INFO 16
#define MAX_SES_INFO 2
#define MAX_TCON_INFO 4
#define MAX_TREE_SIZE (2 + MAX_SERVER_SIZE + 1 + MAX_SHARE_SIZE + 1)
#define MAX_SERVER_SIZE 15
#define MAX_SHARE_SIZE 80
#define MAX_USERNAME_SIZE 256
#define MAX_PASSWORD_SIZE 512
#define CIFS_MIN_RCV_POOL 4
#define CIFS_DEF_ACTIMEO (1 * HZ)
#define CIFS_MAX_ACTIMEO (1 << 30)
#define CIFS_MAX_REQ 50
#define RFC1001_NAME_LEN 15
#define RFC1001_NAME_LEN_WITH_NULL (RFC1001_NAME_LEN + 1)
#define SERVER_NAME_LENGTH 40
#define SERVER_NAME_LEN_WITH_NULL     (SERVER_NAME_LENGTH + 1)
#define MAX_NAME 514
#define XATTR_DOS_ATTRIB "user.DOSATTRIB"
enum statusEnum ;
enum securityEnum ;
enum protocolEnum ;
struct session_key ;
struct sdesc ;
struct cifs_secmech ;
struct ntlmssp_auth ;
struct cifs_cred ;
struct smb_vol ;
#define CIFS_MOUNT_MASK (CIFS_MOUNT_NO_PERM | CIFS_MOUNT_SET_UID | \
CIFS_MOUNT_SERVER_INUM | CIFS_MOUNT_DIRECT_IO | \
CIFS_MOUNT_NO_XATTR | CIFS_MOUNT_MAP_SPECIAL_CHR | \
CIFS_MOUNT_UNX_EMUL | CIFS_MOUNT_NO_BRL | \
CIFS_MOUNT_CIFS_ACL | CIFS_MOUNT_OVERR_UID | \
CIFS_MOUNT_OVERR_GID | CIFS_MOUNT_DYNPERM | \
CIFS_MOUNT_NOPOSIXBRL | CIFS_MOUNT_NOSSYNC | \
CIFS_MOUNT_FSCACHE | CIFS_MOUNT_MF_SYMLINKS | \
CIFS_MOUNT_MULTIUSER | CIFS_MOUNT_STRICT_IO)
#define CIFS_MS_MASK (MS_RDONLY | MS_MANDLOCK | MS_NOEXEC | MS_NOSUID | \
MS_NODEV | MS_SYNCHRONOUS)
struct cifs_mnt_data ;
struct TCP_Server_Info ;
static inline struct net *cifs_net_ns(struct TCP_Server_Info *srv)
static inline void cifs_set_net_ns(struct TCP_Server_Info *srv, struct net *net)
static inline struct net *cifs_net_ns(struct TCP_Server_Info *srv)
static inline void cifs_set_net_ns(struct TCP_Server_Info *srv, struct net *net)
struct cifs_ses ;
#define CIFS_SES_NT4 1
#define CIFS_SES_OS2 2
#define CIFS_SES_W9X 4
#define CIFS_SES_LANMAN 8
struct cifs_tcon ;
struct tcon_link ;
extern struct tcon_link *cifs_sb_tlink(struct cifs_sb_info *cifs_sb);
static inline struct cifs_tcon *
tlink_tcon(struct tcon_link *tlink)
extern void cifs_put_tlink(struct tcon_link *tlink);
static inline struct tcon_link *
cifs_get_tlink(struct tcon_link *tlink)
extern struct cifs_tcon *cifs_sb_master_tcon(struct cifs_sb_info *cifs_sb);
struct cifsLockInfo ;
struct cifs_search_info ;
struct cifsFileInfo ;
struct cifs_io_parms ;
static inline void cifsFileInfo_get(struct cifsFileInfo *cifs_file)
void cifsFileInfo_put(struct cifsFileInfo *cifs_file);
struct cifsInodeInfo ;
static inline struct cifsInodeInfo *
CIFS_I(struct inode *inode)
static inline struct cifs_sb_info *
CIFS_SB(struct super_block *sb)
static inline char CIFS_DIR_SEP(const struct cifs_sb_info *cifs_sb)
static inline void
convert_delimiter(char *path, char delim)
#define cifs_stats_inc atomic_inc
static inline void cifs_stats_bytes_written(struct cifs_tcon *tcon,
unsigned int bytes)
static inline void cifs_stats_bytes_read(struct cifs_tcon *tcon,
unsigned int bytes)
#define  cifs_stats_inc(field) do  while (0)
#define  cifs_stats_bytes_written(tcon, bytes) do  while (0)
#define  cifs_stats_bytes_read(tcon, bytes) do  while (0)
struct mid_q_entry;
typedef void (mid_callback_t)(struct mid_q_entry *mid);
struct mid_q_entry ;
struct oplock_q_entry ;
struct dir_notify_req ;
struct dfs_info3_param ;
#define CIFS_FATTR_DFS_REFERRAL		0x1
#define CIFS_FATTR_DELETE_PENDING	0x2
#define CIFS_FATTR_NEED_REVAL		0x4
#define CIFS_FATTR_INO_COLLISION	0x8
struct cifs_fattr ;
static inline void free_dfs_info_param(struct dfs_info3_param *param)
static inline void free_dfs_info_array(struct dfs_info3_param *param,
int number_of_items)
#define   MID_FREE 0
#define   MID_REQUEST_ALLOCATED 1
#define   MID_REQUEST_SUBMITTED 2
#define   MID_RESPONSE_RECEIVED 4
#define   MID_RETRY_NEEDED      8
#define   MID_RESPONSE_MALFORMED 0x10
#define   MID_SHUTDOWN		 0x20
#define   CIFS_NO_BUFFER        0
#define   CIFS_SMALL_BUFFER     1
#define   CIFS_LARGE_BUFFER     2
#define   CIFS_IOVEC            4
#define   CIFS_BLOCKING_OP      1
#define   CIFS_ASYNC_OP         2
#define   CIFS_TIMEOUT_MASK 0x003
#define   CIFS_LOG_ERROR    0x010
#define   CIFS_LARGE_BUF_OP 0x020
#define   CIFS_NO_RESP      0x040
#define   CIFSSEC_MAY_SIGN	0x00001
#define   CIFSSEC_MAY_NTLM	0x00002
#define   CIFSSEC_MAY_NTLMV2	0x00004
#define   CIFSSEC_MAY_KRB5	0x00008
#define   CIFSSEC_MAY_LANMAN	0x00010
#define   CIFSSEC_MAY_PLNTXT	0x00020
#define   CIFSSEC_MAY_LANMAN    0
#define   CIFSSEC_MAY_PLNTXT    0
#define   CIFSSEC_MAY_SEAL	0x00040
#define   CIFSSEC_MAY_NTLMSSP	0x00080
#define   CIFSSEC_MUST_SIGN	0x01001
#define   CIFSSEC_MUST_NTLM	0x02002
#define   CIFSSEC_MUST_NTLMV2	0x04004
#define   CIFSSEC_MUST_KRB5	0x08008
#define   CIFSSEC_MUST_LANMAN	0x10010
#define   CIFSSEC_MUST_PLNTXT	0x20020
#define   CIFSSEC_MASK          0xBF0BF
#define   CIFSSEC_MASK          0xB70B7
#define   CIFSSEC_MASK          0x8F08F
#define	  CIFSSEC_MASK          0x87087
#define   CIFSSEC_MUST_SEAL	0x40040
#define   CIFSSEC_MUST_NTLMSSP	0x80080
#define   CIFSSEC_DEF (CIFSSEC_MAY_SIGN | CIFSSEC_MAY_NTLM | CIFSSEC_MAY_NTLMV2)
#define   CIFSSEC_MAX (CIFSSEC_MUST_SIGN | CIFSSEC_MUST_NTLMV2)
#define   CIFSSEC_AUTH_MASK (CIFSSEC_MAY_NTLM | CIFSSEC_MAY_NTLMV2 | CIFSSEC_MAY_LANMAN | CIFSSEC_MAY_PLNTXT | CIFSSEC_MAY_KRB5 | CIFSSEC_MAY_NTLMSSP)
#define UID_HASH (16)
#define GLOBAL_EXTERN
#define GLOBAL_EXTERN extern
GLOBAL_EXTERN struct list_head		cifs_tcp_ses_list;
GLOBAL_EXTERN spinlock_t		cifs_tcp_ses_lock;
GLOBAL_EXTERN spinlock_t	cifs_file_list_lock;
GLOBAL_EXTERN struct list_head GlobalDnotifyReqList;
GLOBAL_EXTERN struct list_head GlobalDnotifyRsp_Q;
GLOBAL_EXTERN unsigned int GlobalCurrentXid;
GLOBAL_EXTERN unsigned int GlobalTotalActiveXid;
GLOBAL_EXTERN unsigned int GlobalMaxActiveXid;
GLOBAL_EXTERN spinlock_t GlobalMid_Lock;
GLOBAL_EXTERN atomic_t sesInfoAllocCount;
GLOBAL_EXTERN atomic_t tconInfoAllocCount;
GLOBAL_EXTERN atomic_t tcpSesAllocCount;
GLOBAL_EXTERN atomic_t tcpSesReconnectCount;
GLOBAL_EXTERN atomic_t tconInfoReconnectCount;
GLOBAL_EXTERN atomic_t bufAllocCount;
GLOBAL_EXTERN atomic_t totBufAllocCount;
GLOBAL_EXTERN atomic_t totSmBufAllocCount;
GLOBAL_EXTERN atomic_t smBufAllocCount;
GLOBAL_EXTERN atomic_t midCount;
GLOBAL_EXTERN unsigned int multiuser_mount;
GLOBAL_EXTERN unsigned int oplockEnabled;
GLOBAL_EXTERN unsigned int lookupCacheEnabled;
GLOBAL_EXTERN unsigned int global_secflags;
GLOBAL_EXTERN unsigned int sign_CIFS_PDUs;
GLOBAL_EXTERN unsigned int linuxExtEnabled;
GLOBAL_EXTERN unsigned int CIFSMaxBufSize;
GLOBAL_EXTERN unsigned int cifs_min_rcv;
GLOBAL_EXTERN unsigned int cifs_min_small;
GLOBAL_EXTERN unsigned int cifs_max_pending;
GLOBAL_EXTERN unsigned short echo_retries;
GLOBAL_EXTERN struct rb_root uidtree;
GLOBAL_EXTERN struct rb_root gidtree;
GLOBAL_EXTERN spinlock_t siduidlock;
GLOBAL_EXTERN spinlock_t sidgidlock;
void cifs_oplock_break(struct work_struct *work);
void cifs_oplock_break_get(struct cifsFileInfo *cfile);
void cifs_oplock_break_put(struct cifsFileInfo *cfile);
extern const struct slow_work_ops cifs_oplock_break_ops;
