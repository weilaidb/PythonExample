#define CMD_NOTIFY_PORT0 0
#define CMD_NOTIFY_PORT1 4
#define CMD_PDU_PORT0    0x008
#define CMD_PDU_PORT1    0x108
#define REBOOT_FLAG_PORT0 0x3f8
#define REBOOT_FLAG_PORT1 0x3fc
#define MCDI_RPC_TIMEOUT       10
#define MCDI_PDU(efx)							\
(efx_port_num(efx) ? CMD_PDU_PORT1 : CMD_PDU_PORT0)
#define MCDI_DOORBELL(efx)						\
(efx_port_num(efx) ? CMD_NOTIFY_PORT1 : CMD_NOTIFY_PORT0)
#define MCDI_REBOOT_FLAG(efx)						\
(efx_port_num(efx) ? REBOOT_FLAG_PORT1 : REBOOT_FLAG_PORT0)
#define SEQ_MASK							\
EFX_MASK32(EFX_WIDTH(MCDI_HEADER_SEQ))
static inline struct efx_mcdi_iface *efx_mcdi(struct efx_nic *efx)
void efx_mcdi_init(struct efx_nic *efx)
static void efx_mcdi_copyin(struct efx_nic *efx, unsigned cmd,
const u8 *inbuf, size_t inlen)
static void efx_mcdi_copyout(struct efx_nic *efx, u8 *outbuf, size_t outlen)
static int efx_mcdi_poll(struct efx_nic *efx)
int efx_mcdi_poll_reboot(struct efx_nic *efx)
static void efx_mcdi_acquire(struct efx_mcdi_iface *mcdi)
static int efx_mcdi_await_completion(struct efx_nic *efx)
static bool efx_mcdi_complete(struct efx_mcdi_iface *mcdi)
static void efx_mcdi_release(struct efx_mcdi_iface *mcdi)
static void efx_mcdi_ev_cpl(struct efx_nic *efx, unsigned int seqno,
unsigned int datalen, unsigned int errno)
int efx_mcdi_rpc(struct efx_nic *efx, unsigned cmd,
const u8 *inbuf, size_t inlen, u8 *outbuf, size_t outlen,
size_t *outlen_actual)
void efx_mcdi_mode_poll(struct efx_nic *efx)
void efx_mcdi_mode_event(struct efx_nic *efx)
static void efx_mcdi_ev_death(struct efx_nic *efx, int rc)
static unsigned int efx_mcdi_event_link_speed[] = ;
static void efx_mcdi_process_link_change(struct efx_nic *efx, efx_qword_t *ev)
static const char *sensor_names[] = ;
static const char *sensor_status_names[] = ;
static void efx_mcdi_sensor_event(struct efx_nic *efx, efx_qword_t *ev)
void efx_mcdi_process_event(struct efx_channel *channel,
efx_qword_t *event)
void efx_mcdi_print_fwver(struct efx_nic *efx, char *buf, size_t len)
int efx_mcdi_drv_attach(struct efx_nic *efx, bool driver_operating,
bool *was_attached)
int efx_mcdi_get_board_cfg(struct efx_nic *efx, u8 *mac_address,
u16 *fw_subtype_list)
int efx_mcdi_log_ctrl(struct efx_nic *efx, bool evq, bool uart, u32 dest_evq)
int efx_mcdi_nvram_types(struct efx_nic *efx, u32 *nvram_types_out)
int efx_mcdi_nvram_info(struct efx_nic *efx, unsigned int type,
size_t *size_out, size_t *erase_size_out,
bool *protected_out)
int efx_mcdi_nvram_update_start(struct efx_nic *efx, unsigned int type)
int efx_mcdi_nvram_read(struct efx_nic *efx, unsigned int type,
loff_t offset, u8 *buffer, size_t length)
int efx_mcdi_nvram_write(struct efx_nic *efx, unsigned int type,
loff_t offset, const u8 *buffer, size_t length)
int efx_mcdi_nvram_erase(struct efx_nic *efx, unsigned int type,
loff_t offset, size_t length)
int efx_mcdi_nvram_update_finish(struct efx_nic *efx, unsigned int type)
static int efx_mcdi_nvram_test(struct efx_nic *efx, unsigned int type)
int efx_mcdi_nvram_test_all(struct efx_nic *efx)
static int efx_mcdi_read_assertion(struct efx_nic *efx)
static void efx_mcdi_exit_assertion(struct efx_nic *efx)
int efx_mcdi_handle_assertion(struct efx_nic *efx)
void efx_mcdi_set_id_led(struct efx_nic *efx, enum efx_led_mode mode)
int efx_mcdi_reset_port(struct efx_nic *efx)
int efx_mcdi_reset_mc(struct efx_nic *efx)
static int efx_mcdi_wol_filter_set(struct efx_nic *efx, u32 type,
const u8 *mac, int *id_out)
int
efx_mcdi_wol_filter_set_magic(struct efx_nic *efx,  const u8 *mac, int *id_out)
int efx_mcdi_wol_filter_get_magic(struct efx_nic *efx, int *id_out)
int efx_mcdi_wol_filter_remove(struct efx_nic *efx, int id)
int efx_mcdi_wol_filter_reset(struct efx_nic *efx)
