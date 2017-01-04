static const unsigned int
large_eeprom_type = ((13 << SPI_DEV_TYPE_SIZE_LBN)
| (2 << SPI_DEV_TYPE_ADDR_LEN_LBN)
| (5 << SPI_DEV_TYPE_BLOCK_SIZE_LBN)),
default_flash_type = ((17 << SPI_DEV_TYPE_SIZE_LBN)
| (3 << SPI_DEV_TYPE_ADDR_LEN_LBN)
| (0x52 << SPI_DEV_TYPE_ERASE_CMD_LBN)
| (15 << SPI_DEV_TYPE_ERASE_SIZE_LBN)
| (8 << SPI_DEV_TYPE_BLOCK_SIZE_LBN));
static void falcon_setsda(void *data, int state)
static void falcon_setscl(void *data, int state)
static int falcon_getsda(void *data)
static int falcon_getscl(void *data)
static struct i2c_algo_bit_data falcon_i2c_bit_operations = ;
static void falcon_push_irq_moderation(struct efx_channel *channel)
static void falcon_deconfigure_mac_wrapper(struct efx_nic *efx);
static void falcon_prepare_flush(struct efx_nic *efx)
inline void falcon_irq_ack_a1(struct efx_nic *efx)
irqreturn_t falcon_legacy_interrupt_a1(int irq, void *dev_id)
#define FALCON_SPI_MAX_LEN sizeof(efx_oword_t)
static int falcon_spi_poll(struct efx_nic *efx)
static int falcon_spi_wait(struct efx_nic *efx)
int falcon_spi_cmd(struct efx_nic *efx, const struct efx_spi_device *spi,
unsigned int command, int address,
const void *in, void *out, size_t len)
static size_t
falcon_spi_write_limit(const struct efx_spi_device *spi, size_t start)
static inline u8
efx_spi_munge_command(const struct efx_spi_device *spi,
const u8 command, const unsigned int address)
int
falcon_spi_wait_write(struct efx_nic *efx, const struct efx_spi_device *spi)
int falcon_spi_read(struct efx_nic *efx, const struct efx_spi_device *spi,
loff_t start, size_t len, size_t *retlen, u8 *buffer)
int
falcon_spi_write(struct efx_nic *efx, const struct efx_spi_device *spi,
loff_t start, size_t len, size_t *retlen, const u8 *buffer)
static void falcon_push_multicast_hash(struct efx_nic *efx)
static void falcon_reset_macs(struct efx_nic *efx)
void falcon_drain_tx_fifo(struct efx_nic *efx)
static void falcon_deconfigure_mac_wrapper(struct efx_nic *efx)
void falcon_reconfigure_mac_wrapper(struct efx_nic *efx)
static void falcon_stats_request(struct efx_nic *efx)
static void falcon_stats_complete(struct efx_nic *efx)
static void falcon_stats_timer_func(unsigned long context)
static bool falcon_loopback_link_poll(struct efx_nic *efx)
static int falcon_reconfigure_port(struct efx_nic *efx)
static int falcon_gmii_wait(struct efx_nic *efx)
static int falcon_mdio_write(struct net_device *net_dev,
int prtad, int devad, u16 addr, u16 value)
static int falcon_mdio_read(struct net_device *net_dev,
int prtad, int devad, u16 addr)
static int falcon_probe_port(struct efx_nic *efx)
static void falcon_remove_port(struct efx_nic *efx)
static bool
falcon_handle_global_event(struct efx_channel *channel, efx_qword_t *event)
static int
falcon_read_nvram(struct efx_nic *efx, struct falcon_nvconfig *nvconfig_out)
static int falcon_test_nvram(struct efx_nic *efx)
static const struct efx_nic_register_test falcon_b0_register_tests[] = ;
static int falcon_b0_test_registers(struct efx_nic *efx)
static int __falcon_reset_hw(struct efx_nic *efx, enum reset_type method)
static int falcon_reset_hw(struct efx_nic *efx, enum reset_type method)
static void falcon_monitor(struct efx_nic *efx)
static int falcon_reset_sram(struct efx_nic *efx)
static void falcon_spi_device_init(struct efx_nic *efx,
struct efx_spi_device *spi_device,
unsigned int device_id, u32 device_type)
static int falcon_probe_nvconfig(struct efx_nic *efx)
static void falcon_probe_spi_devices(struct efx_nic *efx)
static int falcon_probe_nic(struct efx_nic *efx)
static void falcon_init_rx_cfg(struct efx_nic *efx)
static int falcon_init_nic(struct efx_nic *efx)
static void falcon_remove_nic(struct efx_nic *efx)
static void falcon_update_nic_stats(struct efx_nic *efx)
void falcon_start_nic_stats(struct efx_nic *efx)
void falcon_stop_nic_stats(struct efx_nic *efx)
static void falcon_set_id_led(struct efx_nic *efx, enum efx_led_mode mode)
static void falcon_get_wol(struct efx_nic *efx, struct ethtool_wolinfo *wol)
static int falcon_set_wol(struct efx_nic *efx, u32 type)
const struct efx_nic_type falcon_a1_nic_type = ;
const struct efx_nic_type falcon_b0_nic_type = ;
