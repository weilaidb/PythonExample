#define _HAL_INIT_C_
#define FWBUFF_ALIGN_SZ 512
#define MAX_DUMP_FWSZ	49152
static u32 rtl871x_open_fw(struct _adapter *padapter, void **pphfwfile_hdl,
const u8 **ppmappedfw)
MODULE_FIRMWARE("rtlwifi/rtl8712u.bin");
static void fill_fwpriv(struct _adapter *padapter, struct fw_priv *pfwpriv)
static void update_fwhdr(struct fw_hdr	*pfwhdr, const u8 *pmappedfw)
static u8 chk_fwhdr(struct fw_hdr *pfwhdr, u32 ulfilelength)
static u8 rtl8712_dl_fw(struct _adapter *padapter)
uint rtl8712_hal_init(struct _adapter *padapter)
uint rtl8712_hal_deinit(struct _adapter *padapter)
uint rtl871x_hal_init(struct _adapter *padapter)
