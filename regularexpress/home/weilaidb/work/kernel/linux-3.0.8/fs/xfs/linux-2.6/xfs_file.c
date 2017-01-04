static const struct vm_operations_struct xfs_file_vm_ops;
static inline void
xfs_rw_ilock(
struct xfs_inode	*ip,
int			type)
static inline void
xfs_rw_iunlock(
struct xfs_inode	*ip,
int			type)
static inline void
xfs_rw_ilock_demote(
struct xfs_inode	*ip,
int			type)
STATIC int
xfs_iozero(
struct xfs_inode	*ip,
loff_t			pos,
size_t			count)
STATIC int
xfs_file_fsync(
struct file		*file,
int			datasync)
STATIC ssize_t
xfs_file_aio_read(
struct kiocb		*iocb,
const struct iovec	*iovp,
unsigned long		nr_segs,
loff_t			pos)
STATIC ssize_t
xfs_file_splice_read(
struct file		*infilp,
loff_t			*ppos,
struct pipe_inode_info	*pipe,
size_t			count,
unsigned int		flags)
STATIC void
xfs_aio_write_isize_update(
struct inode	*inode,
loff_t		*ppos,
ssize_t		bytes_written)
STATIC void
xfs_aio_write_newsize_update(
struct xfs_inode	*ip)
STATIC ssize_t
xfs_file_splice_write(
struct pipe_inode_info	*pipe,
struct file		*outfilp,
loff_t			*ppos,
size_t			count,
unsigned int		flags)
STATIC int
xfs_zero_last_block(
xfs_inode_t	*ip,
xfs_fsize_t	offset,
xfs_fsize_t	isize)
int
xfs_zero_eof(
xfs_inode_t	*ip,
xfs_off_t	offset,
xfs_fsize_t	isize)
STATIC ssize_t
xfs_file_aio_write_checks(
struct file		*file,
loff_t			*pos,
size_t			*count,
int			*iolock)
STATIC ssize_t
xfs_file_dio_aio_write(
struct kiocb		*iocb,
const struct iovec	*iovp,
unsigned long		nr_segs,
loff_t			pos,
size_t			ocount,
int			*iolock)
STATIC ssize_t
xfs_file_buffered_aio_write(
struct kiocb		*iocb,
const struct iovec	*iovp,
unsigned long		nr_segs,
loff_t			pos,
size_t			ocount,
int			*iolock)
STATIC ssize_t
xfs_file_aio_write(
struct kiocb		*iocb,
const struct iovec	*iovp,
unsigned long		nr_segs,
loff_t			pos)
STATIC long
xfs_file_fallocate(
struct file	*file,
int		mode,
loff_t		offset,
loff_t		len)
STATIC int
xfs_file_open(
struct inode	*inode,
struct file	*file)
STATIC int
xfs_dir_open(
struct inode	*inode,
struct file	*file)
STATIC int
xfs_file_release(
struct inode	*inode,
struct file	*filp)
STATIC int
xfs_file_readdir(
struct file	*filp,
void		*dirent,
filldir_t	filldir)
STATIC int
xfs_file_mmap(
struct file	*filp,
struct vm_area_struct *vma)
STATIC int
xfs_vm_page_mkwrite(
struct vm_area_struct	*vma,
struct vm_fault		*vmf)
const struct file_operations xfs_file_operations = ;
const struct file_operations xfs_dir_file_operations = ;
static const struct vm_operations_struct xfs_file_vm_ops = ;
