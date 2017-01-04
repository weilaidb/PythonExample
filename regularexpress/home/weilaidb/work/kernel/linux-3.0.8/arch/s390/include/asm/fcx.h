#define _ASM_S390_FCX_H _ASM_S390_FCX_H
#define TCW_FORMAT_DEFAULT		0
#define TCW_TIDAW_FORMAT_DEFAULT	0
#define TCW_FLAGS_INPUT_TIDA		1 << (23 - 5)
#define TCW_FLAGS_TCCB_TIDA		1 << (23 - 6)
#define TCW_FLAGS_OUTPUT_TIDA		1 << (23 - 7)
#define TCW_FLAGS_TIDAW_FORMAT(x)	((x) & 3) << (23 - 9)
#define TCW_FLAGS_GET_TIDAW_FORMAT(x)	(((x) >> (23 - 9)) & 3)
struct tcw  __attribute__ ((packed, aligned(64)));
#define TIDAW_FLAGS_LAST		1 << (7 - 0)
#define TIDAW_FLAGS_SKIP		1 << (7 - 1)
#define TIDAW_FLAGS_DATA_INT		1 << (7 - 2)
#define TIDAW_FLAGS_TTIC		1 << (7 - 3)
#define TIDAW_FLAGS_INSERT_CBC		1 << (7 - 4)
struct tidaw  __attribute__ ((packed, aligned(16)));
struct tsa_iostat  __attribute__ ((packed));
struct tsa_ddpc  __attribute__ ((packed));
#define TSA_INTRG_FLAGS_CU_STATE_VALID		1 << (7 - 0)
#define TSA_INTRG_FLAGS_DEV_STATE_VALID		1 << (7 - 1)
#define TSA_INTRG_FLAGS_OP_STATE_VALID		1 << (7 - 2)
struct tsa_intrg  __attribute__ ((packed));
#define TSB_FORMAT_NONE		0
#define TSB_FORMAT_IOSTAT	1
#define TSB_FORMAT_DDPC		2
#define TSB_FORMAT_INTRG	3
#define TSB_FLAGS_DCW_OFFSET_VALID	1 << (7 - 0)
#define TSB_FLAGS_COUNT_VALID		1 << (7 - 1)
#define TSB_FLAGS_CACHE_MISS		1 << (7 - 2)
#define TSB_FLAGS_TIME_VALID		1 << (7 - 3)
#define TSB_FLAGS_FORMAT(x)		((x) & 7)
#define TSB_FORMAT(t)			((t)->flags & 7)
struct tsb  __attribute__ ((packed, aligned(8)));
#define DCW_INTRG_FORMAT_DEFAULT	0
#define DCW_INTRG_RC_UNSPECIFIED	0
#define DCW_INTRG_RC_TIMEOUT		1
#define DCW_INTRG_RCQ_UNSPECIFIED	0
#define DCW_INTRG_RCQ_PRIMARY		1
#define DCW_INTRG_RCQ_SECONDARY		2
#define DCW_INTRG_FLAGS_MPM		1 < (7 - 0)
#define DCW_INTRG_FLAGS_PPR		1 < (7 - 1)
#define DCW_INTRG_FLAGS_CRIT		1 < (7 - 2)
struct dcw_intrg_data  __attribute__ ((packed));
#define DCW_FLAGS_CC		1 << (7 - 1)
#define DCW_CMD_WRITE		0x01
#define DCW_CMD_READ		0x02
#define DCW_CMD_CONTROL		0x03
#define DCW_CMD_SENSE		0x04
#define DCW_CMD_SENSE_ID	0xe4
#define DCW_CMD_INTRG		0x40
struct dcw  __attribute__ ((packed));
#define TCCB_FORMAT_DEFAULT	0x7f
#define TCCB_MAX_DCW		30
#define TCCB_MAX_SIZE		(sizeof(struct tccb_tcah) + \
TCCB_MAX_DCW * sizeof(struct dcw) + \
sizeof(struct tccb_tcat))
#define TCCB_SAC_DEFAULT	0x1ffe
#define TCCB_SAC_INTRG		0x1fff
struct tccb_tcah  __attribute__ ((packed));
struct tccb_tcat  __attribute__ ((packed));
struct tccb  __attribute__ ((packed, aligned(8)));
struct tcw *tcw_get_intrg(struct tcw *tcw);
void *tcw_get_data(struct tcw *tcw);
struct tccb *tcw_get_tccb(struct tcw *tcw);
struct tsb *tcw_get_tsb(struct tcw *tcw);
void tcw_init(struct tcw *tcw, int r, int w);
void tcw_finalize(struct tcw *tcw, int num_tidaws);
void tcw_set_intrg(struct tcw *tcw, struct tcw *intrg_tcw);
void tcw_set_data(struct tcw *tcw, void *data, int use_tidal);
void tcw_set_tccb(struct tcw *tcw, struct tccb *tccb);
void tcw_set_tsb(struct tcw *tcw, struct tsb *tsb);
void tccb_init(struct tccb *tccb, size_t tccb_size, u32 sac);
void tsb_init(struct tsb *tsb);
struct dcw *tccb_add_dcw(struct tccb *tccb, size_t tccb_size, u8 cmd, u8 flags,
void *cd, u8 cd_count, u32 count);
struct tidaw *tcw_add_tidaw(struct tcw *tcw, int num_tidaws, u8 flags,
void *addr, u32 count);
