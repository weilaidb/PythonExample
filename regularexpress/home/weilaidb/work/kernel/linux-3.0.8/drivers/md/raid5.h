#define _RAID5_H
enum check_states ;
enum reconstruct_states ;
struct stripe_head ;
struct stripe_head_state ;
struct r6_state ;
#define	R5_UPTODATE	0
#define	R5_LOCKED	1
#define	R5_OVERWRITE	2
#define	R5_Insync	3
#define	R5_Wantread	4
#define	R5_Wantwrite	5
#define	R5_Overlap	7
#define	R5_ReadError	8
#define	R5_ReWrite	9
#define	R5_Expanded	10
#define	R5_Wantcompute	11
#define	R5_Wantfill	12
#define R5_Wantdrain	13
#define R5_WantFUA	14
#define RECONSTRUCT_WRITE	1
#define READ_MODIFY_WRITE	2
#define	CHECK_PARITY		3
#define UPDATE_PARITY		4
#define STRIPE_HANDLE		2
#define	STRIPE_SYNCING		3
#define	STRIPE_INSYNC		4
#define	STRIPE_PREREAD_ACTIVE	5
#define	STRIPE_DELAYED		6
#define	STRIPE_DEGRADED		7
#define	STRIPE_BIT_DELAY	8
#define	STRIPE_EXPANDING	9
#define	STRIPE_EXPAND_SOURCE	10
#define	STRIPE_EXPAND_READY	11
#define	STRIPE_IO_STARTED	12
#define	STRIPE_FULL_WRITE	13
#define	STRIPE_BIOFILL_RUN	14
#define	STRIPE_COMPUTE_RUN	15
#define	STRIPE_OPS_REQ_PENDING	16
#define STRIPE_OP_BIOFILL	0
#define STRIPE_OP_COMPUTE_BLK	1
#define STRIPE_OP_PREXOR	2
#define STRIPE_OP_BIODRAIN	3
#define STRIPE_OP_RECONSTRUCT	4
#define STRIPE_OP_CHECK	5
struct disk_info ;
struct raid5_private_data ;
typedef struct raid5_private_data raid5_conf_t;
#define ALGORITHM_LEFT_ASYMMETRIC	0
#define ALGORITHM_RIGHT_ASYMMETRIC	1
#define ALGORITHM_LEFT_SYMMETRIC	2
#define ALGORITHM_RIGHT_SYMMETRIC	3
#define ALGORITHM_PARITY_0		4
#define ALGORITHM_PARITY_N		5
#define ALGORITHM_ROTATING_ZERO_RESTART	8
#define ALGORITHM_ROTATING_N_RESTART	9
#define ALGORITHM_ROTATING_N_CONTINUE	10
#define ALGORITHM_LEFT_ASYMMETRIC_6	16
#define ALGORITHM_RIGHT_ASYMMETRIC_6	17
#define ALGORITHM_LEFT_SYMMETRIC_6	18
#define ALGORITHM_RIGHT_SYMMETRIC_6	19
#define ALGORITHM_PARITY_0_6		20
#define ALGORITHM_PARITY_N_6		ALGORITHM_PARITY_N
static inline int algorithm_valid_raid5(int layout)
static inline int algorithm_valid_raid6(int layout)
static inline int algorithm_is_DDF(int layout)
extern int md_raid5_congested(mddev_t *mddev, int bits);
extern void md_raid5_kick_device(raid5_conf_t *conf);
extern int raid5_set_cache_size(mddev_t *mddev, int size);
