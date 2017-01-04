#define NFS4_READ_MODE (NFS4_ACE_READ_DATA)
#define NFS4_WRITE_MODE (NFS4_ACE_WRITE_DATA | NFS4_ACE_APPEND_DATA)
#define NFS4_EXECUTE_MODE NFS4_ACE_EXECUTE
#define NFS4_ANYONE_MODE (NFS4_ACE_READ_ATTRIBUTES | NFS4_ACE_READ_ACL | NFS4_ACE_SYNCHRONIZE)
#define NFS4_OWNER_MODE (NFS4_ACE_WRITE_ATTRIBUTES | NFS4_ACE_WRITE_ACL)
#define NFS4_MASK_UNSUPP (NFS4_ACE_DELETE | NFS4_ACE_WRITE_OWNER \
| NFS4_ACE_READ_NAMED_ATTRS | NFS4_ACE_WRITE_NAMED_ATTRS)
#define NFS4_INHERITANCE_FLAGS (NFS4_ACE_FILE_INHERIT_ACE \
| NFS4_ACE_DIRECTORY_INHERIT_ACE)
#define NFS4_SUPPORTED_FLAGS (NFS4_INHERITANCE_FLAGS \
| NFS4_ACE_INHERIT_ONLY_ACE \
| NFS4_ACE_IDENTIFIER_GROUP)
#define MASK_EQUAL(mask1, mask2) \
( ((mask1) & NFS4_ACE_MASK_ALL) == ((mask2) & NFS4_ACE_MASK_ALL) )
static u32
mask_from_posix(unsigned short perm, unsigned int flags)
static u32
deny_mask_from_posix(unsigned short perm, u32 flags)
static void
low_mode_from_nfs4(u32 perm, unsigned short *mode, unsigned int flags)
struct ace_container ;
static short ace2type(struct nfs4_ace *);
static void _posix_to_nfsv4_one(struct posix_acl *, struct nfs4_acl *,
unsigned int);
struct nfs4_acl *
nfs4_acl_posix_to_nfsv4(struct posix_acl *pacl, struct posix_acl *dpacl,
unsigned int flags)
struct posix_acl_summary ;
static void
summarize_posix_acl(struct posix_acl *acl, struct posix_acl_summary *pas)
static void
_posix_to_nfsv4_one(struct posix_acl *pacl, struct nfs4_acl *acl,
unsigned int flags)
static void
sort_pacl_range(struct posix_acl *pacl, int start, int end)
static void
sort_pacl(struct posix_acl *pacl)
struct posix_ace_state ;
struct posix_user_ace_state ;
struct posix_ace_state_array ;
struct posix_acl_state ;
static int
init_state(struct posix_acl_state *state, int cnt)
static void
free_state(struct posix_acl_state *state)
static inline void add_to_mask(struct posix_acl_state *state, struct posix_ace_state *astate)
static inline int check_deny(u32 mask, int isowner)
static struct posix_acl *
posix_state_to_acl(struct posix_acl_state *state, unsigned int flags)
static inline void allow_bits(struct posix_ace_state *astate, u32 mask)
static inline void deny_bits(struct posix_ace_state *astate, u32 mask)
static int find_uid(struct posix_acl_state *state, struct posix_ace_state_array *a, uid_t uid)
static void deny_bits_array(struct posix_ace_state_array *a, u32 mask)
static void allow_bits_array(struct posix_ace_state_array *a, u32 mask)
static void process_one_v4_ace(struct posix_acl_state *state,
struct nfs4_ace *ace)
int nfs4_acl_nfsv4_to_posix(struct nfs4_acl *acl, struct posix_acl **pacl,
struct posix_acl **dpacl, unsigned int flags)
static short
ace2type(struct nfs4_ace *ace)
EXPORT_SYMBOL(nfs4_acl_posix_to_nfsv4);
EXPORT_SYMBOL(nfs4_acl_nfsv4_to_posix);
struct nfs4_acl *
nfs4_acl_new(int n)
static struct  s2t_map[] = ;
int
nfs4_acl_get_whotype(char *p, u32 len)
int
nfs4_acl_write_who(int who, char *p)
EXPORT_SYMBOL(nfs4_acl_new);
EXPORT_SYMBOL(nfs4_acl_get_whotype);
EXPORT_SYMBOL(nfs4_acl_write_who);
