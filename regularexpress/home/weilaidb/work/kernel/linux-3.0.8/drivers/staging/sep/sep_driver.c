#define SEP_RAR_IO_MEM_REGION_SIZE 0x40000
static struct sep_device *sep_dev;
static void sep_dump_message(struct sep_device *sep)
static int sep_map_and_alloc_shared_area(struct sep_device *sep)
static void sep_unmap_and_free_shared_area(struct sep_device *sep)
static void *sep_shared_bus_to_virt(struct sep_device *sep,
dma_addr_t bus_address)
static int sep_singleton_open(struct inode *inode_ptr, struct file *file_ptr)
static int sep_open(struct inode *inode, struct file *filp)
static int sep_singleton_release(struct inode *inode, struct file *filp)
static int sep_request_daemon_open(struct inode *inode, struct file *filp)
static int sep_request_daemon_release(struct inode *inode, struct file *filp)
static int sep_req_daemon_send_reply_command_handler(struct sep_device *sep)
static int sep_free_dma_table_data_handler(struct sep_device *sep)
static int sep_request_daemon_mmap(struct file  *filp,
struct vm_area_struct  *vma)
static unsigned int sep_request_daemon_poll(struct file *filp,
poll_table  *wait)
static int sep_release(struct inode *inode, struct file *filp)
static int sep_mmap(struct file *filp, struct vm_area_struct *vma)
static unsigned int sep_poll(struct file *filp, poll_table *wait)
static u32 *sep_time_address(struct sep_device *sep)
static unsigned long sep_set_time(struct sep_device *sep)
static int sep_set_caller_id_handler(struct sep_device *sep, unsigned long arg)
static int sep_set_current_caller_id(struct sep_device *sep)
static int sep_send_command_handler(struct sep_device *sep)
static int sep_allocate_data_pool_memory_handler(struct sep_device *sep,
unsigned long arg)
static int sep_lock_kernel_pages(struct sep_device *sep,
unsigned long kernel_virt_addr,
u32 data_size,
struct sep_lli_entry **lli_array_ptr,
int in_out_flag)
static int sep_lock_user_pages(struct sep_device *sep,
u32 app_virt_addr,
u32 data_size,
struct sep_lli_entry **lli_array_ptr,
int in_out_flag)
static u32 sep_calculate_lli_table_max_size(struct sep_device *sep,
struct sep_lli_entry *lli_in_array_ptr,
u32 num_array_entries,
u32 *last_table_flag)
static void sep_build_lli_table(struct sep_device *sep,
struct sep_lli_entry	*lli_array_ptr,
struct sep_lli_entry	*lli_table_ptr,
u32 *num_processed_entries_ptr,
u32 *num_table_entries_ptr,
u32 table_data_size)
static dma_addr_t sep_shared_area_virt_to_bus(struct sep_device *sep,
void *virt_address)
static void *sep_shared_area_bus_to_virt(struct sep_device *sep,
dma_addr_t bus_address)
static void sep_debug_print_lli_tables(struct sep_device *sep,
struct sep_lli_entry *lli_table_ptr,
unsigned long num_table_entries,
unsigned long table_data_size)
static void sep_prepare_empty_lli_table(struct sep_device *sep,
dma_addr_t *lli_table_addr_ptr,
u32 *num_entries_ptr,
u32 *table_data_size_ptr)
static int sep_prepare_input_dma_table(struct sep_device *sep,
unsigned long app_virt_addr,
u32 data_size,
u32 block_size,
dma_addr_t *lli_table_ptr,
u32 *num_entries_ptr,
u32 *table_data_size_ptr,
bool is_kva)
static int sep_construct_dma_tables_from_lli(
struct sep_device *sep,
struct sep_lli_entry *lli_in_array,
u32	sep_in_lli_entries,
struct sep_lli_entry *lli_out_array,
u32	sep_out_lli_entries,
u32	block_size,
dma_addr_t *lli_table_in_ptr,
dma_addr_t *lli_table_out_ptr,
u32	*in_num_entries_ptr,
u32	*out_num_entries_ptr,
u32	*table_data_size_ptr)
static int sep_prepare_input_output_dma_table(struct sep_device *sep,
unsigned long app_virt_in_addr,
unsigned long app_virt_out_addr,
u32 data_size,
u32 block_size,
dma_addr_t *lli_table_in_ptr,
dma_addr_t *lli_table_out_ptr,
u32 *in_num_entries_ptr,
u32 *out_num_entries_ptr,
u32 *table_data_size_ptr,
bool is_kva)
static int sep_prepare_input_output_dma_table_in_dcb(struct sep_device *sep,
unsigned long  app_in_address,
unsigned long  app_out_address,
u32  data_in_size,
u32  block_size,
u32  tail_block_size,
bool isapplet,
bool	is_kva)
static int sep_free_dma_tables_and_dcb(struct sep_device *sep, bool isapplet,
bool is_kva)
static int sep_get_static_pool_addr_handler(struct sep_device *sep)
static int sep_end_transaction_handler(struct sep_device *sep)
static int sep_prepare_dcb_handler(struct sep_device *sep, unsigned long arg)
static int sep_free_dcb_handler(struct sep_device *sep)
static int sep_rar_prepare_output_msg_handler(struct sep_device *sep,
unsigned long arg)
static long sep_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static long sep_singleton_ioctl(struct file  *filp, u32 cmd, unsigned long arg)
static long sep_request_daemon_ioctl(struct file *filp, u32 cmd,
unsigned long arg)
static irqreturn_t sep_inthandler(int irq, void *dev_id)
static int sep_reconfig_shared_area(struct sep_device *sep)
static const struct file_operations singleton_file_operations = ;
static const struct file_operations daemon_file_operations = ;
static const struct file_operations sep_file_operations = ;
static int sep_register_driver_with_fs(struct sep_device *sep)
static int __devinit sep_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void sep_remove(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(sep_pci_id_tbl) = ;
MODULE_DEVICE_TABLE(pci, sep_pci_id_tbl);
static struct pci_driver sep_pci_driver = ;
static int __init sep_init(void)
static void __exit sep_exit(void)
module_init(sep_init);
module_exit(sep_exit);
MODULE_LICENSE("GPL");
