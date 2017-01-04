#define RESULT_OK		0
#define RESULT_FAIL		1
#define RESULT_UNSUP_HOST	2
#define RESULT_UNSUP_CARD	3
#define BUFFER_ORDER		2
#define BUFFER_SIZE		(PAGE_SIZE << BUFFER_ORDER)
#define TEST_AREA_MAX_SIZE (128 * 1024 * 1024)
struct mmc_test_pages ;
struct mmc_test_mem ;
struct mmc_test_area ;
struct mmc_test_transfer_result ;
struct mmc_test_general_result ;
struct mmc_test_dbgfs_file ;
struct mmc_test_card ;
static int mmc_test_set_blksize(struct mmc_test_card *test, unsigned size)
static void mmc_test_prepare_mrq(struct mmc_test_card *test,
struct mmc_request *mrq, struct scatterlist *sg, unsigned sg_len,
unsigned dev_addr, unsigned blocks, unsigned blksz, int write)
static int mmc_test_busy(struct mmc_command *cmd)
static int mmc_test_wait_busy(struct mmc_test_card *test)
static int mmc_test_buffer_transfer(struct mmc_test_card *test,
u8 *buffer, unsigned addr, unsigned blksz, int write)
static void mmc_test_free_mem(struct mmc_test_mem *mem)
static struct mmc_test_mem *mmc_test_alloc_mem(unsigned long min_sz,
unsigned long max_sz,
unsigned int max_segs,
unsigned int max_seg_sz)
static int mmc_test_map_sg(struct mmc_test_mem *mem, unsigned long sz,
struct scatterlist *sglist, int repeat,
unsigned int max_segs, unsigned int max_seg_sz,
unsigned int *sg_len)
static int mmc_test_map_sg_max_scatter(struct mmc_test_mem *mem,
unsigned long sz,
struct scatterlist *sglist,
unsigned int max_segs,
unsigned int max_seg_sz,
unsigned int *sg_len)
static unsigned int mmc_test_rate(uint64_t bytes, struct timespec *ts)
static void mmc_test_save_transfer_result(struct mmc_test_card *test,
unsigned int count, unsigned int sectors, struct timespec ts,
unsigned int rate, unsigned int iops)
static void mmc_test_print_rate(struct mmc_test_card *test, uint64_t bytes,
struct timespec *ts1, struct timespec *ts2)
static void mmc_test_print_avg_rate(struct mmc_test_card *test, uint64_t bytes,
unsigned int count, struct timespec *ts1,
struct timespec *ts2)
static unsigned int mmc_test_capacity(struct mmc_card *card)
static int __mmc_test_prepare(struct mmc_test_card *test, int write)
static int mmc_test_prepare_write(struct mmc_test_card *test)
static int mmc_test_prepare_read(struct mmc_test_card *test)
static int mmc_test_cleanup(struct mmc_test_card *test)
static void mmc_test_prepare_broken_mrq(struct mmc_test_card *test,
struct mmc_request *mrq, int write)
static int mmc_test_check_result(struct mmc_test_card *test,
struct mmc_request *mrq)
static int mmc_test_check_broken_result(struct mmc_test_card *test,
struct mmc_request *mrq)
static int mmc_test_simple_transfer(struct mmc_test_card *test,
struct scatterlist *sg, unsigned sg_len, unsigned dev_addr,
unsigned blocks, unsigned blksz, int write)
static int mmc_test_broken_transfer(struct mmc_test_card *test,
unsigned blocks, unsigned blksz, int write)
static int mmc_test_transfer(struct mmc_test_card *test,
struct scatterlist *sg, unsigned sg_len, unsigned dev_addr,
unsigned blocks, unsigned blksz, int write)
struct mmc_test_case ;
static int mmc_test_basic_write(struct mmc_test_card *test)
static int mmc_test_basic_read(struct mmc_test_card *test)
static int mmc_test_verify_write(struct mmc_test_card *test)
static int mmc_test_verify_read(struct mmc_test_card *test)
static int mmc_test_multi_write(struct mmc_test_card *test)
static int mmc_test_multi_read(struct mmc_test_card *test)
static int mmc_test_pow2_write(struct mmc_test_card *test)
static int mmc_test_pow2_read(struct mmc_test_card *test)
static int mmc_test_weird_write(struct mmc_test_card *test)
static int mmc_test_weird_read(struct mmc_test_card *test)
static int mmc_test_align_write(struct mmc_test_card *test)
static int mmc_test_align_read(struct mmc_test_card *test)
static int mmc_test_align_multi_write(struct mmc_test_card *test)
static int mmc_test_align_multi_read(struct mmc_test_card *test)
static int mmc_test_xfersize_write(struct mmc_test_card *test)
static int mmc_test_xfersize_read(struct mmc_test_card *test)
static int mmc_test_multi_xfersize_write(struct mmc_test_card *test)
static int mmc_test_multi_xfersize_read(struct mmc_test_card *test)
static int mmc_test_write_high(struct mmc_test_card *test)
static int mmc_test_read_high(struct mmc_test_card *test)
static int mmc_test_multi_write_high(struct mmc_test_card *test)
static int mmc_test_multi_read_high(struct mmc_test_card *test)
static int mmc_test_no_highmem(struct mmc_test_card *test)
static int mmc_test_area_map(struct mmc_test_card *test, unsigned long sz,
int max_scatter)
static int mmc_test_area_transfer(struct mmc_test_card *test,
unsigned int dev_addr, int write)
static int mmc_test_area_io(struct mmc_test_card *test, unsigned long sz,
unsigned int dev_addr, int write, int max_scatter,
int timed)
static int mmc_test_area_fill(struct mmc_test_card *test)
static int mmc_test_area_erase(struct mmc_test_card *test)
static int mmc_test_area_cleanup(struct mmc_test_card *test)
static int mmc_test_area_init(struct mmc_test_card *test, int erase, int fill)
static int mmc_test_area_prepare(struct mmc_test_card *test)
static int mmc_test_area_prepare_erase(struct mmc_test_card *test)
static int mmc_test_area_prepare_fill(struct mmc_test_card *test)
static int mmc_test_best_performance(struct mmc_test_card *test, int write,
int max_scatter)
static int mmc_test_best_read_performance(struct mmc_test_card *test)
static int mmc_test_best_write_performance(struct mmc_test_card *test)
static int mmc_test_best_read_perf_max_scatter(struct mmc_test_card *test)
static int mmc_test_best_write_perf_max_scatter(struct mmc_test_card *test)
static int mmc_test_profile_read_perf(struct mmc_test_card *test)
static int mmc_test_profile_write_perf(struct mmc_test_card *test)
static int mmc_test_profile_trim_perf(struct mmc_test_card *test)
static int mmc_test_seq_read_perf(struct mmc_test_card *test, unsigned long sz)
static int mmc_test_profile_seq_read_perf(struct mmc_test_card *test)
static int mmc_test_seq_write_perf(struct mmc_test_card *test, unsigned long sz)
static int mmc_test_profile_seq_write_perf(struct mmc_test_card *test)
static int mmc_test_profile_seq_trim_perf(struct mmc_test_card *test)
static unsigned int rnd_next = 1;
static unsigned int mmc_test_rnd_num(unsigned int rnd_cnt)
static int mmc_test_rnd_perf(struct mmc_test_card *test, int write, int print,
unsigned long sz)
static int mmc_test_random_perf(struct mmc_test_card *test, int write)
static int mmc_test_random_read_perf(struct mmc_test_card *test)
static int mmc_test_random_write_perf(struct mmc_test_card *test)
static int mmc_test_seq_perf(struct mmc_test_card *test, int write,
unsigned int tot_sz, int max_scatter)
static int mmc_test_large_seq_perf(struct mmc_test_card *test, int write)
static int mmc_test_large_seq_read_perf(struct mmc_test_card *test)
static int mmc_test_large_seq_write_perf(struct mmc_test_card *test)
static const struct mmc_test_case mmc_test_cases[] = ;
static DEFINE_MUTEX(mmc_test_lock);
static LIST_HEAD(mmc_test_result);
static void mmc_test_run(struct mmc_test_card *test, int testcase)
static void mmc_test_free_result(struct mmc_card *card)
static LIST_HEAD(mmc_test_file_test);
static int mtf_test_show(struct seq_file *sf, void *data)
static int mtf_test_open(struct inode *inode, struct file *file)
static ssize_t mtf_test_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
{
struct seq_file *sf = (struct seq_file *)file->private_data;
struct mmc_card *card = (struct mmc_card *)sf->private;
struct mmc_test_card *test;
char lbuf[12];
long testcase;
if (count >= sizeof(lbuf))
return -EINVAL;
if (copy_from_user(lbuf, buf, count))
return -EFAULT;
lbuf[count] = '\0';
if (strict_strtol(lbuf, 10, &testcase))
return -EINVAL;
test = kzalloc(sizeof(struct mmc_test_card), GFP_KERNEL);
if (!test)
return -ENOMEM;
mmc_test_free_result(card);
test->card = card;
test->buffer = kzalloc(BUFFER_SIZE, GFP_KERNEL);
test->highmem = alloc_pages(GFP_KERNEL | __GFP_HIGHMEM, BUFFER_ORDER);
if (test->buffer && test->highmem)
static const struct file_operations mmc_test_fops_test = ;
static void mmc_test_free_file_test(struct mmc_card *card)
static int mmc_test_register_file_test(struct mmc_card *card)
static int mmc_test_probe(struct mmc_card *card)
static void mmc_test_remove(struct mmc_card *card)
static struct mmc_driver mmc_driver = ;
static int __init mmc_test_init(void)
static void __exit mmc_test_exit(void)
module_init(mmc_test_init);
module_exit(mmc_test_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Multimedia Card (MMC) host test driver");
MODULE_AUTHOR("Pierre Ossman");
