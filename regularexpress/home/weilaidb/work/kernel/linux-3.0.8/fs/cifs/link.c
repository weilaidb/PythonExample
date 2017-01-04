#define CIFS_MF_SYMLINK_LEN_OFFSET (4+1)
#define CIFS_MF_SYMLINK_MD5_OFFSET (CIFS_MF_SYMLINK_LEN_OFFSET+(4+1))
#define CIFS_MF_SYMLINK_LINK_OFFSET (CIFS_MF_SYMLINK_MD5_OFFSET+(32+1))
#define CIFS_MF_SYMLINK_LINK_MAXLEN (1024)
#define CIFS_MF_SYMLINK_FILE_SIZE \
(CIFS_MF_SYMLINK_LINK_OFFSET + CIFS_MF_SYMLINK_LINK_MAXLEN)
#define CIFS_MF_SYMLINK_LEN_FORMAT "XSym\n%04u\n"
#define CIFS_MF_SYMLINK_MD5_FORMAT \
"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\n"
#define CIFS_MF_SYMLINK_MD5_ARGS(md5_hash) \
md5_hash[0],  md5_hash[1],  md5_hash[2],  md5_hash[3], \
md5_hash[4],  md5_hash[5],  md5_hash[6],  md5_hash[7], \
md5_hash[8],  md5_hash[9],  md5_hash[10], md5_hash[11],\
md5_hash[12], md5_hash[13], md5_hash[14], md5_hash[15]
static int
symlink_hash(unsigned int link_len, const char *link_str, u8 *md5_hash)
static int
CIFSParseMFSymlink(const u8 *buf,
unsigned int buf_len,
unsigned int *_link_len,
char **_link_str)
static int
CIFSFormatMFSymlink(u8 *buf, unsigned int buf_len, const char *link_str)
static int
CIFSCreateMFSymLink(const int xid, struct cifs_tcon *tcon,
const char *fromName, const char *toName,
const struct nls_table *nls_codepage, int remap)
static int
CIFSQueryMFSymLink(const int xid, struct cifs_tcon *tcon,
const unsigned char *searchName, char **symlinkinfo,
const struct nls_table *nls_codepage, int remap)
bool
CIFSCouldBeMFSymlink(const struct cifs_fattr *fattr)
int
CIFSCheckMFSymlink(struct cifs_fattr *fattr,
const unsigned char *path,
struct cifs_sb_info *cifs_sb, int xid)
int
cifs_hardlink(struct dentry *old_file, struct inode *inode,
struct dentry *direntry)
void *
cifs_follow_link(struct dentry *direntry, struct nameidata *nd)
int
cifs_symlink(struct inode *inode, struct dentry *direntry, const char *symname)
void cifs_put_link(struct dentry *direntry, struct nameidata *nd, void *cookie)
