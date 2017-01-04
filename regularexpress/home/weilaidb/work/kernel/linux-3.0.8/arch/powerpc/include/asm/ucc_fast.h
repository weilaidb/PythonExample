#define __UCC_FAST_H__
#define R_E	0x80000000
#define R_W	0x20000000
#define R_I	0x10000000
#define R_L	0x08000000
#define R_F	0x04000000
#define T_R	0x80000000
#define T_W	0x20000000
#define T_I	0x10000000
#define T_L	0x08000000
#define UCC_FAST_RX_ALIGN			4
#define UCC_FAST_MRBLR_ALIGNMENT		4
#define UCC_FAST_VIRT_FIFO_REGS_ALIGNMENT	8
#define UCC_FAST_URFS_MIN_VAL				0x88
#define UCC_FAST_RECEIVE_VIRTUAL_FIFO_SIZE_FUDGE_FACTOR	8
enum ucc_fast_channel_protocol_mode ;
enum ucc_fast_transparent_txrx ;
enum ucc_fast_diag_mode ;
enum ucc_fast_sync_len ;
enum ucc_fast_ready_to_send ;
enum ucc_fast_rx_decoding_method ;
enum ucc_fast_tx_encoding_method ;
enum ucc_fast_transparent_tcrc ;
struct ucc_fast_info ;
struct ucc_fast_private ;
int ucc_fast_init(struct ucc_fast_info * uf_info, struct ucc_fast_private ** uccf_ret);
void ucc_fast_free(struct ucc_fast_private * uccf);
void ucc_fast_enable(struct ucc_fast_private * uccf, enum comm_dir mode);
void ucc_fast_disable(struct ucc_fast_private * uccf, enum comm_dir mode);
void ucc_fast_irq(struct ucc_fast_private * uccf);
void ucc_fast_transmit_on_demand(struct ucc_fast_private * uccf);
u32 ucc_fast_get_qe_cr_subblock(int uccf_num);
void ucc_fast_dump_regs(struct ucc_fast_private * uccf);
