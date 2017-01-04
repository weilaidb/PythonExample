#define _MEI_DEV_H_
#define MEI_MINORS_BASE	1
#define MEI_MINORS_COUNT	1
#define MEI_MINOR_NUMBER	1
#define MEI_WATCHDOG_DATA_SIZE         16
#define MEI_START_WD_DATA_SIZE         20
#define MEI_WD_PARAMS_SIZE             4
#define MEI_WD_STATE_INDEPENDENCE_MSG_SENT       (1 << 0)
extern const uuid_le mei_amthi_guid;
extern const uuid_le mei_wd_guid;
extern const u8 mei_wd_state_independence_msg[3][4];
#define  MEI_MAX_OPEN_HANDLE_COUNT	253
#define MEI_IO_LISTS_NUMBER        7
#define MEI_CLIENTS_MAX 255
enum file_state ;
enum mei_states ;
enum mei_init_clients_states ;
enum iamthif_states ;
enum mei_file_transaction_states ;
enum mei_cb_major_types ;
struct mei_message_data  __packed;
struct mei_cl_cb ;
struct mei_cl ;
struct mei_io_list ;
struct mei_device ;
struct mei_device *init_mei_device(struct pci_dev *pdev);
void mei_reset(struct mei_device *dev, int interrupts);
int mei_hw_init(struct mei_device *dev);
int mei_task_initialize_clients(void *data);
int mei_initialize_clients(struct mei_device *dev);
struct mei_cl *mei_alloc_file_private(struct mei_device *dev);
int mei_disconnect_host_client(struct mei_device *dev, struct mei_cl *cl);
void mei_initialize_list(struct mei_io_list *list,
struct mei_device *dev);
void mei_flush_list(struct mei_io_list *list, struct mei_cl *cl);
void mei_flush_queues(struct mei_device *dev, struct mei_cl *cl);
void mei_remove_client_from_file_list(struct mei_device *dev,
u8 host_client_id);
void host_init_iamthif(struct mei_device *dev);
void mei_init_file_private(struct mei_cl *priv, struct mei_device *dev);
void allocate_me_clients_storage(struct mei_device *dev);
void host_start_message(struct mei_device *dev);
void host_enum_clients_message(struct mei_device *dev);
void host_client_properties(struct mei_device *dev);
u8 mei_find_me_client_update_filext(struct mei_device *dev,
struct mei_cl *priv,
const uuid_le *cguid, u8 client_id);
irqreturn_t mei_interrupt_quick_handler(int irq, void *dev_id);
irqreturn_t  mei_interrupt_thread_handler(int irq, void *dev_id);
void mei_wd_timer(struct work_struct *work);
int mei_ioctl_connect_client(struct file *file,
struct mei_connect_client_data *data);
int mei_start_read(struct mei_device *dev, struct mei_cl *cl);
int amthi_write(struct mei_device *dev, struct mei_cl_cb *priv_cb);
int amthi_read(struct mei_device *dev, struct file *file,
char __user *ubuf, size_t length, loff_t *offset);
struct mei_cl_cb *find_amthi_read_list_entry(struct mei_device *dev,
struct file *file);
void run_next_iamthif_cmd(struct mei_device *dev);
void mei_free_cb_private(struct mei_cl_cb *priv_cb);
int mei_find_me_client_index(const struct mei_device *dev, uuid_le cuuid);
static inline u32 mei_reg_read(struct mei_device *dev,
unsigned long offset)
static inline void mei_reg_write(struct mei_device *dev,
unsigned long offset, u32 value)
static inline u32 mei_hcsr_read(struct mei_device *dev)
static inline u32 mei_mecsr_read(struct mei_device *dev)
static inline u32 mei_mecbrw_read(struct mei_device *dev)
void mei_hcsr_set(struct mei_device *dev);
void mei_csr_clear_his(struct mei_device *dev);
void mei_enable_interrupts(struct mei_device *dev);
void mei_disable_interrupts(struct mei_device *dev);
static inline int mei_fe_same_id(const struct mei_cl *fe1,
const struct mei_cl *fe2)
