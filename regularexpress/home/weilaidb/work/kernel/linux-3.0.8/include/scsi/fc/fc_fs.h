#define _FC_FS_H_
struct fc_frame_header ;
#define FC_FRAME_HEADER_LEN 24
#define FC_MAX_PAYLOAD  2112U
#define FC_MIN_MAX_PAYLOAD  256U
#define FC_MAX_FRAME	(FC_MAX_PAYLOAD + FC_FRAME_HEADER_LEN)
#define FC_MIN_MAX_FRAME (FC_MIN_MAX_PAYLOAD + FC_FRAME_HEADER_LEN)
enum fc_rctl ;
#define FC_RCTL_NAMES_INIT
enum fc_well_known_fid ;
#define	FC_FID_WELL_KNOWN_MAX	0xffffff
#define	FC_FID_WELL_KNOWN_BASE	0xfffff5
#define	FC_FID_DOM_MGR		0xfffc00
#define	FC_FID_DOMAIN		0
#define	FC_FID_PORT		1
#define	FC_FID_LINK		2
enum fc_fh_type ;
#define FC_TYPE_NAMES_INIT
#define FC_XID_UNKNOWN  0xffff
#define FC_XID_MIN	0x0
#define FC_XID_MAX	0xfffe
#define	FC_FC_EX_CTX	(1 << 23)
#define	FC_FC_SEQ_CTX	(1 << 22)
#define	FC_FC_FIRST_SEQ (1 << 21)
#define	FC_FC_LAST_SEQ	(1 << 20)
#define	FC_FC_END_SEQ	(1 << 19)
#define	FC_FC_END_CONN	(1 << 18)
#define	FC_FC_RES_B17	(1 << 17)
#define	FC_FC_SEQ_INIT	(1 << 16)
#define	FC_FC_X_ID_REASS (1 << 15)
#define	FC_FC_X_ID_INVAL (1 << 14)
#define	FC_FC_ACK_1	(1 << 12)
#define	FC_FC_ACK_N	(2 << 12)
#define	FC_FC_ACK_0	(3 << 12)
#define	FC_FC_RES_B11	(1 << 11)
#define	FC_FC_RES_B10	(1 << 10)
#define	FC_FC_RETX_SEQ	(1 << 9)
#define	FC_FC_UNI_TX	(1 << 8)
#define	FC_FC_CONT_SEQ(i) ((i) << 6)
#define	FC_FC_ABT_SEQ(i) ((i) << 4)
#define	FC_FC_REL_OFF	(1 << 3)
#define	FC_FC_RES2	(1 << 2)
#define	FC_FC_FILL(i)	((i) & 3)
struct fc_ba_acc ;
struct fc_ba_rjt ;
enum fc_ba_rjt_reason ;
enum fc_ba_rjt_explan ;
struct fc_pf_rjt ;
enum fc_pf_rjt_reason ;
#define FC_DEF_E_D_TOV	2000UL
#define FC_DEF_R_A_TOV	10000UL
