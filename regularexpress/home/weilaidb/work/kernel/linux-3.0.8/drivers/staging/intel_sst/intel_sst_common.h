#define __INTEL_SST_COMMON_H__
#define SST_DRIVER_VERSION "1.2.17"
#define SST_VERSION_NUM 0x1217
#define SST_DRV_NAME "intel_sst_driver"
#define SST_MRST_PCI_ID 0x080A
#define SST_MFLD_PCI_ID 0x082F
#define PCI_ID_LENGTH 4
#define SST_SUSPEND_DELAY 2000
#define FW_CONTEXT_MEM (64*1024)
enum sst_states ;
#define MAX_ACTIVE_STREAM	3
#define MAX_ENC_STREAM		1
#define MAX_AM_HANDLES		1
#define ALLOC_TIMEOUT		5000
#define SST_BLOCK_TIMEOUT	5000
#define TARGET_DEV_BLOCK_TIMEOUT	5000
#define BLOCK_UNINIT		-1
#define RX_TIMESLOT_UNINIT	-1
#define SST_CSR			0x00
#define SST_PISR		0x08
#define SST_PIMR		0x10
#define SST_ISRX		0x18
#define SST_IMRX		0x28
#define SST_IPCX		0x38
#define SST_IPCD		0x40
#define SST_ISRD		0x20
#define SST_SHIM_SIZE		0X44
#define SPI_MODE_ENABLE_BASE_ADDR 0xffae4000
#define FW_SIGNATURE_SIZE	4
enum sst_mad_states ;
enum sst_stream_states ;
enum sst_ram_type ;
union config_status_reg ;
union interrupt_reg ;
union sst_pisr_reg ;
union sst_pimr_reg ;
struct sst_stream_bufs ;
struct snd_sst_user_cap_list ;
struct sst_block ;
enum snd_sst_buf_type ;
enum snd_src ;
struct stream_info ;
struct stream_alloc_block ;
#define SST_FW_SIGN "$SST"
#define SST_FW_LIB_SIGN "$LIB"
struct fw_header ;
struct fw_module_header ;
struct dma_block_info ;
struct ioctl_pvt_data ;
struct sst_ipc_msg_wq ;
struct mad_ops_wq ;
#define SST_MMAP_PAGES	(640*1024 / PAGE_SIZE)
#define SST_MMAP_STEP	(40*1024 / PAGE_SIZE)
struct intel_sst_drv ;
extern struct intel_sst_drv *sst_drv_ctx;
#define CHIP_REV_REG 0xff108000
#define CHIP_REV_ADDR 0x78
#define FW_DWNL_ID 0xFF
#define LOOP1 0x11111111
#define LOOP2 0x22222222
#define LOOP3 0x33333333
#define LOOP4 0x44444444
#define SST_DEFAULT_PMIC_PORT 1
#define MAX_STREAM_FIELD 255
int sst_alloc_stream(char *params, unsigned int stream_ops, u8 codec,
unsigned int session_id);
int sst_alloc_stream_response(unsigned int str_id,
struct snd_sst_alloc_response *response);
int sst_stalled(void);
int sst_pause_stream(int id);
int sst_resume_stream(int id);
int sst_enable_rx_timeslot(int status);
int sst_drop_stream(int id);
int sst_free_stream(int id);
int sst_start_stream(int streamID);
int sst_play_frame(int streamID);
int sst_pcm_play_frame(int str_id, struct sst_stream_bufs *sst_buf);
int sst_capture_frame(int streamID);
int sst_set_stream_param(int streamID, struct snd_sst_params *str_param);
int sst_target_device_select(struct snd_sst_target_device *target_device);
int sst_decode(int str_id, struct snd_sst_dbufs *dbufs);
int sst_get_decoded_bytes(int str_id, unsigned long long *bytes);
int sst_get_fw_info(struct snd_sst_fw_info *info);
int sst_get_stream_params(int str_id,
struct snd_sst_get_stream_params *get_params);
int sst_get_stream(struct snd_sst_params *str_param);
int sst_get_stream_allocated(struct snd_sst_params *str_param,
struct snd_sst_lib_download **lib_dnld);
int sst_drain_stream(int str_id);
int sst_get_vol(struct snd_sst_vol *set_vol);
int sst_set_vol(struct snd_sst_vol *set_vol);
int sst_set_mute(struct snd_sst_mute *set_mute);
void sst_post_message(struct work_struct *work);
void sst_process_message(struct work_struct *work);
void sst_process_reply(struct work_struct *work);
void sst_process_mad_ops(struct work_struct *work);
void sst_process_mad_jack_detection(struct work_struct *work);
long intel_sst_ioctl(struct file *file_ptr, unsigned int cmd,
unsigned long arg);
int intel_sst_open(struct inode *i_node, struct file *file_ptr);
int intel_sst_open_cntrl(struct inode *i_node, struct file *file_ptr);
int intel_sst_release(struct inode *i_node, struct file *file_ptr);
int intel_sst_release_cntrl(struct inode *i_node, struct file *file_ptr);
int intel_sst_read(struct file *file_ptr, char __user *buf,
size_t count, loff_t *ppos);
int intel_sst_write(struct file *file_ptr, const char __user *buf,
size_t count, loff_t *ppos);
int intel_sst_mmap(struct file *fp, struct vm_area_struct *vma);
ssize_t intel_sst_aio_write(struct kiocb *kiocb, const struct iovec *iov,
unsigned long nr_segs, loff_t  offset);
ssize_t intel_sst_aio_read(struct kiocb *kiocb, const struct iovec *iov,
unsigned long nr_segs, loff_t offset);
int sst_load_fw(const struct firmware *fw, void *context);
int sst_load_library(struct snd_sst_lib_download *lib, u8 ops);
int sst_spi_mode_enable(void);
int sst_get_block_stream(struct intel_sst_drv *sst_drv_ctx);
int sst_wait_interruptible(struct intel_sst_drv *sst_drv_ctx,
struct sst_block *block);
int sst_wait_interruptible_timeout(struct intel_sst_drv *sst_drv_ctx,
struct sst_block *block, int timeout);
int sst_wait_timeout(struct intel_sst_drv *sst_drv_ctx,
struct stream_alloc_block *block);
int sst_create_large_msg(struct ipc_post **arg);
int sst_create_short_msg(struct ipc_post **arg);
void sst_wake_up_alloc_block(struct intel_sst_drv *sst_drv_ctx,
u8 sst_id, int status, void *data);
void sst_clear_interrupt(void);
int intel_sst_resume(struct pci_dev *pci);
int sst_download_fw(void);
void free_stream_context(unsigned int str_id);
void sst_clean_stream(struct stream_info *stream);
static inline void sst_fill_header(union ipc_header *header,
int msg, int large, int str_id)
static inline unsigned int sst_assign_pvt_id(struct intel_sst_drv *sst_drv_ctx)
static inline void sst_init_stream(struct stream_info *stream,
int codec, int sst_id, int ops, u8 slot,
enum snd_sst_audio_device_type device)
static inline int sst_validate_strid(int str_id)
static inline int sst_shim_write(void __iomem *addr, int offset, int value)
static inline int sst_shim_read(void __iomem *addr, int offset)
