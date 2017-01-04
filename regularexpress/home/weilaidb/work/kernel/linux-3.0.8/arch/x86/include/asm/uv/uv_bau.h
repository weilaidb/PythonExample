#define _ASM_X86_UV_UV_BAU_H
#define BITSPERBYTE 8
#define MAX_CPUS_PER_UVHUB		64
#define MAX_CPUS_PER_SOCKET		32
#define ADP_SZ				64
#define UV_CPUS_PER_AS			32
#define ITEMS_PER_DESC			8
#define MAX_BAU_CONCURRENT		3
#define UV_ACT_STATUS_MASK		0x3
#define UV_ACT_STATUS_SIZE		2
#define UV_DISTRIBUTION_SIZE		256
#define UV_SW_ACK_NPENDING		8
#define UV1_NET_ENDPOINT_INTD		0x38
#define UV2_NET_ENDPOINT_INTD		0x28
#define UV_NET_ENDPOINT_INTD		(is_uv1_hub() ?			\
UV1_NET_ENDPOINT_INTD : UV2_NET_ENDPOINT_INTD)
#define UV_DESC_PSHIFT			49
#define UV_PAYLOADQ_PNODE_SHIFT		49
#define UV_PTC_BASENAME			"sgi_uv/ptc_statistics"
#define UV_BAU_BASENAME			"sgi_uv/bau_tunables"
#define UV_BAU_TUNABLES_DIR		"sgi_uv"
#define UV_BAU_TUNABLES_FILE		"bau_tunables"
#define WHITESPACE			" \t\n"
#define uv_physnodeaddr(x)		((__pa((unsigned long)(x)) & uv_mmask))
#define cpubit_isset(cpu, bau_local_cpumask) \
test_bit((cpu), (bau_local_cpumask).bits)
#define UV1_INTD_SOFT_ACK_TIMEOUT_PERIOD (9UL)
#define UV2_INTD_SOFT_ACK_TIMEOUT_PERIOD (65*10UL)
#define UV_INTD_SOFT_ACK_TIMEOUT_PERIOD	(is_uv1_hub() ?			\
UV1_INTD_SOFT_ACK_TIMEOUT_PERIOD :			\
UV2_INTD_SOFT_ACK_TIMEOUT_PERIOD)
#define BAU_MISC_CONTROL_MULT_MASK	3
#define UVH_AGING_PRESCALE_SEL		0x000000b000UL
#define BAU_URGENCY_7_SHIFT		28
#define BAU_URGENCY_7_MASK		7
#define UVH_TRANSACTION_TIMEOUT		0x000000b200UL
#define BAU_TRANS_SHIFT			40
#define BAU_TRANS_MASK			0x3f
#define AS_PUSH_SHIFT UVH_LB_BAU_SB_ACTIVATION_CONTROL_PUSH_SHFT
#define SOFTACK_MSHIFT UVH_LB_BAU_MISC_CONTROL_ENABLE_INTD_SOFT_ACK_MODE_SHFT
#define SOFTACK_PSHIFT UVH_LB_BAU_MISC_CONTROL_INTD_SOFT_ACK_TIMEOUT_PERIOD_SHFT
#define SOFTACK_TIMEOUT_PERIOD UV_INTD_SOFT_ACK_TIMEOUT_PERIOD
#define write_gmmr	uv_write_global_mmr64
#define write_lmmr	uv_write_local_mmr
#define read_lmmr	uv_read_local_mmr
#define read_gmmr	uv_read_global_mmr64
#define DS_IDLE				0
#define DS_ACTIVE			1
#define DS_DESTINATION_TIMEOUT		2
#define DS_SOURCE_TIMEOUT		3
#define UV2H_DESC_IDLE			0
#define UV2H_DESC_DEST_TIMEOUT		2
#define UV2H_DESC_DEST_STRONG_NACK	3
#define UV2H_DESC_BUSY			4
#define UV2H_DESC_SOURCE_TIMEOUT	6
#define UV2H_DESC_DEST_PUT_ERR		7
#define PLUGGED_DELAY			10
#define PLUGSB4RESET			100
#define TIMEOUTSB4RESET			1
#define IPI_RESET_LIMIT			1
#define COMPLETE_THRESHOLD		5
#define UV_LB_SUBNODEID			0x10
#define UV_SA_SHFT UVH_LB_BAU_MISC_CONTROL_INTD_SOFT_ACK_TIMEOUT_PERIOD_SHFT
#define UV_SA_MASK UVH_LB_BAU_MISC_CONTROL_INTD_SOFT_ACK_TIMEOUT_PERIOD_MASK
#define UV2_ACK_MASK			0x7UL
#define UV2_ACK_UNITS_SHFT		3
#define UV2_LEG_SHFT UV2H_LB_BAU_MISC_CONTROL_USE_LEGACY_DESCRIPTOR_FORMATS_SHFT
#define UV2_EXT_SHFT UV2H_LB_BAU_MISC_CONTROL_ENABLE_EXTENDED_SB_STATUS_SHFT
#define DEST_Q_SIZE			20
#define DEST_NUM_RESOURCES		8
#define FLUSH_RETRY_PLUGGED		1
#define FLUSH_RETRY_TIMEOUT		2
#define FLUSH_GIVEUP			3
#define FLUSH_COMPLETE			4
#define CONGESTED_RESPONSE_US		1000
#define CONGESTED_REPS			10
#define CONGESTED_PERIOD		30
#define MSG_NOOP			0
#define MSG_REGULAR			1
#define MSG_RETRY			2
struct bau_targ_hubmask ;
struct bau_local_cpumask ;
struct bau_msg_payload ;
struct bau_msg_header ;
struct bau_desc ;
struct bau_pq_entry ;
struct msg_desc ;
struct reset_args ;
struct ptc_stats ;
struct tunables ;
struct hub_and_pnode ;
struct socket_desc ;
struct uvhub_desc ;
struct bau_control ;
static unsigned long read_mmr_uv2_status(void)
static void write_mmr_data_broadcast(int pnode, unsigned long mmr_image)
static void write_mmr_descriptor_base(int pnode, unsigned long mmr_image)
static void write_mmr_activation(unsigned long index)
static void write_gmmr_activation(int pnode, unsigned long mmr_image)
static void write_mmr_payload_first(int pnode, unsigned long mmr_image)
static void write_mmr_payload_tail(int pnode, unsigned long mmr_image)
static void write_mmr_payload_last(int pnode, unsigned long mmr_image)
static void write_mmr_misc_control(int pnode, unsigned long mmr_image)
static unsigned long read_mmr_misc_control(int pnode)
static void write_mmr_sw_ack(unsigned long mr)
static unsigned long read_mmr_sw_ack(void)
static unsigned long read_gmmr_sw_ack(int pnode)
static void write_mmr_data_config(int pnode, unsigned long mr)
static inline int bau_uvhub_isset(int uvhub, struct bau_targ_hubmask *dstp)
static inline void bau_uvhub_set(int pnode, struct bau_targ_hubmask *dstp)
static inline void bau_uvhubs_clear(struct bau_targ_hubmask *dstp,
int nbits)
static inline int bau_uvhub_weight(struct bau_targ_hubmask *dstp)
static inline void bau_cpubits_clear(struct bau_local_cpumask *dstp, int nbits)
extern void uv_bau_message_intr1(void);
extern void uv_bau_timeout_intr1(void);
struct atomic_short ;
static inline int atomic_read_short(const struct atomic_short *v)
static inline int atom_asr(short i, struct atomic_short *v)
static inline int atomic_inc_unless_ge(spinlock_t *lock, atomic_t *v, int u)
