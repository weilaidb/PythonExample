#define __WHCD_H
#define WHC_GENCMD_TIMEOUT_MS 100
struct whc_dbg;
struct whc ;
#define wusbhc_to_whc(w) (container_of((w), struct whc, wusbhc))
struct whc_std ;
struct whc_urb ;
static inline bool whc_std_last(struct whc_std *std)
enum whc_update ;
int whc_init(struct whc *whc);
void whc_clean_up(struct whc *whc);
void whc_write_wusbcmd(struct whc *whc, u32 mask, u32 val);
int whc_do_gencmd(struct whc *whc, u32 cmd, u32 params, void *addr, size_t len);
void whc_hw_error(struct whc *whc, const char *reason);
int whc_wusbhc_start(struct wusbhc *wusbhc);
void whc_wusbhc_stop(struct wusbhc *wusbhc, int delay);
int whc_mmcie_add(struct wusbhc *wusbhc, u8 interval, u8 repeat_cnt,
u8 handle, struct wuie_hdr *wuie);
int whc_mmcie_rm(struct wusbhc *wusbhc, u8 handle);
int whc_bwa_set(struct wusbhc *wusbhc, s8 stream_index, const struct uwb_mas_bm *mas_bm);
int whc_dev_info_set(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev);
int whc_set_num_dnts(struct wusbhc *wusbhc, u8 interval, u8 slots);
int whc_set_ptk(struct wusbhc *wusbhc, u8 port_idx, u32 tkid,
const void *ptk, size_t key_size);
int whc_set_gtk(struct wusbhc *wusbhc, u32 tkid,
const void *gtk, size_t key_size);
int whc_set_cluster_id(struct whc *whc, u8 bcid);
irqreturn_t whc_int_handler(struct usb_hcd *hcd);
void whc_dn_work(struct work_struct *work);
void asl_start(struct whc *whc);
void asl_stop(struct whc *whc);
int  asl_init(struct whc *whc);
void asl_clean_up(struct whc *whc);
int  asl_urb_enqueue(struct whc *whc, struct urb *urb, gfp_t mem_flags);
int  asl_urb_dequeue(struct whc *whc, struct urb *urb, int status);
void asl_qset_delete(struct whc *whc, struct whc_qset *qset);
void scan_async_work(struct work_struct *work);
int  pzl_init(struct whc *whc);
void pzl_clean_up(struct whc *whc);
void pzl_start(struct whc *whc);
void pzl_stop(struct whc *whc);
int  pzl_urb_enqueue(struct whc *whc, struct urb *urb, gfp_t mem_flags);
int  pzl_urb_dequeue(struct whc *whc, struct urb *urb, int status);
void pzl_qset_delete(struct whc *whc, struct whc_qset *qset);
void scan_periodic_work(struct work_struct *work);
struct whc_qset *qset_alloc(struct whc *whc, gfp_t mem_flags);
void qset_free(struct whc *whc, struct whc_qset *qset);
struct whc_qset *get_qset(struct whc *whc, struct urb *urb, gfp_t mem_flags);
void qset_delete(struct whc *whc, struct whc_qset *qset);
void qset_clear(struct whc *whc, struct whc_qset *qset);
void qset_reset(struct whc *whc, struct whc_qset *qset);
int qset_add_urb(struct whc *whc, struct whc_qset *qset, struct urb *urb,
gfp_t mem_flags);
void qset_free_std(struct whc *whc, struct whc_std *std);
void qset_remove_urb(struct whc *whc, struct whc_qset *qset,
struct urb *urb, int status);
void process_halted_qtd(struct whc *whc, struct whc_qset *qset,
struct whc_qtd *qtd);
void process_inactive_qtd(struct whc *whc, struct whc_qset *qset,
struct whc_qtd *qtd);
enum whc_update qset_add_qtds(struct whc *whc, struct whc_qset *qset);
void qset_remove_complete(struct whc *whc, struct whc_qset *qset);
void pzl_update(struct whc *whc, uint32_t wusbcmd);
void asl_update(struct whc *whc, uint32_t wusbcmd);
void whc_dbg_init(struct whc *whc);
void whc_dbg_clean_up(struct whc *whc);
