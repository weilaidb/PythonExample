#define _CIFSACL_H
#define NUM_AUTHS 6
#define NUM_SUBAUTHS 5
#define NUM_WK_SIDS 7
#define SIDNAMELENGTH 20
#define DEFSECDESCLEN 192
#define READ_BIT        0x4
#define WRITE_BIT       0x2
#define EXEC_BIT        0x1
#define UBITSHIFT	6
#define GBITSHIFT	3
#define ACCESS_ALLOWED	0
#define ACCESS_DENIED	1
#define SIDOWNER 1
#define SIDGROUP 2
#define SIDLEN 150
#define SID_ID_MAPPED 0
#define SID_ID_PENDING 1
#define SID_MAP_EXPIRE (3600 * HZ)
#define SID_MAP_RETRY (300 * HZ)
struct cifs_ntsd  __attribute__((packed));
struct cifs_sid  __attribute__((packed));
struct cifs_acl  __attribute__((packed));
struct cifs_ace  __attribute__((packed));
struct cifs_wksid  __attribute__((packed));
struct cifs_sid_id ;
extern struct key_type cifs_idmap_key_type;
extern const struct cred *root_cred;
extern int compare_sids(const struct cifs_sid *, const struct cifs_sid *);
