#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define AM_MODULE 1
#define STREAM_MODULE 0
static int intel_sst_check_device(void)
int intel_sst_open(struct inode *i_node, struct file *file_ptr)
int intel_sst_open_cntrl(struct inode *i_node, struct file *file_ptr)
int intel_sst_release(struct inode *i_node, struct file *file_ptr)
int intel_sst_release_cntrl(struct inode *i_node, struct file *file_ptr)
int intel_sst_mmap(struct file *file_ptr, struct vm_area_struct *vma)
static int intel_sst_mmap_play_capture(u32 str_id,
struct snd_sst_mmap_buffs *mmap_buf)
static int intel_sst_play_capture(struct stream_info *stream, int str_id)
static int snd_sst_fill_kernel_list(struct stream_info *stream,
const struct iovec *iovec, unsigned long nr_segs,
struct list_head *copy_to_list)
static int snd_sst_copy_userbuf_capture(struct stream_info *stream,
const struct iovec *iovec,
struct list_head *copy_to_list)
static int snd_sst_userbufs_play_cap(const struct iovec *iovec,
unsigned long nr_segs, unsigned int str_id,
struct stream_info *stream)
static int intel_sst_read_write(unsigned int str_id, char __user *buf,
size_t count)
int intel_sst_write(struct file *file_ptr, const char __user *buf,
size_t count, loff_t *offset)
ssize_t intel_sst_aio_write(struct kiocb *kiocb, const struct iovec *iov,
unsigned long nr_segs, loff_t  offset)
int intel_sst_read(struct file *file_ptr, char __user *buf,
size_t count, loff_t *offset)
ssize_t intel_sst_aio_read(struct kiocb *kiocb, const struct iovec *iov,
unsigned long nr_segs, loff_t offset)
static void sst_print_stream_params(struct snd_sst_get_stream_params *get_prm)
int sst_create_algo_ipc(struct snd_ppp_params *algo_params,
struct ipc_post **msg)
int sst_send_algo_ipc(struct ipc_post **msg)
long intel_sst_ioctl_dsp(unsigned int cmd, unsigned long arg)
int sst_ioctl_tuning_params(unsigned long arg)
long intel_sst_ioctl(struct file *file_ptr, unsigned int cmd, unsigned long arg)
