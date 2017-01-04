#define EFX_MCDI_H
enum efx_mcdi_state ;
enum efx_mcdi_mode ;
struct efx_mcdi_iface ;
extern void efx_mcdi_init(struct efx_nic *efx);
extern int efx_mcdi_rpc(struct efx_nic *efx, unsigned cmd, const u8 *inbuf,
size_t inlen, u8 *outbuf, size_t outlen,
size_t *outlen_actual);
extern int efx_mcdi_poll_reboot(struct efx_nic *efx);
extern void efx_mcdi_mode_poll(struct efx_nic *efx);
extern void efx_mcdi_mode_event(struct efx_nic *efx);
extern void efx_mcdi_process_event(struct efx_channel *channel,
efx_qword_t *event);
#define MCDI_PTR2(_buf, _ofst)						\
(((u8 *)_buf) + _ofst)
#define MCDI_SET_DWORD2(_buf, _ofst, _value)				\
EFX_POPULATE_DWORD_1(*((efx_dword_t *)MCDI_PTR2(_buf, _ofst)),	\
EFX_DWORD_0, _value)
#define MCDI_DWORD2(_buf, _ofst)					\
EFX_DWORD_FIELD(*((efx_dword_t *)MCDI_PTR2(_buf, _ofst)),	\
EFX_DWORD_0)
#define MCDI_QWORD2(_buf, _ofst)					\
EFX_QWORD_FIELD64(*((efx_qword_t *)MCDI_PTR2(_buf, _ofst)),	\
EFX_QWORD_0)
#define MCDI_PTR(_buf, _ofst)						\
MCDI_PTR2(_buf, MC_CMD_ ## _ofst ## _OFST)
#define MCDI_SET_DWORD(_buf, _ofst, _value)				\
MCDI_SET_DWORD2(_buf, MC_CMD_ ## _ofst ## _OFST, _value)
#define MCDI_DWORD(_buf, _ofst)						\
MCDI_DWORD2(_buf, MC_CMD_ ## _ofst ## _OFST)
#define MCDI_QWORD(_buf, _ofst)						\
MCDI_QWORD2(_buf, MC_CMD_ ## _ofst ## _OFST)
#define MCDI_EVENT_FIELD(_ev, _field)			\
EFX_QWORD_FIELD(_ev, MCDI_EVENT_ ## _field)
extern void efx_mcdi_print_fwver(struct efx_nic *efx, char *buf, size_t len);
extern int efx_mcdi_drv_attach(struct efx_nic *efx, bool driver_operating,
bool *was_attached_out);
extern int efx_mcdi_get_board_cfg(struct efx_nic *efx, u8 *mac_address,
u16 *fw_subtype_list);
extern int efx_mcdi_log_ctrl(struct efx_nic *efx, bool evq, bool uart,
u32 dest_evq);
extern int efx_mcdi_nvram_types(struct efx_nic *efx, u32 *nvram_types_out);
extern int efx_mcdi_nvram_info(struct efx_nic *efx, unsigned int type,
size_t *size_out, size_t *erase_size_out,
bool *protected_out);
extern int efx_mcdi_nvram_update_start(struct efx_nic *efx,
unsigned int type);
extern int efx_mcdi_nvram_read(struct efx_nic *efx, unsigned int type,
loff_t offset, u8 *buffer, size_t length);
extern int efx_mcdi_nvram_write(struct efx_nic *efx, unsigned int type,
loff_t offset, const u8 *buffer,
size_t length);
#define EFX_MCDI_NVRAM_LEN_MAX 128
extern int efx_mcdi_nvram_erase(struct efx_nic *efx, unsigned int type,
loff_t offset, size_t length);
extern int efx_mcdi_nvram_update_finish(struct efx_nic *efx,
unsigned int type);
extern int efx_mcdi_nvram_test_all(struct efx_nic *efx);
extern int efx_mcdi_handle_assertion(struct efx_nic *efx);
extern void efx_mcdi_set_id_led(struct efx_nic *efx, enum efx_led_mode mode);
extern int efx_mcdi_reset_port(struct efx_nic *efx);
extern int efx_mcdi_reset_mc(struct efx_nic *efx);
extern int efx_mcdi_wol_filter_set_magic(struct efx_nic *efx,
const u8 *mac, int *id_out);
extern int efx_mcdi_wol_filter_get_magic(struct efx_nic *efx, int *id_out);
extern int efx_mcdi_wol_filter_remove(struct efx_nic *efx, int id);
extern int efx_mcdi_wol_filter_reset(struct efx_nic *efx);
