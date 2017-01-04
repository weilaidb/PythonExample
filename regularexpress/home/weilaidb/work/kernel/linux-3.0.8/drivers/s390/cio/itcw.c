struct itcw ;
struct tcw *itcw_get_tcw(struct itcw *itcw)
EXPORT_SYMBOL(itcw_get_tcw);
size_t itcw_calc_size(int intrg, int max_tidaws, int intrg_max_tidaws)
EXPORT_SYMBOL(itcw_calc_size);
#define CROSS4K(x, l)	(((x) & ~4095) != ((x + l) & ~4095))
static inline void *fit_chunk(addr_t *start, addr_t end, size_t len,
int align, int check_4k)
struct itcw *itcw_init(void *buffer, size_t size, int op, int intrg,
int max_tidaws, int intrg_max_tidaws)
EXPORT_SYMBOL(itcw_init);
struct dcw *itcw_add_dcw(struct itcw *itcw, u8 cmd, u8 flags, void *cd,
u8 cd_count, u32 count)
EXPORT_SYMBOL(itcw_add_dcw);
struct tidaw *itcw_add_tidaw(struct itcw *itcw, u8 flags, void *addr, u32 count)
EXPORT_SYMBOL(itcw_add_tidaw);
void itcw_set_data(struct itcw *itcw, void *addr, int use_tidal)
EXPORT_SYMBOL(itcw_set_data);
void itcw_finalize(struct itcw *itcw)
EXPORT_SYMBOL(itcw_finalize);
