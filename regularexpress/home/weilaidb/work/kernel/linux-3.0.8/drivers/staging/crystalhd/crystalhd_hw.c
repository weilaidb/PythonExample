static void crystalhd_enable_uarts(struct crystalhd_adp *adp)
static void crystalhd_start_dram(struct crystalhd_adp *adp)
static bool crystalhd_bring_out_of_rst(struct crystalhd_adp *adp)
static bool crystalhd_put_in_reset(struct crystalhd_adp *adp)
static void crystalhd_disable_interrupts(struct crystalhd_adp *adp)
static void crystalhd_enable_interrupts(struct crystalhd_adp *adp)
static void crystalhd_clear_errors(struct crystalhd_adp *adp)
static void crystalhd_clear_interrupts(struct crystalhd_adp *adp)
static void crystalhd_soft_rst(struct crystalhd_adp *adp)
static bool crystalhd_load_firmware_config(struct crystalhd_adp *adp)
static bool crystalhd_start_device(struct crystalhd_adp *adp)
static bool crystalhd_stop_device(struct crystalhd_adp *adp)
static struct crystalhd_rx_dma_pkt *crystalhd_hw_alloc_rx_pkt(struct crystalhd_hw *hw)
static void crystalhd_hw_free_rx_pkt(struct crystalhd_hw *hw,
struct crystalhd_rx_dma_pkt *pkt)
static void crystalhd_tx_desc_rel_call_back(void *context, void *data)
static void crystalhd_rx_pkt_rel_call_back(void *context, void *data)
#define crystalhd_hw_delete_ioq(adp, q)		\
if (q)
static void crystalhd_hw_delete_ioqs(struct crystalhd_hw *hw)
#define crystalhd_hw_create_ioq(sts, hw, q, cb)			\
do  while (0)
static enum BC_STATUS crystalhd_hw_create_ioqs(struct crystalhd_hw   *hw)
static bool crystalhd_code_in_full(struct crystalhd_adp *adp, uint32_t needed_sz,
bool b_188_byte_pkts,  uint8_t flags)
static enum BC_STATUS crystalhd_hw_tx_req_complete(struct crystalhd_hw *hw,
uint32_t list_id, enum BC_STATUS cs)
static bool crystalhd_tx_list0_handler(struct crystalhd_hw *hw, uint32_t err_sts)
static bool crystalhd_tx_list1_handler(struct crystalhd_hw *hw, uint32_t err_sts)
static void crystalhd_tx_isr(struct crystalhd_hw *hw, uint32_t int_sts)
static void crystalhd_hw_dump_desc(struct dma_descriptor *p_dma_desc,
uint32_t ul_desc_index, uint32_t cnt)
static enum BC_STATUS crystalhd_hw_fill_desc(struct crystalhd_dio_req *ioreq,
struct dma_descriptor *desc,
dma_addr_t desc_paddr_base,
uint32_t sg_cnt, uint32_t sg_st_ix,
uint32_t sg_st_off, uint32_t xfr_sz)
static enum BC_STATUS crystalhd_xlat_sgl_to_dma_desc(struct crystalhd_dio_req *ioreq,
struct dma_desc_mem *pdesc_mem,
uint32_t *uv_desc_index)
static void crystalhd_start_tx_dma_engine(struct crystalhd_hw *hw)
static enum BC_STATUS crystalhd_stop_tx_dma_engine(struct crystalhd_hw *hw)
static uint32_t crystalhd_get_pib_avail_cnt(struct crystalhd_hw *hw)
static uint32_t crystalhd_get_addr_from_pib_Q(struct crystalhd_hw *hw)
static bool crystalhd_rel_addr_to_pib_Q(struct crystalhd_hw *hw, uint32_t addr_to_rel)
static void cpy_pib_to_app(struct c011_pib *src_pib, struct BC_PIC_INFO_BLOCK *dst_pib)
static void crystalhd_hw_proc_pib(struct crystalhd_hw *hw)
static void crystalhd_start_rx_dma_engine(struct crystalhd_hw *hw)
static void crystalhd_stop_rx_dma_engine(struct crystalhd_hw *hw)
static enum BC_STATUS crystalhd_hw_prog_rxdma(struct crystalhd_hw *hw, struct crystalhd_rx_dma_pkt *rx_pkt)
static enum BC_STATUS crystalhd_hw_post_cap_buff(struct crystalhd_hw *hw,
struct crystalhd_rx_dma_pkt *rx_pkt)
static void crystalhd_get_dnsz(struct crystalhd_hw *hw, uint32_t list_index,
uint32_t *y_dw_dnsz, uint32_t *uv_dw_dnsz)
static void crystalhd_hw_finalize_pause(struct crystalhd_hw *hw)
static enum BC_STATUS crystalhd_rx_pkt_done(struct crystalhd_hw *hw, uint32_t list_index,
enum BC_STATUS comp_sts)
static bool crystalhd_rx_list0_handler(struct crystalhd_hw *hw, uint32_t int_sts,
uint32_t y_err_sts, uint32_t uv_err_sts)
static bool crystalhd_rx_list1_handler(struct crystalhd_hw *hw, uint32_t int_sts,
uint32_t y_err_sts, uint32_t uv_err_sts)
static void crystalhd_rx_isr(struct crystalhd_hw *hw, uint32_t intr_sts)
static enum BC_STATUS crystalhd_fw_cmd_post_proc(struct crystalhd_hw *hw,
struct BC_FW_CMD *fw_cmd)
static enum BC_STATUS crystalhd_put_ddr2sleep(struct crystalhd_hw *hw)
enum BC_STATUS crystalhd_download_fw(struct crystalhd_adp *adp, void *buffer, uint32_t sz)
enum BC_STATUS crystalhd_do_fw_cmd(struct crystalhd_hw *hw,
struct BC_FW_CMD *fw_cmd)
bool crystalhd_hw_interrupt(struct crystalhd_adp *adp, struct crystalhd_hw *hw)
enum BC_STATUS crystalhd_hw_open(struct crystalhd_hw *hw, struct crystalhd_adp *adp)
enum BC_STATUS crystalhd_hw_close(struct crystalhd_hw *hw)
enum BC_STATUS crystalhd_hw_setup_dma_rings(struct crystalhd_hw *hw)
enum BC_STATUS crystalhd_hw_free_dma_rings(struct crystalhd_hw *hw)
enum BC_STATUS crystalhd_hw_post_tx(struct crystalhd_hw *hw, struct crystalhd_dio_req *ioreq,
hw_comp_callback call_back,
wait_queue_head_t *cb_event, uint32_t *list_id,
uint8_t data_flags)
enum BC_STATUS crystalhd_hw_cancel_tx(struct crystalhd_hw *hw, uint32_t list_id)
enum BC_STATUS crystalhd_hw_add_cap_buffer(struct crystalhd_hw *hw,
struct crystalhd_dio_req *ioreq, bool en_post)
enum BC_STATUS crystalhd_hw_get_cap_buffer(struct crystalhd_hw *hw,
struct BC_PIC_INFO_BLOCK *pib,
struct crystalhd_dio_req **ioreq)
enum BC_STATUS crystalhd_hw_start_capture(struct crystalhd_hw *hw)
enum BC_STATUS crystalhd_hw_stop_capture(struct crystalhd_hw *hw)
enum BC_STATUS crystalhd_hw_pause(struct crystalhd_hw *hw)
enum BC_STATUS crystalhd_hw_unpause(struct crystalhd_hw *hw)
enum BC_STATUS crystalhd_hw_suspend(struct crystalhd_hw *hw)
void crystalhd_hw_stats(struct crystalhd_hw *hw, struct crystalhd_hw_stats *stats)
enum BC_STATUS crystalhd_hw_set_core_clock(struct crystalhd_hw *hw)
