#define SDIOH_API_ACCESS_RETRY_LIMIT	2
const uint bcmsdh_msglevel = BCMSDH_ERROR_VAL;
struct bcmsdh_info ;
bcmsdh_info_t *l_bcmsdh;
#if defined(OOB_INTR_ONLY) && defined(HW_OOB)
extern int sdioh_enable_hw_oob_intr(void *sdioh, bool enable);
void bcmsdh_enable_hw_oob_intr(bcmsdh_info_t *sdh, bool enable)
bcmsdh_info_t *bcmsdh_attach(void *cfghdl, void **regsva, uint irq)
int bcmsdh_detach(void *sdh)
int
bcmsdh_iovar_op(void *sdh, const char *name,
void *params, int plen, void *arg, int len, bool set)
bool bcmsdh_intr_query(void *sdh)
int bcmsdh_intr_enable(void *sdh)
int bcmsdh_intr_disable(void *sdh)
int bcmsdh_intr_reg(void *sdh, bcmsdh_cb_fn_t fn, void *argh)
int bcmsdh_intr_dereg(void *sdh)
#if defined(DHD_DEBUG)
bool bcmsdh_intr_pending(void *sdh)
int bcmsdh_devremove_reg(void *sdh, bcmsdh_cb_fn_t fn, void *argh)
u8 bcmsdh_cfg_read(void *sdh, uint fnc_num, u32 addr, int *err)
void
bcmsdh_cfg_write(void *sdh, uint fnc_num, u32 addr, u8 data, int *err)
u32 bcmsdh_cfg_read_word(void *sdh, uint fnc_num, u32 addr, int *err)
void
bcmsdh_cfg_write_word(void *sdh, uint fnc_num, u32 addr, u32 data,
int *err)
int bcmsdh_cis_read(void *sdh, uint func, u8 * cis, uint length)
static int bcmsdhsdio_set_sbaddr_window(void *sdh, u32 address)
u32 bcmsdh_reg_read(void *sdh, u32 addr, uint size)
u32 bcmsdh_reg_write(void *sdh, u32 addr, uint size, u32 data)
bool bcmsdh_regfail(void *sdh)
int
bcmsdh_recv_buf(void *sdh, u32 addr, uint fn, uint flags,
u8 *buf, uint nbytes, struct sk_buff *pkt,
bcmsdh_cmplt_fn_t complete, void *handle)
int
bcmsdh_send_buf(void *sdh, u32 addr, uint fn, uint flags,
u8 *buf, uint nbytes, void *pkt,
bcmsdh_cmplt_fn_t complete, void *handle)
int bcmsdh_rwdata(void *sdh, uint rw, u32 addr, u8 *buf, uint nbytes)
int bcmsdh_abort(void *sdh, uint fn)
int bcmsdh_start(void *sdh, int stage)
int bcmsdh_stop(void *sdh)
int bcmsdh_query_device(void *sdh)
uint bcmsdh_query_iofnum(void *sdh)
int bcmsdh_reset(bcmsdh_info_t *sdh)
void *bcmsdh_get_sdioh(bcmsdh_info_t *sdh)
u32 bcmsdh_get_dstatus(void *sdh)
u32 bcmsdh_cur_sbwad(void *sdh)
void bcmsdh_chipinfo(void *sdh, u32 chip, u32 chiprev)
