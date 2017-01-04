#define __FLEXCOP_COMMON_H__
#define FC_MAX_FEED 256
#warning please define a log prefix for your file, using a default one
#define FC_LOG_PREFIX "b2c2-undef"
#undef err
#define err(format, arg...) \
printk(KERN_ERR FC_LOG_PREFIX ": " format "\n" , ## arg)
#undef info
#define info(format, arg...) \
printk(KERN_INFO FC_LOG_PREFIX ": " format "\n" , ## arg)
#undef warn
#define warn(format, arg...) \
printk(KERN_WARNING FC_LOG_PREFIX ": " format "\n" , ## arg)
struct flexcop_dma ;
struct flexcop_i2c_adapter ;
struct flexcop_device ;
void flexcop_pass_dmx_data(struct flexcop_device *fc, u8 *buf, u32 len);
void flexcop_pass_dmx_packets(struct flexcop_device *fc, u8 *buf, u32 no);
struct flexcop_device *flexcop_device_kmalloc(size_t bus_specific_len);
void flexcop_device_kfree(struct flexcop_device *);
int flexcop_device_initialize(struct flexcop_device *);
void flexcop_device_exit(struct flexcop_device *fc);
void flexcop_reset_block_300(struct flexcop_device *fc);
int flexcop_dma_allocate(struct pci_dev *pdev,
struct flexcop_dma *dma, u32 size);
void flexcop_dma_free(struct flexcop_dma *dma);
int flexcop_dma_control_timer_irq(struct flexcop_device *fc,
flexcop_dma_index_t no, int onoff);
int flexcop_dma_control_size_irq(struct flexcop_device *fc,
flexcop_dma_index_t no, int onoff);
int flexcop_dma_config(struct flexcop_device *fc, struct flexcop_dma *dma,
flexcop_dma_index_t dma_idx);
int flexcop_dma_xfer_control(struct flexcop_device *fc,
flexcop_dma_index_t dma_idx, flexcop_dma_addr_index_t index,
int onoff);
int flexcop_dma_config_timer(struct flexcop_device *fc,
flexcop_dma_index_t dma_idx, u8 cycles);
int flexcop_eeprom_check_mac_addr(struct flexcop_device *fc, int extended);
int flexcop_i2c_request(struct flexcop_i2c_adapter*, flexcop_access_op_t,
u8 chipaddr, u8 addr, u8 *buf, u16 len);
int flexcop_sram_set_dest(struct flexcop_device *fc, flexcop_sram_dest_t dest,
flexcop_sram_dest_target_t target);
void flexcop_wan_set_speed(struct flexcop_device *fc, flexcop_wan_speed_t s);
void flexcop_sram_ctrl(struct flexcop_device *fc,
int usb_wan, int sramdma, int maximumfill);
int flexcop_frontend_init(struct flexcop_device *fc);
void flexcop_frontend_exit(struct flexcop_device *fc);
int flexcop_i2c_init(struct flexcop_device *fc);
void flexcop_i2c_exit(struct flexcop_device *fc);
int flexcop_sram_init(struct flexcop_device *fc);
void flexcop_determine_revision(struct flexcop_device *fc);
void flexcop_device_name(struct flexcop_device *fc,
const char *prefix, const char *suffix);
void flexcop_dump_reg(struct flexcop_device *fc,
flexcop_ibi_register reg, int num);
int flexcop_pid_feed_control(struct flexcop_device *fc,
struct dvb_demux_feed *dvbdmxfeed, int onoff);
void flexcop_hw_filter_init(struct flexcop_device *fc);
void flexcop_smc_ctrl(struct flexcop_device *fc, int onoff);
void flexcop_set_mac_filter(struct flexcop_device *fc, u8 mac[6]);
void flexcop_mac_filter_ctrl(struct flexcop_device *fc, int onoff);
