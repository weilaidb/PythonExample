static inline void assert_server_locked(struct ncp_server *server)
static void ncp_add_byte(struct ncp_server *server, __u8 x)
static void ncp_add_word(struct ncp_server *server, __le16 x)
static void ncp_add_be16(struct ncp_server *server, __u16 x)
static void ncp_add_dword(struct ncp_server *server, __le32 x)
static void ncp_add_be32(struct ncp_server *server, __u32 x)
static inline void ncp_add_dword_lh(struct ncp_server *server, __u32 x)
static void ncp_add_mem(struct ncp_server *server, const void *source, int size)
static void ncp_add_pstring(struct ncp_server *server, const char *s)
static inline void ncp_init_request(struct ncp_server *server)
static inline void ncp_init_request_s(struct ncp_server *server, int subfunction)
static inline char *
ncp_reply_data(struct ncp_server *server, int offset)
static inline u8 BVAL(const void *data)
static u8 ncp_reply_byte(struct ncp_server *server, int offset)
static inline u16 WVAL_LH(const void *data)
static u16
ncp_reply_le16(struct ncp_server *server, int offset)
static u16
ncp_reply_be16(struct ncp_server *server, int offset)
static inline u32 DVAL_LH(const void *data)
static __le32
ncp_reply_dword(struct ncp_server *server, int offset)
static inline __u32 ncp_reply_dword_lh(struct ncp_server* server, int offset)
int
ncp_negotiate_buffersize(struct ncp_server *server, int size, int *target)
int
ncp_negotiate_size_and_options(struct ncp_server *server,
int size, int options, int *ret_size, int *ret_options)
int ncp_get_volume_info_with_number(struct ncp_server* server,
int n, struct ncp_volume_info* target)
int ncp_get_directory_info(struct ncp_server* server, __u8 n,
struct ncp_volume_info* target)
int
ncp_close_file(struct ncp_server *server, const char *file_id)
int
ncp_make_closed(struct inode *inode)
static void ncp_add_handle_path(struct ncp_server *server, __u8 vol_num,
__le32 dir_base, int have_dir_base,
const char *path)
int ncp_dirhandle_alloc(struct ncp_server* server, __u8 volnum, __le32 dirent,
__u8* dirhandle)
int ncp_dirhandle_free(struct ncp_server* server, __u8 dirhandle)
void ncp_extract_file_info(const void *structure, struct nw_info_struct *target)
static inline void ncp_extract_nfs_info(const unsigned char *structure,
struct nw_nfs_info *target)
int ncp_obtain_nfs_info(struct ncp_server *server,
struct nw_info_struct *target)
int ncp_obtain_info(struct ncp_server *server, struct inode *dir, const char *path,
struct nw_info_struct *target)
static int
ncp_obtain_DOS_dir_base(struct ncp_server *server,
__u8 ns, __u8 volnum, __le32 dirent,
const char *path,
__le32 *DOS_dir_base)
static inline int
ncp_get_known_namespace(struct ncp_server *server, __u8 volume)
int
ncp_update_known_namespace(struct ncp_server *server, __u8 volume, int *ret_ns)
static int
ncp_ObtainSpecificDirBase(struct ncp_server *server,
__u8 nsSrc, __u8 nsDst, __u8 vol_num, __le32 dir_base,
const char *path,
__le32 *dirEntNum, __le32 *DosDirNum)
int
ncp_mount_subdir(struct ncp_server *server,
__u8 volNumber, __u8 srcNS, __le32 dirEntNum,
__u32* volume, __le32* newDirEnt, __le32* newDosEnt)
int
ncp_get_volume_root(struct ncp_server *server,
const char *volname, __u32* volume, __le32* dirent, __le32* dosdirent)
int
ncp_lookup_volume(struct ncp_server *server,
const char *volname, struct nw_info_struct *target)
int ncp_modify_file_or_subdir_dos_info_path(struct ncp_server *server,
struct inode *dir,
const char *path,
__le32 info_mask,
const struct nw_modify_dos_info *info)
int ncp_modify_file_or_subdir_dos_info(struct ncp_server *server,
struct inode *dir,
__le32 info_mask,
const struct nw_modify_dos_info *info)
int ncp_modify_nfs_info(struct ncp_server *server, __u8 volnum, __le32 dirent,
__u32 mode, __u32 rdev)
static int
ncp_DeleteNSEntry(struct ncp_server *server,
__u8 have_dir_base, __u8 volnum, __le32 dirent,
const char* name, __u8 ns, __le16 attr)
int
ncp_del_file_or_subdir2(struct ncp_server *server,
struct dentry *dentry)
int
ncp_del_file_or_subdir(struct ncp_server *server,
struct inode *dir, const char *name)
static inline void ConvertToNWfromDWORD(__u16 v0, __u16 v1, __u8 ret[6])
int ncp_open_create_file_or_subdir(struct ncp_server *server,
struct inode *dir, const char *name,
int open_create_mode,
__le32 create_attributes,
__le16 desired_acc_rights,
struct ncp_entry_info *target)
int
ncp_initialize_search(struct ncp_server *server, struct inode *dir,
struct nw_search_sequence *target)
int ncp_search_for_fileset(struct ncp_server *server,
struct nw_search_sequence *seq,
int* more,
int* cnt,
char* buffer,
size_t bufsize,
char** rbuf,
size_t* rsize)
static int
ncp_RenameNSEntry(struct ncp_server *server,
struct inode *old_dir, const char *old_name, __le16 old_type,
struct inode *new_dir, const char *new_name)
int ncp_ren_or_mov_file_or_subdir(struct ncp_server *server,
struct inode *old_dir, const char *old_name,
struct inode *new_dir, const char *new_name)
int
ncp_read_kernel(struct ncp_server *server, const char *file_id,
__u32 offset, __u16 to_read, char *target, int *bytes_read)
int
ncp_read_bounce(struct ncp_server *server, const char *file_id,
__u32 offset, __u16 to_read, char __user *target, int *bytes_read,
void* bounce, __u32 bufsize)
int
ncp_write_kernel(struct ncp_server *server, const char *file_id,
__u32 offset, __u16 to_write,
const char *source, int *bytes_written)
int
ncp_LogPhysicalRecord(struct ncp_server *server, const char *file_id,
__u8 locktype, __u32 offset, __u32 length, __u16 timeout)
int
ncp_ClearPhysicalRecord(struct ncp_server *server, const char *file_id,
__u32 offset, __u32 length)
int
ncp__io2vol(struct ncp_server *server, unsigned char *vname, unsigned int *vlen,
const unsigned char *iname, unsigned int ilen, int cc)
int
ncp__vol2io(struct ncp_server *server, unsigned char *iname, unsigned int *ilen,
const unsigned char *vname, unsigned int vlen, int cc)
int
ncp__io2vol(unsigned char *vname, unsigned int *vlen,
const unsigned char *iname, unsigned int ilen, int cc)
int
ncp__vol2io(unsigned char *iname, unsigned int *ilen,
const unsigned char *vname, unsigned int vlen, int cc)
