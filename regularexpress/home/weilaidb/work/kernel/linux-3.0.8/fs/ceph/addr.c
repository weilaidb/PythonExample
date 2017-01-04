#define CONGESTION_ON_THRESH(congestion_kb) (congestion_kb >> (PAGE_SHIFT-10))
#define CONGESTION_OFF_THRESH(congestion_kb)				\
(CONGESTION_ON_THRESH(congestion_kb) -				\
(CONGESTION_ON_THRESH(congestion_kb) >> 2))
static int ceph_set_page_dirty(struct page *page)
static void ceph_invalidatepage(struct page *page, unsigned long offset)
static int ceph_releasepage(struct page *page, gfp_t g)
static int readpage_nounlock(struct file *filp, struct page *page)
static int ceph_readpage(struct file *filp, struct page *page)
static struct page **page_vector_from_list(struct list_head *page_list,
unsigned *nr_pages)
static int ceph_readpages(struct file *file, struct address_space *mapping,
struct list_head *page_list, unsigned nr_pages)
static struct ceph_snap_context *get_oldest_context(struct inode *inode,
u64 *snap_size)
static int writepage_nounlock(struct page *page, struct writeback_control *wbc)
static int ceph_writepage(struct page *page, struct writeback_control *wbc)
static void ceph_release_pages(struct page **pages, int num)
static void writepages_finish(struct ceph_osd_request *req,
struct ceph_msg *msg)
static void alloc_page_vec(struct ceph_fs_client *fsc,
struct ceph_osd_request *req)
static int ceph_writepages_start(struct address_space *mapping,
struct writeback_control *wbc)
static int context_is_writeable_or_written(struct inode *inode,
struct ceph_snap_context *snapc)
static int ceph_update_writeable_page(struct file *file,
loff_t pos, unsigned len,
struct page *page)
static int ceph_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int ceph_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static ssize_t ceph_direct_io(int rw, struct kiocb *iocb,
const struct iovec *iov,
loff_t pos, unsigned long nr_segs)
const struct address_space_operations ceph_aops = ;
static int ceph_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static struct vm_operations_struct ceph_vmops = ;
int ceph_mmap(struct file *file, struct vm_area_struct *vma)
