static struct  protocols[] = ;
static struct  protocols[] = ;
#define CIFS_NUM_PROT 4
#define CIFS_NUM_PROT 2
#define CIFS_NUM_PROT 3
#define CIFS_NUM_PROT 1
static void mark_open_files_invalid(struct cifs_tcon *pTcon)
static int
cifs_reconnect_tcon(struct cifs_tcon *tcon, int smb_command)
static int
small_smb_init(int smb_command, int wct, struct cifs_tcon *tcon,
void **request_buf)
int
small_smb_init_no_tc(const int smb_command, const int wct,
struct cifs_ses *ses, void **request_buf)
static int
__smb_init(int smb_command, int wct, struct cifs_tcon *tcon,
void **request_buf, void **response_buf)
static int
smb_init(int smb_command, int wct, struct cifs_tcon *tcon,
void **request_buf, void **response_buf)
static int
smb_init_no_reconnect(int smb_command, int wct, struct cifs_tcon *tcon,
void **request_buf, void **response_buf)
static int validate_t2(struct smb_t2_rsp *pSMB)
static inline void inc_rfc1001_len(void *pSMB, int count)
int
CIFSSMBNegotiate(unsigned int xid, struct cifs_ses *ses)
int
CIFSSMBTDis(const int xid, struct cifs_tcon *tcon)
static void
cifs_echo_callback(struct mid_q_entry *mid)
int
CIFSSMBEcho(struct TCP_Server_Info *server)
int
CIFSSMBLogoff(const int xid, struct cifs_ses *ses)
int
CIFSPOSIXDelFile(const int xid, struct cifs_tcon *tcon, const char *fileName,
__u16 type, const struct nls_table *nls_codepage, int remap)
int
CIFSSMBDelFile(const int xid, struct cifs_tcon *tcon, const char *fileName,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBRmDir(const int xid, struct cifs_tcon *tcon, const char *dirName,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBMkDir(const int xid, struct cifs_tcon *tcon,
const char *name, const struct nls_table *nls_codepage, int remap)
int
CIFSPOSIXCreate(const int xid, struct cifs_tcon *tcon, __u32 posix_flags,
__u64 mode, __u16 *netfid, FILE_UNIX_BASIC_INFO *pRetData,
__u32 *pOplock, const char *name,
const struct nls_table *nls_codepage, int remap)
static __u16 convert_disposition(int disposition)
static int
access_flags_to_smbopen_mode(const int access_flags)
int
SMBLegacyOpen(const int xid, struct cifs_tcon *tcon,
const char *fileName, const int openDisposition,
const int access_flags, const int create_options, __u16 *netfid,
int *pOplock, FILE_ALL_INFO *pfile_info,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBOpen(const int xid, struct cifs_tcon *tcon,
const char *fileName, const int openDisposition,
const int access_flags, const int create_options, __u16 *netfid,
int *pOplock, FILE_ALL_INFO *pfile_info,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBRead(const int xid, struct cifs_io_parms *io_parms, unsigned int *nbytes,
char **buf, int *pbuf_type)
int
CIFSSMBWrite(const int xid, struct cifs_io_parms *io_parms,
unsigned int *nbytes, const char *buf,
const char __user *ubuf, const int long_op)
void
cifs_writedata_release(struct kref *refcount)
static void
cifs_writev_requeue(struct cifs_writedata *wdata)
static void
cifs_writev_complete(struct work_struct *work)
struct cifs_writedata *
cifs_writedata_alloc(unsigned int nr_pages)
static void
cifs_writev_callback(struct mid_q_entry *mid)
int
cifs_async_writev(struct cifs_writedata *wdata)
int
CIFSSMBWrite2(const int xid, struct cifs_io_parms *io_parms,
unsigned int *nbytes, struct kvec *iov, int n_vec,
const int long_op)
int
CIFSSMBLock(const int xid, struct cifs_tcon *tcon,
const __u16 smb_file_id, const __u64 len,
const __u64 offset, const __u32 numUnlock,
const __u32 numLock, const __u8 lockType,
const bool waitFlag, const __u8 oplock_level)
int
CIFSSMBPosixLock(const int xid, struct cifs_tcon *tcon,
const __u16 smb_file_id, const int get_flag, const __u64 len,
struct file_lock *pLockData, const __u16 lock_type,
const bool waitFlag)
int
CIFSSMBClose(const int xid, struct cifs_tcon *tcon, int smb_file_id)
int
CIFSSMBFlush(const int xid, struct cifs_tcon *tcon, int smb_file_id)
int
CIFSSMBRename(const int xid, struct cifs_tcon *tcon,
const char *fromName, const char *toName,
const struct nls_table *nls_codepage, int remap)
int CIFSSMBRenameOpenFile(const int xid, struct cifs_tcon *pTcon,
int netfid, const char *target_name,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBCopy(const int xid, struct cifs_tcon *tcon, const char *fromName,
const __u16 target_tid, const char *toName, const int flags,
const struct nls_table *nls_codepage, int remap)
int
CIFSUnixCreateSymLink(const int xid, struct cifs_tcon *tcon,
const char *fromName, const char *toName,
const struct nls_table *nls_codepage)
int
CIFSUnixCreateHardLink(const int xid, struct cifs_tcon *tcon,
const char *fromName, const char *toName,
const struct nls_table *nls_codepage, int remap)
int
CIFSCreateHardLink(const int xid, struct cifs_tcon *tcon,
const char *fromName, const char *toName,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBUnixQuerySymLink(const int xid, struct cifs_tcon *tcon,
const unsigned char *searchName, char **symlinkinfo,
const struct nls_table *nls_codepage)
int
CIFSSMBQueryReparseLinkInfo(const int xid, struct cifs_tcon *tcon,
const unsigned char *searchName,
char *symlinkinfo, const int buflen, __u16 fid,
const struct nls_table *nls_codepage)
static void cifs_convert_ace(posix_acl_xattr_entry *ace,
struct cifs_posix_ace *cifs_ace)
static int cifs_copy_posix_acl(char *trgt, char *src, const int buflen,
const int acl_type, const int size_of_data_area)
static __u16 convert_ace_to_cifs_ace(struct cifs_posix_ace *cifs_ace,
const posix_acl_xattr_entry *local_ace)
static __u16 ACL_to_cifs_posix(char *parm_data, const char *pACL,
const int buflen, const int acl_type)
int
CIFSSMBGetPosixACL(const int xid, struct cifs_tcon *tcon,
const unsigned char *searchName,
char *acl_inf, const int buflen, const int acl_type,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBSetPosixACL(const int xid, struct cifs_tcon *tcon,
const unsigned char *fileName,
const char *local_acl, const int buflen,
const int acl_type,
const struct nls_table *nls_codepage, int remap)
int
CIFSGetExtAttr(const int xid, struct cifs_tcon *tcon,
const int netfid, __u64 *pExtAttrBits, __u64 *pMask)
static int
smb_init_nttransact(const __u16 sub_command, const int setup_count,
const int parm_len, struct cifs_tcon *tcon,
void **ret_buf)
static int
validate_ntransact(char *buf, char **ppparm, char **ppdata,
__u32 *pparmlen, __u32 *pdatalen)
int
CIFSSMBGetCIFSACL(const int xid, struct cifs_tcon *tcon, __u16 fid,
struct cifs_ntsd **acl_inf, __u32 *pbuflen)
int
CIFSSMBSetCIFSACL(const int xid, struct cifs_tcon *tcon, __u16 fid,
struct cifs_ntsd *pntsd, __u32 acllen)
int SMBQueryInformation(const int xid, struct cifs_tcon *tcon,
const unsigned char *searchName,
FILE_ALL_INFO *pFinfo,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBQFileInfo(const int xid, struct cifs_tcon *tcon,
u16 netfid, FILE_ALL_INFO *pFindData)
int
CIFSSMBQPathInfo(const int xid, struct cifs_tcon *tcon,
const unsigned char *searchName,
FILE_ALL_INFO *pFindData,
int legacy,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBUnixQFileInfo(const int xid, struct cifs_tcon *tcon,
u16 netfid, FILE_UNIX_BASIC_INFO *pFindData)
int
CIFSSMBUnixQPathInfo(const int xid, struct cifs_tcon *tcon,
const unsigned char *searchName,
FILE_UNIX_BASIC_INFO *pFindData,
const struct nls_table *nls_codepage, int remap)
int
CIFSFindFirst(const int xid, struct cifs_tcon *tcon,
const char *searchName,
const struct nls_table *nls_codepage,
__u16 *pnetfid,
struct cifs_search_info *psrch_inf, int remap, const char dirsep)
int CIFSFindNext(const int xid, struct cifs_tcon *tcon,
__u16 searchHandle, struct cifs_search_info *psrch_inf)
int
CIFSFindClose(const int xid, struct cifs_tcon *tcon,
const __u16 searchHandle)
int
CIFSGetSrvInodeNumber(const int xid, struct cifs_tcon *tcon,
const unsigned char *searchName,
__u64 *inode_number,
const struct nls_table *nls_codepage, int remap)
static int
parse_DFS_referrals(TRANSACTION2_GET_DFS_REFER_RSP *pSMBr,
unsigned int *num_of_nodes,
struct dfs_info3_param **target_nodes,
const struct nls_table *nls_codepage, int remap,
const char *searchName)
int
CIFSGetDFSRefer(const int xid, struct cifs_ses *ses,
const unsigned char *searchName,
struct dfs_info3_param **target_nodes,
unsigned int *num_of_nodes,
const struct nls_table *nls_codepage, int remap)
int
SMBOldQFSInfo(const int xid, struct cifs_tcon *tcon, struct kstatfs *FSData)
int
CIFSSMBQFSInfo(const int xid, struct cifs_tcon *tcon, struct kstatfs *FSData)
int
CIFSSMBQFSAttributeInfo(const int xid, struct cifs_tcon *tcon)
int
CIFSSMBQFSDeviceInfo(const int xid, struct cifs_tcon *tcon)
int
CIFSSMBQFSUnixInfo(const int xid, struct cifs_tcon *tcon)
int
CIFSSMBSetFSUnixInfo(const int xid, struct cifs_tcon *tcon, __u64 cap)
int
CIFSSMBQFSPosixInfo(const int xid, struct cifs_tcon *tcon,
struct kstatfs *FSData)
int
CIFSSMBSetEOF(const int xid, struct cifs_tcon *tcon, const char *fileName,
__u64 size, bool SetAllocation,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBSetFileSize(const int xid, struct cifs_tcon *tcon, __u64 size,
__u16 fid, __u32 pid_of_opener, bool SetAllocation)
int
CIFSSMBSetFileInfo(const int xid, struct cifs_tcon *tcon,
const FILE_BASIC_INFO *data, __u16 fid, __u32 pid_of_opener)
int
CIFSSMBSetFileDisposition(const int xid, struct cifs_tcon *tcon,
bool delete_file, __u16 fid, __u32 pid_of_opener)
int
CIFSSMBSetPathInfo(const int xid, struct cifs_tcon *tcon,
const char *fileName, const FILE_BASIC_INFO *data,
const struct nls_table *nls_codepage, int remap)
static void
cifs_fill_unix_set_info(FILE_UNIX_BASIC_INFO *data_offset,
const struct cifs_unix_set_info_args *args)
int
CIFSSMBUnixSetFileInfo(const int xid, struct cifs_tcon *tcon,
const struct cifs_unix_set_info_args *args,
u16 fid, u32 pid_of_opener)
int
CIFSSMBUnixSetPathInfo(const int xid, struct cifs_tcon *tcon, char *fileName,
const struct cifs_unix_set_info_args *args,
const struct nls_table *nls_codepage, int remap)
ssize_t
CIFSSMBQAllEAs(const int xid, struct cifs_tcon *tcon,
const unsigned char *searchName, const unsigned char *ea_name,
char *EAData, size_t buf_size,
const struct nls_table *nls_codepage, int remap)
int
CIFSSMBSetEA(const int xid, struct cifs_tcon *tcon, const char *fileName,
const char *ea_name, const void *ea_value,
const __u16 ea_value_len, const struct nls_table *nls_codepage,
int remap)
int CIFSSMBNotify(const int xid, struct cifs_tcon *tcon,
const int notify_subdirs, const __u16 netfid,
__u32 filter, struct file *pfile, int multishot,
const struct nls_table *nls_codepage)
