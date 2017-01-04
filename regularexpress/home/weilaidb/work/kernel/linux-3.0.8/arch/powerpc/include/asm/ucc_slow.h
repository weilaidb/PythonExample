#define __UCC_SLOW_H__
#define T_R	0x80000000
#define T_PAD	0x40000000
#define T_W	0x20000000
#define T_I	0x10000000
#define T_L	0x08000000
#define T_A	0x04000000
#define T_TC	0x04000000
#define T_CM	0x02000000
#define T_DEF	0x02000000
#define T_P	0x01000000
#define T_HB	0x01000000
#define T_NS	0x00800000
#define T_LC	0x00800000
#define T_RL	0x00400000
#define T_UN	0x00020000
#define T_CT	0x00010000
#define T_CSL	0x00010000
#define T_RC	0x003c0000
#define R_E	0x80000000
#define R_W	0x20000000
#define R_I	0x10000000
#define R_L	0x08000000
#define R_C	0x08000000
#define R_F	0x04000000
#define R_A	0x04000000
#define R_CM	0x02000000
#define R_ID	0x01000000
#define R_M	0x01000000
#define R_AM	0x00800000
#define R_DE	0x00800000
#define R_LG	0x00200000
#define R_BR	0x00200000
#define R_NO	0x00100000
#define R_FR	0x00100000
#define R_PR	0x00080000
#define R_AB	0x00080000
#define R_SH	0x00080000
#define R_CR	0x00040000
#define R_OV	0x00020000
#define R_CD	0x00010000
#define R_CL	0x00010000
#define UCC_SLOW_RX_ALIGN		4
#define UCC_SLOW_MRBLR_ALIGNMENT	4
#define UCC_SLOW_PRAM_SIZE		0x100
#define ALIGNMENT_OF_UCC_SLOW_PRAM	64
enum ucc_slow_channel_protocol_mode ;
enum ucc_slow_transparent_tcrc ;
enum ucc_slow_tx_oversampling_rate ;
enum ucc_slow_rx_oversampling_rate ;
enum ucc_slow_tx_encoding_method ;
enum ucc_slow_rx_decoding_method ;
enum ucc_slow_diag_mode ;
struct ucc_slow_info ;
struct ucc_slow_private ;
int ucc_slow_init(struct ucc_slow_info * us_info, struct ucc_slow_private ** uccs_ret);
void ucc_slow_free(struct ucc_slow_private * uccs);
void ucc_slow_enable(struct ucc_slow_private * uccs, enum comm_dir mode);
void ucc_slow_disable(struct ucc_slow_private * uccs, enum comm_dir mode);
void ucc_slow_poll_transmitter_now(struct ucc_slow_private * uccs);
void ucc_slow_graceful_stop_tx(struct ucc_slow_private * uccs);
void ucc_slow_stop_tx(struct ucc_slow_private * uccs);
void ucc_slow_restart_tx(struct ucc_slow_private *uccs);
u32 ucc_slow_get_qe_cr_subblock(int uccs_num);
