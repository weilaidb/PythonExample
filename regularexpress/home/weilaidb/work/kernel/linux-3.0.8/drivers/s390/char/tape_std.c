#define KMSG_COMPONENT "tape"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define TAPE_DBF_AREA	tape_core_dbf
static void
tape_std_assign_timeout(unsigned long data)
int
tape_std_assign(struct tape_device *device)
int
tape_std_unassign (struct tape_device *device)
int
tape_std_display(struct tape_device *device, struct display_struct *disp)
int
tape_std_read_block_id(struct tape_device *device, __u64 *id)
int
tape_std_terminate_write(struct tape_device *device)
int
tape_std_mtload(struct tape_device *device, int count)
int
tape_std_mtsetblk(struct tape_device *device, int count)
int
tape_std_mtreset(struct tape_device *device, int count)
int
tape_std_mtfsf(struct tape_device *device, int mt_count)
int
tape_std_mtfsr(struct tape_device *device, int mt_count)
int
tape_std_mtbsr(struct tape_device *device, int mt_count)
int
tape_std_mtweof(struct tape_device *device, int mt_count)
int
tape_std_mtbsfm(struct tape_device *device, int mt_count)
int
tape_std_mtbsf(struct tape_device *device, int mt_count)
int
tape_std_mtfsfm(struct tape_device *device, int mt_count)
int
tape_std_mtrew(struct tape_device *device, int mt_count)
int
tape_std_mtoffl(struct tape_device *device, int mt_count)
int
tape_std_mtnop(struct tape_device *device, int mt_count)
int
tape_std_mteom(struct tape_device *device, int mt_count)
int
tape_std_mtreten(struct tape_device *device, int mt_count)
int
tape_std_mterase(struct tape_device *device, int mt_count)
int
tape_std_mtunload(struct tape_device *device, int mt_count)
int
tape_std_mtcompression(struct tape_device *device, int mt_count)
struct tape_request *
tape_std_read_block(struct tape_device *device, size_t count)
void
tape_std_read_backward(struct tape_device *device, struct tape_request *request)
struct tape_request *
tape_std_write_block(struct tape_device *device, size_t count)
void
tape_std_process_eov(struct tape_device *device)
EXPORT_SYMBOL(tape_std_assign);
EXPORT_SYMBOL(tape_std_unassign);
EXPORT_SYMBOL(tape_std_display);
EXPORT_SYMBOL(tape_std_read_block_id);
EXPORT_SYMBOL(tape_std_mtload);
EXPORT_SYMBOL(tape_std_mtsetblk);
EXPORT_SYMBOL(tape_std_mtreset);
EXPORT_SYMBOL(tape_std_mtfsf);
EXPORT_SYMBOL(tape_std_mtfsr);
EXPORT_SYMBOL(tape_std_mtbsr);
EXPORT_SYMBOL(tape_std_mtweof);
EXPORT_SYMBOL(tape_std_mtbsfm);
EXPORT_SYMBOL(tape_std_mtbsf);
EXPORT_SYMBOL(tape_std_mtfsfm);
EXPORT_SYMBOL(tape_std_mtrew);
EXPORT_SYMBOL(tape_std_mtoffl);
EXPORT_SYMBOL(tape_std_mtnop);
EXPORT_SYMBOL(tape_std_mteom);
EXPORT_SYMBOL(tape_std_mtreten);
EXPORT_SYMBOL(tape_std_mterase);
EXPORT_SYMBOL(tape_std_mtunload);
EXPORT_SYMBOL(tape_std_mtcompression);
EXPORT_SYMBOL(tape_std_read_block);
EXPORT_SYMBOL(tape_std_read_backward);
EXPORT_SYMBOL(tape_std_write_block);
EXPORT_SYMBOL(tape_std_process_eov);
