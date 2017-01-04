#define DRIVER_NAME	"ibmasm"
#define DRIVER_VERSION  "1.0"
#define DRIVER_AUTHOR   "Max Asbock <masbock@us.ibm.com>, Vernon Mauery <vernux@us.ibm.com>"
#define DRIVER_DESC     "IBM ASM Service Processor Driver"
#define err(msg) printk(KERN_ERR "%s: " msg "\n", DRIVER_NAME)
#define info(msg) printk(KERN_INFO "%s: " msg "\n", DRIVER_NAME)
extern int ibmasm_debug;
#define dbg(STR, ARGS...)					\
do  while (0)
static inline char *get_timestamp(char *buf)
#define IBMASM_CMD_PENDING	0
#define IBMASM_CMD_COMPLETE	1
#define IBMASM_CMD_FAILED	2
#define IBMASM_CMD_TIMEOUT_NORMAL	45
#define IBMASM_CMD_TIMEOUT_EXTRA	240
#define IBMASM_CMD_MAX_BUFFER_SIZE	0x8000
#define REVERSE_HEARTBEAT_TIMEOUT	120
#define HEARTBEAT_BUFFER_SIZE		0x400
#define IBMASM_DRIVER_VPD "Lin64 6.08      "
#define IBMASM_DRIVER_VPD "Lin32 6.08      "
#define SYSTEM_STATE_OS_UP      5
#define SYSTEM_STATE_OS_DOWN    4
#define IBMASM_NAME_SIZE	16
#define IBMASM_NUM_EVENTS	10
#define IBMASM_EVENT_MAX_SIZE	2048u
struct command ;
#define to_command(c) container_of(c, struct command, kref)
void ibmasm_free_command(struct kref *kref);
static inline void command_put(struct command *cmd)
static inline void command_get(struct command *cmd)
struct ibmasm_event ;
struct event_buffer ;
struct event_reader ;
struct reverse_heartbeat ;
struct ibmasm_remote ;
struct service_processor ;
struct command *ibmasm_new_command(struct service_processor *sp, size_t buffer_size);
void ibmasm_exec_command(struct service_processor *sp, struct command *cmd);
void ibmasm_wait_for_response(struct command *cmd, int timeout);
void ibmasm_receive_command_response(struct service_processor *sp, void *response,  size_t size);
int ibmasm_event_buffer_init(struct service_processor *sp);
void ibmasm_event_buffer_exit(struct service_processor *sp);
void ibmasm_receive_event(struct service_processor *sp, void *data,  unsigned int data_size);
void ibmasm_event_reader_register(struct service_processor *sp, struct event_reader *reader);
void ibmasm_event_reader_unregister(struct service_processor *sp, struct event_reader *reader);
int ibmasm_get_next_event(struct service_processor *sp, struct event_reader *reader);
void ibmasm_cancel_next_event(struct event_reader *reader);
void ibmasm_register_panic_notifier(void);
void ibmasm_unregister_panic_notifier(void);
int ibmasm_heartbeat_init(struct service_processor *sp);
void ibmasm_heartbeat_exit(struct service_processor *sp);
void ibmasm_receive_heartbeat(struct service_processor *sp,  void *message, size_t size);
void ibmasm_init_reverse_heartbeat(struct service_processor *sp, struct reverse_heartbeat *rhb);
int ibmasm_start_reverse_heartbeat(struct service_processor *sp, struct reverse_heartbeat *rhb);
void ibmasm_stop_reverse_heartbeat(struct reverse_heartbeat *rhb);
void ibmasm_receive_message(struct service_processor *sp, void *data, int data_size);
int ibmasm_send_driver_vpd(struct service_processor *sp);
int ibmasm_send_os_state(struct service_processor *sp, int os_state);
int ibmasm_send_i2o_message(struct service_processor *sp);
irqreturn_t ibmasm_interrupt_handler(int irq, void * dev_id);
void ibmasm_handle_mouse_interrupt(struct service_processor *sp);
int ibmasm_init_remote_input_dev(struct service_processor *sp);
void ibmasm_free_remote_input_dev(struct service_processor *sp);
int ibmasmfs_register(void);
void ibmasmfs_unregister(void);
void ibmasmfs_add_sp(struct service_processor *sp);
void ibmasm_register_uart(struct service_processor *sp);
void ibmasm_unregister_uart(struct service_processor *sp);
#define ibmasm_register_uart(sp)	do  while(0)
#define ibmasm_unregister_uart(sp)	do  while(0)
