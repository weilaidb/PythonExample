struct host_controller_info  __packed;
#define FIRMWARE_BLOCK_BOUNDARY 1024
struct sd_command_header  __packed;
struct sd_irqpoll_header  __packed;
struct sd_common_header  __packed;
struct sd_response_header  __packed;
struct sd_status_header  __packed;
struct sd_error_header  __packed;
struct sd_interrupt_header  __packed;
struct offload_registers_access  __packed;
#define INTERRUPT_REGISTER_ACCESSES 15
struct sd_offloaded_interrupt  __packed;
struct sd_register_header  __packed;
#define PIGGYBACK_REGISTER_ACCESSES 14
struct sd_offloaded_piggyback  __packed;
union sd_response  __packed;
union sd_command  __packed;
enum SD_RESPONSE_TYPE ;
#define RESPONSE_INTERRUPT			0x01
#define RESPONSE_ERROR				0x02
#define RESPONSE_STATUS				0x03
#define RESPONSE_IRQ_DISABLED			0x05
#define RESPONSE_IRQ_ENABLED			0x06
#define RESPONSE_PIGGYBACKED			0x07
#define RESPONSE_NO_INTERRUPT			0x08
#define RESPONSE_PIG_DISABLED			0x09
#define RESPONSE_PIG_ENABLED			0x0A
#define SD_ERROR_1BIT_TIMEOUT			0x01
#define SD_ERROR_4BIT_TIMEOUT			0x02
#define SD_ERROR_1BIT_CRC_WRONG			0x03
#define SD_ERROR_4BIT_CRC_WRONG			0x04
#define SD_ERROR_1BIT_CRC_ERROR			0x05
#define SD_ERROR_4BIT_CRC_ERROR			0x06
#define SD_ERROR_NO_CMD_ENDBIT			0x07
#define SD_ERROR_NO_1BIT_DATEND			0x08
#define SD_ERROR_NO_4BIT_DATEND			0x09
#define SD_ERROR_1BIT_UNEXPECTED_TIMEOUT	0x0A
#define SD_ERROR_4BIT_UNEXPECTED_TIMEOUT	0x0B
#define SD_ERROR_ILLEGAL_COMMAND		0x0C
#define SD_ERROR_NO_DEVICE			0x0D
#define SD_ERROR_TRANSFER_LENGTH		0x0E
#define SD_ERROR_1BIT_DATA_TIMEOUT		0x0F
#define SD_ERROR_4BIT_DATA_TIMEOUT		0x10
#define SD_ERROR_ILLEGAL_STATE			0x11
#define SD_ERROR_UNKNOWN_ERROR			0x12
#define SD_ERROR_RESERVED_ERROR			0x13
#define SD_ERROR_INVALID_FUNCTION		0x14
#define SD_ERROR_OUT_OF_RANGE			0x15
#define SD_ERROR_STAT_CMD			0x16
#define SD_ERROR_STAT_DATA			0x17
#define SD_ERROR_STAT_CMD_TIMEOUT		0x18
#define SD_ERROR_SDCRDY_STUCK			0x19
#define SD_ERROR_UNHANDLED			0x1A
#define SD_ERROR_OVERRUN			0x1B
#define SD_ERROR_PIO_TIMEOUT			0x1C
#define FUN(c) (0x000007 & (c->arg>>28))
#define REG(c) (0x01FFFF & (c->arg>>9))
static int limit_speed_to_24_MHz;
module_param(limit_speed_to_24_MHz, bool, 0644);
MODULE_PARM_DESC(limit_speed_to_24_MHz, "Limit Max SDIO Clock Speed to 24 MHz");
static int pad_input_to_usb_pkt;
module_param(pad_input_to_usb_pkt, bool, 0644);
MODULE_PARM_DESC(pad_input_to_usb_pkt,
"Pad USB data input transfers to whole USB Packet");
static int disable_offload_processing;
module_param(disable_offload_processing, bool, 0644);
MODULE_PARM_DESC(disable_offload_processing, "Disable Offload Processing");
static int force_1_bit_data_xfers;
module_param(force_1_bit_data_xfers, bool, 0644);
MODULE_PARM_DESC(force_1_bit_data_xfers,
"Force SDIO Data Transfers to 1-bit Mode");
static int force_polling_for_irqs;
module_param(force_polling_for_irqs, bool, 0644);
MODULE_PARM_DESC(force_polling_for_irqs, "Force Polling for SDIO interrupts");
static int firmware_irqpoll_timeout = 1024;
module_param(firmware_irqpoll_timeout, int, 0644);
MODULE_PARM_DESC(firmware_irqpoll_timeout, "VUB300 firmware irqpoll timeout");
static int force_max_req_size = 128;
module_param(force_max_req_size, int, 0644);
MODULE_PARM_DESC(force_max_req_size, "set max request size in kBytes");
static int firmware_rom_wait_states = 0x04;
static int firmware_rom_wait_states = 0x1C;
module_param(firmware_rom_wait_states, bool, 0644);
MODULE_PARM_DESC(firmware_rom_wait_states,
"ROM wait states byte=RRRIIEEE (Reserved Internal External)");
#define ELAN_VENDOR_ID		0x2201
#define VUB300_VENDOR_ID	0x0424
#define VUB300_PRODUCT_ID	0x012C
static struct usb_device_id vub300_table[] = ;
MODULE_DEVICE_TABLE(usb, vub300_table);
static struct workqueue_struct *cmndworkqueue;
static struct workqueue_struct *pollworkqueue;
static struct workqueue_struct *deadworkqueue;
static inline int interface_to_InterfaceNumber(struct usb_interface *interface)
struct sdio_register ;
struct vub300_mmc_host ;
#define kref_to_vub300_mmc_host(d) container_of(d, struct vub300_mmc_host, kref)
#define SET_TRANSFER_PSEUDOCODE		21
#define SET_INTERRUPT_PSEUDOCODE	20
#define SET_FAILURE_MODE		18
#define SET_ROM_WAIT_STATES		16
#define SET_IRQ_ENABLE			13
#define SET_CLOCK_SPEED			11
#define SET_FUNCTION_BLOCK_SIZE		9
#define SET_SD_DATA_MODE		6
#define SET_SD_POWER			4
#define ENTER_DFU_MODE			3
#define GET_HC_INF0			1
#define GET_SYSTEM_PORT_STATUS		0
static void vub300_delete(struct kref *kref)
static void vub300_queue_cmnd_work(struct vub300_mmc_host *vub300)
static void vub300_queue_poll_work(struct vub300_mmc_host *vub300, int delay)
static void vub300_queue_dead_work(struct vub300_mmc_host *vub300)
static void irqpoll_res_completed(struct urb *urb)
static void irqpoll_out_completed(struct urb *urb)
static void send_irqpoll(struct vub300_mmc_host *vub300)
static void new_system_port_status(struct vub300_mmc_host *vub300)
static void __add_offloaded_reg_to_fifo(struct vub300_mmc_host *vub300,
struct offload_registers_access
*register_access, u8 func)
static void add_offloaded_reg(struct vub300_mmc_host *vub300,
struct offload_registers_access *register_access)
static void check_vub300_port_status(struct vub300_mmc_host *vub300)
static void __vub300_irqpoll_response(struct vub300_mmc_host *vub300)
static void __do_poll(struct vub300_mmc_host *vub300)
static void vub300_pollwork_thread(struct work_struct *work)
static void vub300_deadwork_thread(struct work_struct *work)
static void vub300_inactivity_timer_expired(unsigned long data)
static int vub300_response_error(u8 error_code)
static void command_res_completed(struct urb *urb)
static void command_out_completed(struct urb *urb)
static void snoop_block_size_and_bus_width(struct vub300_mmc_host *vub300,
u32 cmd_arg)
static void send_command(struct vub300_mmc_host *vub300)
static void vub300_sg_timed_out(unsigned long data)
static u16 roundup_to_multiple_of_64(u16 number)
static void __download_offload_pseudocode(struct vub300_mmc_host *vub300,
const struct firmware *fw)
static void download_offload_pseudocode(struct vub300_mmc_host *vub300)
static void vub300_usb_bulk_msg_completion(struct urb *urb)
static int vub300_usb_bulk_msg(struct vub300_mmc_host *vub300,
unsigned int pipe, void *data, int len,
int *actual_length, int timeout_msecs)
static int __command_read_data(struct vub300_mmc_host *vub300,
struct mmc_command *cmd, struct mmc_data *data)
static int __command_write_data(struct vub300_mmc_host *vub300,
struct mmc_command *cmd, struct mmc_data *data)
static void __vub300_command_response(struct vub300_mmc_host *vub300,
struct mmc_command *cmd,
struct mmc_data *data, int data_length)
static void construct_request_response(struct vub300_mmc_host *vub300,
struct mmc_command *cmd)
static void vub300_cmndwork_thread(struct work_struct *work)
static int examine_cyclic_buffer(struct vub300_mmc_host *vub300,
struct mmc_command *cmd, u8 Function)
static int satisfy_request_from_offloaded_data(struct vub300_mmc_host *vub300,
struct mmc_command *cmd)
static void vub300_mmc_request(struct mmc_host *mmc, struct mmc_request *req)
static void __set_clock_speed(struct vub300_mmc_host *vub300, u8 buf[8],
struct mmc_ios *ios)
static void vub300_mmc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int vub300_mmc_get_ro(struct mmc_host *mmc)
static void vub300_enable_sdio_irq(struct mmc_host *mmc, int enable)
void vub300_init_card(struct mmc_host *mmc, struct mmc_card *card)
static struct mmc_host_ops vub300_mmc_ops = ;
static int vub300_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void vub300_disconnect(struct usb_interface *interface)
static int vub300_suspend(struct usb_interface *intf, pm_message_t message)
static int vub300_resume(struct usb_interface *intf)
#define vub300_suspend NULL
#define vub300_resume NULL
static int vub300_pre_reset(struct usb_interface *intf)
static int vub300_post_reset(struct usb_interface *intf)
static struct usb_driver vub300_driver = ;
static int __init vub300_init(void)
static void __exit vub300_exit(void)
module_init(vub300_init);
module_exit(vub300_exit);
MODULE_AUTHOR("Tony Olech <tony.olech@elandigitalsystems.com>");
MODULE_DESCRIPTION("VUB300 USB to SD/MMC/SDIO adapter driver");
MODULE_LICENSE("GPL");
