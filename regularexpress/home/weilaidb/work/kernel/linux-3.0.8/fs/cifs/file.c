static inline int cifs_convert_flags(unsigned int flags)
static u32 cifs_posix_convert_flags(unsigned int flags)
static inline int cifs_get_disposition(unsigned int flags)
int cifs_posix_open(char *full_path, struct inode **pinode,
struct super_block *sb, int mode, unsigned int f_flags,
__u32 *poplock, __u16 *pnetfid, int xid)
static int
cifs_nt_open(char *full_path, struct inode *inode, struct cifs_sb_info *cifs_sb,
struct cifs_tcon *tcon, unsigned int f_flags, __u32 *poplock,
__u16 *pnetfid, int xid)
struct cifsFileInfo *
cifs_new_fileinfo(__u16 fileHandle, struct file *file,
struct tcon_link *tlink, __u32 oplock)
void cifsFileInfo_put(struct cifsFileInfo *cifs_file)
int cifs_open(struct inode *inode, struct file *file)
static int cifs_relock_file(struct cifsFileInfo *cifsFile)
static int cifs_reopen_file(struct cifsFileInfo *pCifsFile, bool can_flush)
int cifs_close(struct inode *inode, struct file *file)
int cifs_closedir(struct inode *inode, struct file *file)
static int store_file_lock(struct cifsFileInfo *fid, __u64 len,
__u64 offset, __u8 lockType)
int cifs_lock(struct file *file, int cmd, struct file_lock *pfLock)
void
cifs_update_eof(struct cifsInodeInfo *cifsi, loff_t offset,
unsigned int bytes_written)
static ssize_t cifs_write(struct cifsFileInfo *open_file, __u32 pid,
const char *write_data, size_t write_size,
loff_t *poffset)
struct cifsFileInfo *find_readable_file(struct cifsInodeInfo *cifs_inode,
bool fsuid_only)
struct cifsFileInfo *find_writable_file(struct cifsInodeInfo *cifs_inode,
bool fsuid_only)
static int cifs_partialpagewrite(struct page *page, unsigned from, unsigned to)
static int cifs_writepages(struct address_space *mapping,
struct writeback_control *wbc)
static int
cifs_writepage_locked(struct page *page, struct writeback_control *wbc)
static int cifs_writepage(struct page *page, struct writeback_control *wbc)
static int cifs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
int cifs_strict_fsync(struct file *file, int datasync)
int cifs_fsync(struct file *file, int datasync)
int cifs_flush(struct file *file, fl_owner_t id)
static int
cifs_write_allocate_pages(struct page **pages, unsigned long num_pages)
static inline
size_t get_numpages(const size_t wsize, const size_t len, size_t *cur_len)
static ssize_t
cifs_iovec_write(struct file *file, const struct iovec *iov,
unsigned long nr_segs, loff_t *poffset)
ssize_t cifs_user_writev(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
ssize_t cifs_strict_writev(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t
cifs_iovec_read(struct file *file, const struct iovec *iov,
unsigned long nr_segs, loff_t *poffset)
ssize_t cifs_user_readv(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
ssize_t cifs_strict_readv(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t cifs_read(struct file *file, char *read_data, size_t read_size,
loff_t *poffset)
static int
cifs_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static struct vm_operations_struct cifs_file_vm_ops = ;
int cifs_file_strict_mmap(struct file *file, struct vm_area_struct *vma)
int cifs_file_mmap(struct file *file, struct vm_area_struct *vma)
static void cifs_copy_cache_pages(struct address_space *mapping,
struct list_head *pages, int bytes_read, char *data)
static int cifs_readpages(struct file *file, struct address_space *mapping,
struct list_head *page_list, unsigned num_pages)
static int cifs_readpage_worker(struct file *file, struct page *page,
loff_t *poffset)
static int cifs_readpage(struct file *file, struct page *page)
static int is_inode_writable(struct cifsInodeInfo *cifs_inode)
bool is_size_safe_to_change(struct cifsInodeInfo *cifsInode, __u64 end_of_file)
static int cifs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int cifs_release_page(struct page *page, gfp_t gfp)
static void cifs_invalidate_page(struct page *page, unsigned long offset)
static int cifs_launder_page(struct page *page)
void cifs_oplock_break(struct work_struct *work)
void cifs_oplock_break_get(struct cifsFileInfo *cfile)
void cifs_oplock_break_put(struct cifsFileInfo *cfile)
const struct address_space_operations cifs_addr_ops = ;
const struct address_space_operations cifs_addr_ops_smallbuf = ;
