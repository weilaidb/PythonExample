#define SDIO_VERSION	"1.0"
static struct mwifiex_if_ops sdio_ops;
static struct semaphore add_remove_card_sem;
static int
mwifiex_sdio_probe(struct sdio_func *func, const struct sdio_device_id *id)
static void
mwifiex_sdio_remove(struct sdio_func *func)
static int mwifiex_sdio_suspend(struct device *dev)
static int mwifiex_sdio_resume(struct device *dev)
#define SDIO_DEVICE_ID_MARVELL_8787   (0x9119)
static const struct sdio_device_id mwifiex_ids[] = ;
MODULE_DEVICE_TABLE(sdio, mwifiex_ids);
static const struct dev_pm_ops mwifiex_sdio_pm_ops = ;
static struct sdio_driver mwifiex_sdio = ;
static int
mwifiex_write_reg(struct mwifiex_adapter *adapter, u32 reg, u32 data)
static int
mwifiex_read_reg(struct mwifiex_adapter *adapter, u32 reg, u32 *data)
static int
mwifiex_write_data_sync(struct mwifiex_adapter *adapter,
u8 *buffer, u32 pkt_len, u32 port)
static int mwifiex_read_data_sync(struct mwifiex_adapter *adapter, u8 *buffer,
u32 len, u32 port, u8 claim)
static int mwifiex_pm_wakeup_card(struct mwifiex_adapter *adapter)
static int mwifiex_pm_wakeup_card_complete(struct mwifiex_adapter *adapter)
static int mwifiex_init_sdio_ioport(struct mwifiex_adapter *adapter)
static int mwifiex_write_data_to_card(struct mwifiex_adapter *adapter,
u8 *payload, u32 pkt_len, u32 port)
static int mwifiex_get_rd_port(struct mwifiex_adapter *adapter, u8 *port)
static int mwifiex_get_wr_port_data(struct mwifiex_adapter *adapter, u8 *port)
static int
mwifiex_sdio_poll_card_status(struct mwifiex_adapter *adapter, u8 bits)
static int
mwifiex_sdio_read_fw_status(struct mwifiex_adapter *adapter, u16 *dat)
static int mwifiex_sdio_disable_host_int(struct mwifiex_adapter *adapter)
static int mwifiex_sdio_enable_host_int(struct mwifiex_adapter *adapter)
static int mwifiex_sdio_card_to_host(struct mwifiex_adapter *adapter,
u32 *type, u8 *buffer,
u32 npayload, u32 ioport)
static int mwifiex_prog_fw_w_helper(struct mwifiex_adapter *adapter,
struct mwifiex_fw_image *fw)
static int mwifiex_check_fw_status(struct mwifiex_adapter *adapter,
u32 poll_num, int *winner)
static void mwifiex_interrupt_status(struct mwifiex_adapter *adapter)
static void
mwifiex_sdio_interrupt(struct sdio_func *func)
static int mwifiex_decode_rx_packet(struct mwifiex_adapter *adapter,
struct sk_buff *skb, u32 upld_typ)
static int mwifiex_sdio_card_to_host_mp_aggr(struct mwifiex_adapter *adapter,
struct sk_buff *skb, u8 port)
static int mwifiex_process_int_status(struct mwifiex_adapter *adapter)
static int mwifiex_host_to_card_mp_aggr(struct mwifiex_adapter *adapter,
u8 *payload, u32 pkt_len, u8 port,
u32 next_pkt_len)
static int mwifiex_sdio_host_to_card(struct mwifiex_adapter *adapter,
u8 type, u8 *payload, u32 pkt_len,
struct mwifiex_tx_param *tx_param)
static int mwifiex_alloc_sdio_mpa_buffers(struct mwifiex_adapter *adapter,
u32 mpa_tx_buf_size, u32 mpa_rx_buf_size)
static void
mwifiex_unregister_dev(struct mwifiex_adapter *adapter)
static int mwifiex_register_dev(struct mwifiex_adapter *adapter)
static int mwifiex_init_sdio(struct mwifiex_adapter *adapter)
static void mwifiex_cleanup_mpa_buf(struct mwifiex_adapter *adapter)
static void mwifiex_cleanup_sdio(struct mwifiex_adapter *adapter)
static void
mwifiex_update_mp_end_port(struct mwifiex_adapter *adapter, u16 port)
static struct mwifiex_if_ops sdio_ops = ;
static int
mwifiex_sdio_init_module(void)
static void
mwifiex_sdio_cleanup_module(void)
module_init(mwifiex_sdio_init_module);
module_exit(mwifiex_sdio_cleanup_module);
MODULE_AUTHOR("Marvell International Ltd.");
MODULE_DESCRIPTION("Marvell WiFi-Ex SDIO Driver version " SDIO_VERSION);
MODULE_VERSION(SDIO_VERSION);
MODULE_LICENSE("GPL v2");
MODULE_FIRMWARE("sd8787.bin");
