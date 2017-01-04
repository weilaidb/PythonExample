struct tcw *tcw_get_intrg(struct tcw *tcw)
EXPORT_SYMBOL(tcw_get_intrg);
void *tcw_get_data(struct tcw *tcw)
EXPORT_SYMBOL(tcw_get_data);
struct tccb *tcw_get_tccb(struct tcw *tcw)
EXPORT_SYMBOL(tcw_get_tccb);
struct tsb *tcw_get_tsb(struct tcw *tcw)
EXPORT_SYMBOL(tcw_get_tsb);
void tcw_init(struct tcw *tcw, int r, int w)
EXPORT_SYMBOL(tcw_init);
static inline size_t tca_size(struct tccb *tccb)
static u32 calc_dcw_count(struct tccb *tccb)
static u32 calc_cbc_size(struct tidaw *tidaw, int num)
void tcw_finalize(struct tcw *tcw, int num_tidaws)
EXPORT_SYMBOL(tcw_finalize);
void tcw_set_intrg(struct tcw *tcw, struct tcw *intrg_tcw)
EXPORT_SYMBOL(tcw_set_intrg);
void tcw_set_data(struct tcw *tcw, void *data, int use_tidal)
EXPORT_SYMBOL(tcw_set_data);
void tcw_set_tccb(struct tcw *tcw, struct tccb *tccb)
EXPORT_SYMBOL(tcw_set_tccb);
void tcw_set_tsb(struct tcw *tcw, struct tsb *tsb)
EXPORT_SYMBOL(tcw_set_tsb);
void tccb_init(struct tccb *tccb, size_t size, u32 sac)
EXPORT_SYMBOL(tccb_init);
void tsb_init(struct tsb *tsb)
EXPORT_SYMBOL(tsb_init);
struct dcw *tccb_add_dcw(struct tccb *tccb, size_t tccb_size, u8 cmd, u8 flags,
void *cd, u8 cd_count, u32 count)
EXPORT_SYMBOL(tccb_add_dcw);
struct tidaw *tcw_add_tidaw(struct tcw *tcw, int num_tidaws, u8 flags,
void *addr, u32 count)
EXPORT_SYMBOL(tcw_add_tidaw);
