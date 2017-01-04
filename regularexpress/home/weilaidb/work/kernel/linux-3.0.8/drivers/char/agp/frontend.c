struct agp_front_data agp_fe;
struct agp_memory *agp_find_mem_by_key(int key)
static void agp_remove_from_pool(struct agp_memory *temp)
static struct
agp_segment_priv *agp_find_seg_in_client(const struct agp_client *client,
unsigned long offset,
int size, pgprot_t page_prot)
static void agp_remove_seg_from_client(struct agp_client *client)
static void agp_add_seg_to_client(struct agp_client *client,
struct agp_segment_priv ** seg, int num_segments)
static pgprot_t agp_convert_mmap_flags(int prot)
int agp_create_segment(struct agp_client *client, struct agp_region *region)
static void agp_insert_into_pool(struct agp_memory * temp)
struct agp_file_private *agp_find_private(pid_t pid)
static void agp_insert_file_private(struct agp_file_private * priv)
static void agp_remove_file_private(struct agp_file_private * priv)
void agp_free_memory_wrap(struct agp_memory *memory)
struct agp_memory *agp_allocate_memory_wrap(size_t pg_count, u32 type)
static struct agp_controller *agp_find_controller_by_pid(pid_t id)
static struct agp_controller *agp_create_controller(pid_t id)
static int agp_insert_controller(struct agp_controller *controller)
static void agp_remove_all_clients(struct agp_controller *controller)
static void agp_remove_all_memory(struct agp_controller *controller)
static int agp_remove_controller(struct agp_controller *controller)
static void agp_controller_make_current(struct agp_controller *controller)
static void agp_controller_release_current(struct agp_controller *controller,
struct agp_file_private *controller_priv)
static struct agp_client
*agp_find_client_in_controller(struct agp_controller *controller, pid_t id)
static struct agp_controller *agp_find_controller_for_client(pid_t id)
struct agp_client *agp_find_client_by_pid(pid_t id)
static void agp_insert_client(struct agp_client *client)
struct agp_client *agp_create_client(pid_t id)
int agp_remove_client(pid_t id)
static int agp_mmap(struct file *file, struct vm_area_struct *vma)
static int agp_release(struct inode *inode, struct file *file)
static int agp_open(struct inode *inode, struct file *file)
static ssize_t agp_read(struct file *file, char __user *buf,
size_t count, loff_t * ppos)
static ssize_t agp_write(struct file *file, const char __user *buf,
size_t count, loff_t * ppos)
static int agpioc_info_wrap(struct agp_file_private *priv, void __user *arg)
int agpioc_acquire_wrap(struct agp_file_private *priv)
int agpioc_release_wrap(struct agp_file_private *priv)
int agpioc_setup_wrap(struct agp_file_private *priv, void __user *arg)
static int agpioc_reserve_wrap(struct agp_file_private *priv, void __user *arg)
int agpioc_protect_wrap(struct agp_file_private *priv)
static int agpioc_allocate_wrap(struct agp_file_private *priv, void __user *arg)
int agpioc_deallocate_wrap(struct agp_file_private *priv, int arg)
static int agpioc_bind_wrap(struct agp_file_private *priv, void __user *arg)
static int agpioc_unbind_wrap(struct agp_file_private *priv, void __user *arg)
static long agp_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations agp_fops =
;
static struct miscdevice agp_miscdev =
;
int agp_frontend_initialize(void)
void agp_frontend_cleanup(void)
