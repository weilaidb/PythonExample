#define MTDOOPS_MAX_MTD_SIZE (8 * 1024 * 1024)
#define MTDOOPS_KERNMSG_MAGIC 0x5d005d00
#define MTDOOPS_HEADER_SIZE   8
static unsigned long record_size = 4096;
module_param(record_size, ulong, 0400);
MODULE_PARM_DESC(record_size,
"record size for MTD OOPS pages in bytes (default 4096)");
static char mtddev[80];
module_param_string(mtddev, mtddev, 80, 0400);
MODULE_PARM_DESC(mtddev,
"name or index number of the MTD device to use");
static int dump_oops = 1;
module_param(dump_oops, int, 0600);
MODULE_PARM_DESC(dump_oops,
"set to 1 to dump oopses, 0 to only dump panics (default 1)");
static struct mtdoops_context  oops_cxt;
static void mark_page_used(struct mtdoops_context *cxt, int page)
static void mark_page_unused(struct mtdoops_context *cxt, int page)
static int page_is_used(struct mtdoops_context *cxt, int page)
static void mtdoops_erase_callback(struct erase_info *done)
static int mtdoops_erase_block(struct mtdoops_context *cxt, int offset)
static void mtdoops_inc_counter(struct mtdoops_context *cxt)
static void mtdoops_workfunc_erase(struct work_struct *work)
static void mtdoops_write(struct mtdoops_context *cxt, int panic)
static void mtdoops_workfunc_write(struct work_struct *work)
static void find_next_position(struct mtdoops_context *cxt)
static void mtdoops_do_dump(struct kmsg_dumper *dumper,
enum kmsg_dump_reason reason, const char *s1, unsigned long l1,
const char *s2, unsigned long l2)
static void mtdoops_notify_add(struct mtd_info *mtd)
static void mtdoops_notify_remove(struct mtd_info *mtd)
static struct mtd_notifier mtdoops_notifier = ;
static int __init mtdoops_init(void)
static void __exit mtdoops_exit(void)
module_init(mtdoops_init);
module_exit(mtdoops_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Richard Purdie <rpurdie@openedhand.com>");
MODULE_DESCRIPTION("MTD Oops/Panic console logger/driver");
