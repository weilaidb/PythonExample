#define PERF_EVENT_P4_H
#define ARCH_P4_TOTAL_ESCR	(46)
#define ARCH_P4_RESERVED_ESCR	(2)
#define ARCH_P4_MAX_ESCR	(ARCH_P4_TOTAL_ESCR - ARCH_P4_RESERVED_ESCR)
#define ARCH_P4_MAX_CCCR	(18)
#define ARCH_P4_CNTRVAL_BITS	(40)
#define ARCH_P4_CNTRVAL_MASK	((1ULL << ARCH_P4_CNTRVAL_BITS) - 1)
#define ARCH_P4_UNFLAGGED_BIT	((1ULL) << (ARCH_P4_CNTRVAL_BITS - 1))
#define P4_ESCR_EVENT_MASK	0x7e000000U
#define P4_ESCR_EVENT_SHIFT	25
#define P4_ESCR_EVENTMASK_MASK	0x01fffe00U
#define P4_ESCR_EVENTMASK_SHIFT	9
#define P4_ESCR_TAG_MASK	0x000001e0U
#define P4_ESCR_TAG_SHIFT	5
#define P4_ESCR_TAG_ENABLE	0x00000010U
#define P4_ESCR_T0_OS		0x00000008U
#define P4_ESCR_T0_USR		0x00000004U
#define P4_ESCR_T1_OS		0x00000002U
#define P4_ESCR_T1_USR		0x00000001U
#define P4_ESCR_EVENT(v)	((v) << P4_ESCR_EVENT_SHIFT)
#define P4_ESCR_EMASK(v)	((v) << P4_ESCR_EVENTMASK_SHIFT)
#define P4_ESCR_TAG(v)		((v) << P4_ESCR_TAG_SHIFT)
#define P4_CCCR_OVF			0x80000000U
#define P4_CCCR_CASCADE			0x40000000U
#define P4_CCCR_OVF_PMI_T0		0x04000000U
#define P4_CCCR_OVF_PMI_T1		0x08000000U
#define P4_CCCR_FORCE_OVF		0x02000000U
#define P4_CCCR_EDGE			0x01000000U
#define P4_CCCR_THRESHOLD_MASK		0x00f00000U
#define P4_CCCR_THRESHOLD_SHIFT		20
#define P4_CCCR_COMPLEMENT		0x00080000U
#define P4_CCCR_COMPARE			0x00040000U
#define P4_CCCR_ESCR_SELECT_MASK	0x0000e000U
#define P4_CCCR_ESCR_SELECT_SHIFT	13
#define P4_CCCR_ENABLE			0x00001000U
#define P4_CCCR_THREAD_SINGLE		0x00010000U
#define P4_CCCR_THREAD_BOTH		0x00020000U
#define P4_CCCR_THREAD_ANY		0x00030000U
#define P4_CCCR_RESERVED		0x00000fffU
#define P4_CCCR_THRESHOLD(v)		((v) << P4_CCCR_THRESHOLD_SHIFT)
#define P4_CCCR_ESEL(v)			((v) << P4_CCCR_ESCR_SELECT_SHIFT)
#define P4_GEN_ESCR_EMASK(class, name, bit)	\
class##__##name = ((1 << bit) << P4_ESCR_EVENTMASK_SHIFT)
#define P4_ESCR_EMASK_BIT(class, name)		class##__##name
#define p4_config_pack_escr(v)		(((u64)(v)) << 32)
#define p4_config_pack_cccr(v)		(((u64)(v)) & 0xffffffffULL)
#define p4_config_unpack_escr(v)	(((u64)(v)) >> 32)
#define p4_config_unpack_cccr(v)	(((u64)(v)) & 0xffffffffULL)
#define p4_config_unpack_emask(v)			\
()
#define p4_config_unpack_event(v)			\
()
#define P4_CONFIG_HT_SHIFT		63
#define P4_CONFIG_HT			(1ULL << P4_CONFIG_HT_SHIFT)
#define P4_CONFIG_MASK_ESCR		\
P4_ESCR_EVENT_MASK	|	\
P4_ESCR_EVENTMASK_MASK	|	\
P4_ESCR_TAG_MASK	|	\
P4_ESCR_TAG_ENABLE
#define P4_CONFIG_MASK_CCCR		\
P4_CCCR_EDGE		|	\
P4_CCCR_THRESHOLD_MASK	|	\
P4_CCCR_COMPLEMENT	|	\
P4_CCCR_COMPARE		|	\
P4_CCCR_THREAD_ANY	|	\
P4_CCCR_RESERVED
#define P4_CONFIG_MASK				  	  \
(p4_config_pack_escr(P4_CONFIG_MASK_ESCR))	| \
(p4_config_pack_cccr(P4_CONFIG_MASK_CCCR))
static inline bool p4_is_event_cascaded(u64 config)
static inline int p4_ht_config_thread(u64 config)
static inline u64 p4_set_ht_bit(u64 config)
static inline u64 p4_clear_ht_bit(u64 config)
static inline int p4_ht_active(void)
static inline int p4_ht_thread(int cpu)
static inline int p4_should_swap_ts(u64 config, int cpu)
static inline u32 p4_default_cccr_conf(int cpu)
static inline u32 p4_default_escr_conf(int cpu, int exclude_os, int exclude_usr)
enum P4_EVENTS ;
#define P4_OPCODE(event)		event##_OPCODE
#define P4_OPCODE_ESEL(opcode)		((opcode & 0x00ff) >> 0)
#define P4_OPCODE_EVNT(opcode)		((opcode & 0xff00) >> 8)
#define P4_OPCODE_PACK(event, sel)	(((event) << 8) | sel)
enum P4_EVENT_OPCODES ;
enum P4_ESCR_EMASKS ;
#define P4_PEBS_CONFIG_ENABLE		(1 << 7)
#define P4_PEBS_CONFIG_UOP_TAG		(1 << 8)
#define P4_PEBS_CONFIG_METRIC_MASK	0x3f
#define P4_PEBS_CONFIG_MASK		0xff
#define P4_PEBS_ENABLE			0x02000000U
#define P4_PEBS_ENABLE_UOP_TAG		0x01000000U
#define p4_config_unpack_metric(v)	(((u64)(v)) & P4_PEBS_CONFIG_METRIC_MASK)
#define p4_config_unpack_pebs(v)	(((u64)(v)) & P4_PEBS_CONFIG_MASK)
#define p4_config_pebs_has(v, mask)	(p4_config_unpack_pebs(v) & (mask))
enum P4_PEBS_METRIC ;
