#if BITS_PER_LONG == 64
#error FIXME: driver does not support 64-bit platforms
static const char version[] __initdata =
KERN_INFO "smctr.c: v1.4 7/12/00 by jschlst@samba.org\n";
static const char cardname[] = "smctr";
#define SMCTR_IO_EXTENT   20
static unsigned int smctr_posid = 0x6ec6;
static int ringspeed;
static char smctr_name[] = "SMC TokenCard";
static char *smctr_model = "Unknown";
#define SMCTR_DEBUG 1
static unsigned int smctr_debug = SMCTR_DEBUG;
static int smctr_alloc_shared_memory(struct net_device *dev);
static int smctr_bypass_state(struct net_device *dev);
static int smctr_checksum_firmware(struct net_device *dev);
static int __init smctr_chk_isa(struct net_device *dev);
static int smctr_chg_rx_mask(struct net_device *dev);
static int smctr_clear_int(struct net_device *dev);
static int smctr_clear_trc_reset(int ioaddr);
static int smctr_close(struct net_device *dev);
static int smctr_decode_firmware(struct net_device *dev,
const struct firmware *fw);
static int smctr_disable_16bit(struct net_device *dev);
static int smctr_disable_adapter_ctrl_store(struct net_device *dev);
static int smctr_disable_bic_int(struct net_device *dev);
static int smctr_enable_16bit(struct net_device *dev);
static int smctr_enable_adapter_ctrl_store(struct net_device *dev);
static int smctr_enable_adapter_ram(struct net_device *dev);
static int smctr_enable_bic_int(struct net_device *dev);
static int __init smctr_get_boardid(struct net_device *dev, int mca);
static int smctr_get_group_address(struct net_device *dev);
static int smctr_get_functional_address(struct net_device *dev);
static unsigned int smctr_get_num_rx_bdbs(struct net_device *dev);
static int smctr_get_physical_drop_number(struct net_device *dev);
static __u8 *smctr_get_rx_pointer(struct net_device *dev, short queue);
static int smctr_get_station_id(struct net_device *dev);
static FCBlock *smctr_get_tx_fcb(struct net_device *dev, __u16 queue,
__u16 bytes_count);
static int smctr_get_upstream_neighbor_addr(struct net_device *dev);
static int smctr_hardware_send_packet(struct net_device *dev,
struct net_local *tp);
static int smctr_init_acbs(struct net_device *dev);
static int smctr_init_adapter(struct net_device *dev);
static int smctr_init_card_real(struct net_device *dev);
static int smctr_init_rx_bdbs(struct net_device *dev);
static int smctr_init_rx_fcbs(struct net_device *dev);
static int smctr_init_shared_memory(struct net_device *dev);
static int smctr_init_tx_bdbs(struct net_device *dev);
static int smctr_init_tx_fcbs(struct net_device *dev);
static int smctr_internal_self_test(struct net_device *dev);
static irqreturn_t smctr_interrupt(int irq, void *dev_id);
static int smctr_issue_enable_int_cmd(struct net_device *dev,
__u16 interrupt_enable_mask);
static int smctr_issue_int_ack(struct net_device *dev, __u16 iack_code,
__u16 ibits);
static int smctr_issue_init_timers_cmd(struct net_device *dev);
static int smctr_issue_init_txrx_cmd(struct net_device *dev);
static int smctr_issue_insert_cmd(struct net_device *dev);
static int smctr_issue_read_ring_status_cmd(struct net_device *dev);
static int smctr_issue_read_word_cmd(struct net_device *dev, __u16 aword_cnt);
static int smctr_issue_remove_cmd(struct net_device *dev);
static int smctr_issue_resume_acb_cmd(struct net_device *dev);
static int smctr_issue_resume_rx_bdb_cmd(struct net_device *dev, __u16 queue);
static int smctr_issue_resume_rx_fcb_cmd(struct net_device *dev, __u16 queue);
static int smctr_issue_resume_tx_fcb_cmd(struct net_device *dev, __u16 queue);
static int smctr_issue_test_internal_rom_cmd(struct net_device *dev);
static int smctr_issue_test_hic_cmd(struct net_device *dev);
static int smctr_issue_test_mac_reg_cmd(struct net_device *dev);
static int smctr_issue_trc_loopback_cmd(struct net_device *dev);
static int smctr_issue_tri_loopback_cmd(struct net_device *dev);
static int smctr_issue_write_byte_cmd(struct net_device *dev,
short aword_cnt, void *byte);
static int smctr_issue_write_word_cmd(struct net_device *dev,
short aword_cnt, void *word);
static int smctr_join_complete_state(struct net_device *dev);
static int smctr_link_tx_fcbs_to_bdbs(struct net_device *dev);
static int smctr_load_firmware(struct net_device *dev);
static int smctr_load_node_addr(struct net_device *dev);
static int smctr_lobe_media_test(struct net_device *dev);
static int smctr_lobe_media_test_cmd(struct net_device *dev);
static int smctr_lobe_media_test_state(struct net_device *dev);
static int smctr_make_8025_hdr(struct net_device *dev,
MAC_HEADER *rmf, MAC_HEADER *tmf, __u16 ac_fc);
static int smctr_make_access_pri(struct net_device *dev,
MAC_SUB_VECTOR *tsv);
static int smctr_make_addr_mod(struct net_device *dev, MAC_SUB_VECTOR *tsv);
static int smctr_make_auth_funct_class(struct net_device *dev,
MAC_SUB_VECTOR *tsv);
static int smctr_make_corr(struct net_device *dev,
MAC_SUB_VECTOR *tsv, __u16 correlator);
static int smctr_make_funct_addr(struct net_device *dev,
MAC_SUB_VECTOR *tsv);
static int smctr_make_group_addr(struct net_device *dev,
MAC_SUB_VECTOR *tsv);
static int smctr_make_phy_drop_num(struct net_device *dev,
MAC_SUB_VECTOR *tsv);
static int smctr_make_product_id(struct net_device *dev, MAC_SUB_VECTOR *tsv);
static int smctr_make_station_id(struct net_device *dev, MAC_SUB_VECTOR *tsv);
static int smctr_make_ring_station_status(struct net_device *dev,
MAC_SUB_VECTOR *tsv);
static int smctr_make_ring_station_version(struct net_device *dev,
MAC_SUB_VECTOR *tsv);
static int smctr_make_tx_status_code(struct net_device *dev,
MAC_SUB_VECTOR *tsv, __u16 tx_fstatus);
static int smctr_make_upstream_neighbor_addr(struct net_device *dev,
MAC_SUB_VECTOR *tsv);
static int smctr_make_wrap_data(struct net_device *dev,
MAC_SUB_VECTOR *tsv);
static int smctr_open(struct net_device *dev);
static int smctr_open_tr(struct net_device *dev);
struct net_device *smctr_probe(int unit);
static int __init smctr_probe1(struct net_device *dev, int ioaddr);
static int smctr_process_rx_packet(MAC_HEADER *rmf, __u16 size,
struct net_device *dev, __u16 rx_status);
static int smctr_ram_memory_test(struct net_device *dev);
static int smctr_rcv_chg_param(struct net_device *dev, MAC_HEADER *rmf,
__u16 *correlator);
static int smctr_rcv_init(struct net_device *dev, MAC_HEADER *rmf,
__u16 *correlator);
static int smctr_rcv_tx_forward(struct net_device *dev, MAC_HEADER *rmf);
static int smctr_rcv_rq_addr_state_attch(struct net_device *dev,
MAC_HEADER *rmf, __u16 *correlator);
static int smctr_rcv_unknown(struct net_device *dev, MAC_HEADER *rmf,
__u16 *correlator);
static int smctr_reset_adapter(struct net_device *dev);
static int smctr_restart_tx_chain(struct net_device *dev, short queue);
static int smctr_ring_status_chg(struct net_device *dev);
static int smctr_rx_frame(struct net_device *dev);
static int smctr_send_dat(struct net_device *dev);
static netdev_tx_t smctr_send_packet(struct sk_buff *skb,
struct net_device *dev);
static int smctr_send_lobe_media_test(struct net_device *dev);
static int smctr_send_rpt_addr(struct net_device *dev, MAC_HEADER *rmf,
__u16 correlator);
static int smctr_send_rpt_attch(struct net_device *dev, MAC_HEADER *rmf,
__u16 correlator);
static int smctr_send_rpt_state(struct net_device *dev, MAC_HEADER *rmf,
__u16 correlator);
static int smctr_send_rpt_tx_forward(struct net_device *dev,
MAC_HEADER *rmf, __u16 tx_fstatus);
static int smctr_send_rsp(struct net_device *dev, MAC_HEADER *rmf,
__u16 rcode, __u16 correlator);
static int smctr_send_rq_init(struct net_device *dev);
static int smctr_send_tx_forward(struct net_device *dev, MAC_HEADER *rmf,
__u16 *tx_fstatus);
static int smctr_set_auth_access_pri(struct net_device *dev,
MAC_SUB_VECTOR *rsv);
static int smctr_set_auth_funct_class(struct net_device *dev,
MAC_SUB_VECTOR *rsv);
static int smctr_set_corr(struct net_device *dev, MAC_SUB_VECTOR *rsv,
__u16 *correlator);
static int smctr_set_error_timer_value(struct net_device *dev,
MAC_SUB_VECTOR *rsv);
static int smctr_set_frame_forward(struct net_device *dev,
MAC_SUB_VECTOR *rsv, __u8 dc_sc);
static int smctr_set_local_ring_num(struct net_device *dev,
MAC_SUB_VECTOR *rsv);
static unsigned short smctr_set_ctrl_attention(struct net_device *dev);
static void smctr_set_multicast_list(struct net_device *dev);
static int smctr_set_page(struct net_device *dev, __u8 *buf);
static int smctr_set_phy_drop(struct net_device *dev,
MAC_SUB_VECTOR *rsv);
static int smctr_set_ring_speed(struct net_device *dev);
static int smctr_set_rx_look_ahead(struct net_device *dev);
static int smctr_set_trc_reset(int ioaddr);
static int smctr_setup_single_cmd(struct net_device *dev,
__u16 command, __u16 subcommand);
static int smctr_setup_single_cmd_w_data(struct net_device *dev,
__u16 command, __u16 subcommand);
static char *smctr_malloc(struct net_device *dev, __u16 size);
static int smctr_status_chg(struct net_device *dev);
static void smctr_timeout(struct net_device *dev);
static int smctr_trc_send_packet(struct net_device *dev, FCBlock *fcb,
__u16 queue);
static __u16 smctr_tx_complete(struct net_device *dev, __u16 queue);
static unsigned short smctr_tx_move_frame(struct net_device *dev,
struct sk_buff *skb, __u8 *pbuff, unsigned int bytes);
static int smctr_update_err_stats(struct net_device *dev);
static int smctr_update_rx_chain(struct net_device *dev, __u16 queue);
static int smctr_update_tx_chain(struct net_device *dev, FCBlock *fcb,
__u16 queue);
static int smctr_wait_cmd(struct net_device *dev);
static int smctr_wait_while_cbusy(struct net_device *dev);
#define TO_256_BYTE_BOUNDRY(X)  (((X + 0xff) & 0xff00) - X)
#define TO_PARAGRAPH_BOUNDRY(X) (((X + 0x0f) & 0xfff0) - X)
#define PARAGRAPH_BOUNDRY(X)    smctr_malloc(dev, TO_PARAGRAPH_BOUNDRY(X))
static int smctr_alloc_shared_memory(struct net_device *dev)
static int smctr_bypass_state(struct net_device *dev)
static int smctr_checksum_firmware(struct net_device *dev)
static int __init smctr_chk_mca(struct net_device *dev)
static int smctr_chg_rx_mask(struct net_device *dev)
static int smctr_clear_int(struct net_device *dev)
static int smctr_clear_trc_reset(int ioaddr)
static int smctr_close(struct net_device *dev)
static int smctr_decode_firmware(struct net_device *dev,
const struct firmware *fw)
static int smctr_disable_16bit(struct net_device *dev)
static int smctr_disable_adapter_ctrl_store(struct net_device *dev)
static int smctr_disable_bic_int(struct net_device *dev)
static int smctr_enable_16bit(struct net_device *dev)
static int smctr_enable_adapter_ctrl_store(struct net_device *dev)
static int smctr_enable_adapter_ram(struct net_device *dev)
static int smctr_enable_bic_int(struct net_device *dev)
static int __init smctr_chk_isa(struct net_device *dev)
static int __init smctr_get_boardid(struct net_device *dev, int mca)
static int smctr_get_group_address(struct net_device *dev)
static int smctr_get_functional_address(struct net_device *dev)
static unsigned int smctr_get_num_rx_bdbs(struct net_device *dev)
static int smctr_get_physical_drop_number(struct net_device *dev)
static __u8 * smctr_get_rx_pointer(struct net_device *dev, short queue)
static int smctr_get_station_id(struct net_device *dev)
static struct net_device_stats *smctr_get_stats(struct net_device *dev)
static FCBlock *smctr_get_tx_fcb(struct net_device *dev, __u16 queue,
__u16 bytes_count)
static int smctr_get_upstream_neighbor_addr(struct net_device *dev)
static int smctr_hardware_send_packet(struct net_device *dev,
struct net_local *tp)
static int smctr_init_acbs(struct net_device *dev)
static int smctr_init_adapter(struct net_device *dev)
static int smctr_init_card_real(struct net_device *dev)
static int smctr_init_rx_bdbs(struct net_device *dev)
static int smctr_init_rx_fcbs(struct net_device *dev)
static int smctr_init_shared_memory(struct net_device *dev)
static int smctr_init_tx_bdbs(struct net_device *dev)
static int smctr_init_tx_fcbs(struct net_device *dev)
static int smctr_internal_self_test(struct net_device *dev)
static irqreturn_t smctr_interrupt(int irq, void *dev_id)
static int smctr_issue_enable_int_cmd(struct net_device *dev,
__u16 interrupt_enable_mask)
static int smctr_issue_int_ack(struct net_device *dev, __u16 iack_code, __u16 ibits)
static int smctr_issue_init_timers_cmd(struct net_device *dev)
static int smctr_issue_init_txrx_cmd(struct net_device *dev)
static int smctr_issue_insert_cmd(struct net_device *dev)
static int smctr_issue_read_ring_status_cmd(struct net_device *dev)
static int smctr_issue_read_word_cmd(struct net_device *dev, __u16 aword_cnt)
static int smctr_issue_remove_cmd(struct net_device *dev)
static int smctr_issue_resume_acb_cmd(struct net_device *dev)
static int smctr_issue_resume_rx_bdb_cmd(struct net_device *dev, __u16 queue)
static int smctr_issue_resume_rx_fcb_cmd(struct net_device *dev, __u16 queue)
static int smctr_issue_resume_tx_fcb_cmd(struct net_device *dev, __u16 queue)
static int smctr_issue_test_internal_rom_cmd(struct net_device *dev)
static int smctr_issue_test_hic_cmd(struct net_device *dev)
static int smctr_issue_test_mac_reg_cmd(struct net_device *dev)
static int smctr_issue_trc_loopback_cmd(struct net_device *dev)
static int smctr_issue_tri_loopback_cmd(struct net_device *dev)
static int smctr_issue_write_byte_cmd(struct net_device *dev,
short aword_cnt, void *byte)
static int smctr_issue_write_word_cmd(struct net_device *dev,
short aword_cnt, void *word)
static int smctr_join_complete_state(struct net_device *dev)
static int smctr_link_tx_fcbs_to_bdbs(struct net_device *dev)
static int smctr_load_firmware(struct net_device *dev)
static int smctr_load_node_addr(struct net_device *dev)
static int smctr_lobe_media_test(struct net_device *dev)
static int smctr_lobe_media_test_cmd(struct net_device *dev)
static int smctr_lobe_media_test_state(struct net_device *dev)
static int smctr_make_8025_hdr(struct net_device *dev,
MAC_HEADER *rmf, MAC_HEADER *tmf, __u16 ac_fc)
static int smctr_make_access_pri(struct net_device *dev, MAC_SUB_VECTOR *tsv)
static int smctr_make_addr_mod(struct net_device *dev, MAC_SUB_VECTOR *tsv)
static int smctr_make_auth_funct_class(struct net_device *dev,
MAC_SUB_VECTOR *tsv)
static int smctr_make_corr(struct net_device *dev,
MAC_SUB_VECTOR *tsv, __u16 correlator)
static int smctr_make_funct_addr(struct net_device *dev, MAC_SUB_VECTOR *tsv)
static int smctr_make_group_addr(struct net_device *dev, MAC_SUB_VECTOR *tsv)
static int smctr_make_phy_drop_num(struct net_device *dev,
MAC_SUB_VECTOR *tsv)
static int smctr_make_product_id(struct net_device *dev, MAC_SUB_VECTOR *tsv)
static int smctr_make_station_id(struct net_device *dev, MAC_SUB_VECTOR *tsv)
static int smctr_make_ring_station_status(struct net_device *dev,
MAC_SUB_VECTOR * tsv)
static int smctr_make_ring_station_version(struct net_device *dev,
MAC_SUB_VECTOR *tsv)
static int smctr_make_tx_status_code(struct net_device *dev,
MAC_SUB_VECTOR *tsv, __u16 tx_fstatus)
static int smctr_make_upstream_neighbor_addr(struct net_device *dev,
MAC_SUB_VECTOR *tsv)
static int smctr_make_wrap_data(struct net_device *dev, MAC_SUB_VECTOR *tsv)
static int smctr_open(struct net_device *dev)
static int smctr_open_tr(struct net_device *dev)
struct net_device __init *smctr_probe(int unit)
static const struct net_device_ops smctr_netdev_ops = ;
static int __init smctr_probe1(struct net_device *dev, int ioaddr)
static int smctr_process_rx_packet(MAC_HEADER *rmf, __u16 size,
struct net_device *dev, __u16 rx_status)
static int smctr_ram_memory_test(struct net_device *dev)
static int smctr_rcv_chg_param(struct net_device *dev, MAC_HEADER *rmf,
__u16 *correlator)
static int smctr_rcv_init(struct net_device *dev, MAC_HEADER *rmf,
__u16 *correlator)
static int smctr_rcv_tx_forward(struct net_device *dev, MAC_HEADER *rmf)
static int smctr_rcv_rq_addr_state_attch(struct net_device *dev,
MAC_HEADER *rmf, __u16 *correlator)
static int smctr_rcv_unknown(struct net_device *dev, MAC_HEADER *rmf,
__u16 *correlator)
static int smctr_reset_adapter(struct net_device *dev)
static int smctr_restart_tx_chain(struct net_device *dev, short queue)
static int smctr_ring_status_chg(struct net_device *dev)
static int smctr_rx_frame(struct net_device *dev)
static int smctr_send_dat(struct net_device *dev)
static void smctr_timeout(struct net_device *dev)
static netdev_tx_t smctr_send_packet(struct sk_buff *skb,
struct net_device *dev)
static int smctr_send_lobe_media_test(struct net_device *dev)
static int smctr_send_rpt_addr(struct net_device *dev, MAC_HEADER *rmf,
__u16 correlator)
static int smctr_send_rpt_attch(struct net_device *dev, MAC_HEADER *rmf,
__u16 correlator)
static int smctr_send_rpt_state(struct net_device *dev, MAC_HEADER *rmf,
__u16 correlator)
static int smctr_send_rpt_tx_forward(struct net_device *dev,
MAC_HEADER *rmf, __u16 tx_fstatus)
static int smctr_send_rsp(struct net_device *dev, MAC_HEADER *rmf,
__u16 rcode, __u16 correlator)
static int smctr_send_rq_init(struct net_device *dev)
static int smctr_send_tx_forward(struct net_device *dev, MAC_HEADER *rmf,
__u16 *tx_fstatus)
static int smctr_set_auth_access_pri(struct net_device *dev,
MAC_SUB_VECTOR *rsv)
static int smctr_set_auth_funct_class(struct net_device *dev,
MAC_SUB_VECTOR *rsv)
static int smctr_set_corr(struct net_device *dev, MAC_SUB_VECTOR *rsv,
__u16 *correlator)
static int smctr_set_error_timer_value(struct net_device *dev,
MAC_SUB_VECTOR *rsv)
static int smctr_set_frame_forward(struct net_device *dev,
MAC_SUB_VECTOR *rsv, __u8 dc_sc)
static int smctr_set_local_ring_num(struct net_device *dev,
MAC_SUB_VECTOR *rsv)
static unsigned short smctr_set_ctrl_attention(struct net_device *dev)
static void smctr_set_multicast_list(struct net_device *dev)
static int smctr_set_page(struct net_device *dev, __u8 *buf)
static int smctr_set_phy_drop(struct net_device *dev, MAC_SUB_VECTOR *rsv)
static int smctr_set_ring_speed(struct net_device *dev)
static int smctr_set_rx_look_ahead(struct net_device *dev)
static int smctr_set_trc_reset(int ioaddr)
static int smctr_setup_single_cmd(struct net_device *dev,
__u16 command, __u16 subcommand)
static int smctr_setup_single_cmd_w_data(struct net_device *dev,
__u16 command, __u16 subcommand)
static char *smctr_malloc(struct net_device *dev, __u16 size)
static int smctr_status_chg(struct net_device *dev)
static int smctr_trc_send_packet(struct net_device *dev, FCBlock *fcb,
__u16 queue)
static __u16 smctr_tx_complete(struct net_device *dev, __u16 queue)
static unsigned short smctr_tx_move_frame(struct net_device *dev,
struct sk_buff *skb, __u8 *pbuff, unsigned int bytes)
static int smctr_update_err_stats(struct net_device *dev)
static int smctr_update_rx_chain(struct net_device *dev, __u16 queue)
static int smctr_update_tx_chain(struct net_device *dev, FCBlock *fcb,
__u16 queue)
static int smctr_wait_cmd(struct net_device *dev)
static int smctr_wait_while_cbusy(struct net_device *dev)
static struct net_device* dev_smctr[SMCTR_MAX_ADAPTERS];
static int io[SMCTR_MAX_ADAPTERS];
static int irq[SMCTR_MAX_ADAPTERS];
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("tr_smctr.bin");
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param(ringspeed, int, 0);
static struct net_device * __init setup_card(int n)
int __init init_module(void)
void __exit cleanup_module(void)
