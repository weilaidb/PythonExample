#define	_bcmsdh_h_
#define BCMSDH_ERROR_VAL	0x0001
#define BCMSDH_INFO_VAL		0x0002
extern const uint bcmsdh_msglevel;
#define BCMSDH_ERROR(x) \
do  while (0)
#define BCMSDH_INFO(x)	\
do  while (0)
#define BCMSDH_ERROR(x)
#define BCMSDH_INFO(x)
typedef struct bcmsdh_info bcmsdh_info_t;
typedef void (*bcmsdh_cb_fn_t) (void *);
extern bcmsdh_info_t *bcmsdh_attach(void *cfghdl, void **regsva, uint irq);
extern int bcmsdh_detach(void *sdh);
extern bool bcmsdh_intr_query(void *sdh);
extern int bcmsdh_intr_enable(void *sdh);
extern int bcmsdh_intr_disable(void *sdh);
extern int bcmsdh_intr_reg(void *sdh, bcmsdh_cb_fn_t fn, void *argh);
extern int bcmsdh_intr_dereg(void *sdh);
#if defined(DHD_DEBUG)
extern bool bcmsdh_intr_pending(void *sdh);
extern int bcmsdh_claim_host_and_lock(void *sdh);
extern int bcmsdh_release_host_and_unlock(void *sdh);
extern int bcmsdh_devremove_reg(void *sdh, bcmsdh_cb_fn_t fn, void *argh);
extern u8 bcmsdh_cfg_read(void *sdh, uint func, u32 addr, int *err);
extern void bcmsdh_cfg_write(void *sdh, uint func, u32 addr, u8 data,
int *err);
extern u32 bcmsdh_cfg_read_word(void *sdh, uint fnc_num, u32 addr,
int *err);
extern void bcmsdh_cfg_write_word(void *sdh, uint fnc_num, u32 addr,
u32 data, int *err);
extern int bcmsdh_cis_read(void *sdh, uint func, u8 *cis, uint length);
extern u32 bcmsdh_reg_read(void *sdh, u32 addr, uint size);
extern u32 bcmsdh_reg_write(void *sdh, u32 addr, uint size, u32 data);
extern bool bcmsdh_regfail(void *sdh);
typedef void (*bcmsdh_cmplt_fn_t) (void *handle, int status, bool sync_waiting);
extern int bcmsdh_send_buf(void *sdh, u32 addr, uint fn, uint flags,
u8 *buf, uint nbytes, void *pkt,
bcmsdh_cmplt_fn_t complete, void *handle);
extern int bcmsdh_recv_buf(void *sdh, u32 addr, uint fn, uint flags,
u8 *buf, uint nbytes, struct sk_buff *pkt,
bcmsdh_cmplt_fn_t complete, void *handle);
#define SDIO_REQ_4BYTE	0x1
#define SDIO_REQ_FIXED	0x2
#define SDIO_REQ_ASYNC	0x4
#define BCME_PENDING	1
extern int bcmsdh_rwdata(void *sdh, uint rw, u32 addr, u8 *buf,
uint nbytes);
extern int bcmsdh_abort(void *sdh, uint fn);
extern int bcmsdh_start(void *sdh, int stage);
extern int bcmsdh_stop(void *sdh);
extern int bcmsdh_query_device(void *sdh);
extern uint bcmsdh_query_iofnum(void *sdh);
extern int bcmsdh_iovar_op(void *sdh, const char *name,
void *params, int plen, void *arg, int len,
bool set);
extern int bcmsdh_reset(bcmsdh_info_t *sdh);
extern void *bcmsdh_get_sdioh(bcmsdh_info_t *sdh);
typedef struct  bcmsdh_driver_t;
extern int bcmsdh_register(bcmsdh_driver_t *driver);
extern void bcmsdh_unregister(void);
extern bool bcmsdh_chipmatch(u16 vendor, u16 device);
extern void bcmsdh_device_remove(void *sdh);
extern u32 bcmsdh_get_dstatus(void *sdh);
extern u32 bcmsdh_cur_sbwad(void *sdh);
extern void bcmsdh_chipinfo(void *sdh, u32 chip, u32 chiprev);
