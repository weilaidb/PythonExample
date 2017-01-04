extern mempool_t *cifs_sm_req_poolp;
extern mempool_t *cifs_req_poolp;
unsigned int
_GetXid(void)
void
_FreeXid(unsigned int xid)
struct cifs_ses *
sesInfoAlloc(void)
void
sesInfoFree(struct cifs_ses *buf_to_free)
struct cifs_tcon *
tconInfoAlloc(void)
void
tconInfoFree(struct cifs_tcon *buf_to_free)
struct smb_hdr *
cifs_buf_get(void)
void
cifs_buf_release(void *buf_to_free)
struct smb_hdr *
cifs_small_buf_get(void)
void
cifs_small_buf_release(void *buf_to_free)
__u16 GetNextMid(struct TCP_Server_Info *server)
void
header_assemble(struct smb_hdr *buffer, char smb_command ,
const struct cifs_tcon *treeCon, int word_count)
static int
check_smb_hdr(struct smb_hdr *smb, __u16 mid)
int
checkSMB(struct smb_hdr *smb, __u16 mid, unsigned int length)
bool
is_valid_oplock_break(struct smb_hdr *buf, struct TCP_Server_Info *srv)
void
dump_smb(struct smb_hdr *smb_buf, int smb_buf_length)
void
cifs_autodisable_serverino(struct cifs_sb_info *cifs_sb)
void cifs_set_oplock_level(struct cifsInodeInfo *cinode, __u32 oplock)
