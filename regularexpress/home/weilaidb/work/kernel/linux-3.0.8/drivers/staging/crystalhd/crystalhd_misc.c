uint32_t g_linklog_level;
static inline uint32_t crystalhd_dram_rd(struct crystalhd_adp *adp, uint32_t mem_off)
static inline void crystalhd_dram_wr(struct crystalhd_adp *adp, uint32_t mem_off, uint32_t val)
static inline enum BC_STATUS bc_chk_dram_range(struct crystalhd_adp *adp, uint32_t start_off, uint32_t cnt)
static struct crystalhd_dio_req *crystalhd_alloc_dio(struct crystalhd_adp *adp)
static void crystalhd_free_dio(struct crystalhd_adp *adp, struct crystalhd_dio_req *dio)
static struct crystalhd_elem *crystalhd_alloc_elem(struct crystalhd_adp *adp)
static void crystalhd_free_elem(struct crystalhd_adp *adp, struct crystalhd_elem *elem)
static inline void crystalhd_set_sg(struct scatterlist *sg, struct page *page,
unsigned int len, unsigned int offset)
static inline void crystalhd_init_sg(struct scatterlist *sg, unsigned int entries)
{
uint32_t bc_dec_reg_rd(struct crystalhd_adp *adp, uint32_t reg_off)
void bc_dec_reg_wr(struct crystalhd_adp *adp, uint32_t reg_off, uint32_t val)
uint32_t crystalhd_reg_rd(struct crystalhd_adp *adp, uint32_t reg_off)
void crystalhd_reg_wr(struct crystalhd_adp *adp, uint32_t reg_off, uint32_t val)
enum BC_STATUS crystalhd_mem_rd(struct crystalhd_adp *adp, uint32_t start_off,
uint32_t dw_cnt, uint32_t *rd_buff)
enum BC_STATUS crystalhd_mem_wr(struct crystalhd_adp *adp, uint32_t start_off,
uint32_t dw_cnt, uint32_t *wr_buff)
enum BC_STATUS crystalhd_pci_cfg_rd(struct crystalhd_adp *adp, uint32_t off,
uint32_t len, uint32_t *val)
enum BC_STATUS crystalhd_pci_cfg_wr(struct crystalhd_adp *adp, uint32_t off,
uint32_t len, uint32_t val)
void *bc_kern_dma_alloc(struct crystalhd_adp *adp, uint32_t sz,
dma_addr_t *phy_addr)
void bc_kern_dma_free(struct crystalhd_adp *adp, uint32_t sz, void *ka,
dma_addr_t phy_addr)
enum BC_STATUS crystalhd_create_dioq(struct crystalhd_adp *adp,
struct crystalhd_dioq **dioq_hnd,
crystalhd_data_free_cb cb, void *cbctx)
void crystalhd_delete_dioq(struct crystalhd_adp *adp, struct crystalhd_dioq *dioq)
enum BC_STATUS crystalhd_dioq_add(struct crystalhd_dioq *ioq, void *data,
bool wake, uint32_t tag)
void *crystalhd_dioq_fetch(struct crystalhd_dioq *ioq)
void *crystalhd_dioq_find_and_fetch(struct crystalhd_dioq *ioq, uint32_t tag)
void *crystalhd_dioq_fetch_wait(struct crystalhd_dioq *ioq, uint32_t to_secs,
uint32_t *sig_pend)
enum BC_STATUS crystalhd_map_dio(struct crystalhd_adp *adp, void *ubuff,
uint32_t ubuff_sz, uint32_t uv_offset,
bool en_422mode, bool dir_tx,
struct crystalhd_dio_req **dio_hnd)
enum BC_STATUS crystalhd_unmap_dio(struct crystalhd_adp *adp, struct crystalhd_dio_req *dio)
int crystalhd_create_dio_pool(struct crystalhd_adp *adp, uint32_t max_pages)
void crystalhd_destroy_dio_pool(struct crystalhd_adp *adp)
int __devinit crystalhd_create_elem_pool(struct crystalhd_adp *adp,
uint32_t pool_size)
void crystalhd_delete_elem_pool(struct crystalhd_adp *adp)
void crystalhd_show_buffer(uint32_t off, uint8_t *buff, uint32_t dwcount)
