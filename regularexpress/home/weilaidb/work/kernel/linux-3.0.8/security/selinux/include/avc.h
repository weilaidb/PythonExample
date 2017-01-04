#define _SELINUX_AVC_H_
extern int selinux_enforcing;
#define selinux_enforcing 1
struct avc_entry;
struct task_struct;
struct inode;
struct sock;
struct sk_buff;
struct avc_cache_stats ;
void __init avc_init(void);
int avc_audit(u32 ssid, u32 tsid,
u16 tclass, u32 requested,
struct av_decision *avd,
int result,
struct common_audit_data *a, unsigned flags);
#define AVC_STRICT 1
int avc_has_perm_noaudit(u32 ssid, u32 tsid,
u16 tclass, u32 requested,
unsigned flags,
struct av_decision *avd);
int avc_has_perm_flags(u32 ssid, u32 tsid,
u16 tclass, u32 requested,
struct common_audit_data *auditdata,
unsigned);
static inline int avc_has_perm(u32 ssid, u32 tsid,
u16 tclass, u32 requested,
struct common_audit_data *auditdata)
u32 avc_policy_seqno(void);
#define AVC_CALLBACK_GRANT		1
#define AVC_CALLBACK_TRY_REVOKE		2
#define AVC_CALLBACK_REVOKE		4
#define AVC_CALLBACK_RESET		8
#define AVC_CALLBACK_AUDITALLOW_ENABLE	16
#define AVC_CALLBACK_AUDITALLOW_DISABLE	32
#define AVC_CALLBACK_AUDITDENY_ENABLE	64
#define AVC_CALLBACK_AUDITDENY_DISABLE	128
int avc_add_callback(int (*callback)(u32 event, u32 ssid, u32 tsid,
u16 tclass, u32 perms,
u32 *out_retained),
u32 events, u32 ssid, u32 tsid,
u16 tclass, u32 perms);
int avc_get_hash_stats(char *page);
extern unsigned int avc_cache_threshold;
void avc_disable(void);
DECLARE_PER_CPU(struct avc_cache_stats, avc_cache_stats);
