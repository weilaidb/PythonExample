#define PREBOOT
#define	MIN(a, b) (((a) < (b)) ? (a) : (b))
static long long INIT read_int(unsigned char *ptr, int size)
#define ENDIAN_CONVERT(x) \
x = (typeof(x))read_int((unsigned char *)&x, sizeof(x))
#define LZMA_IOBUF_SIZE	0x10000
struct rc ;
#define RC_TOP_BITS 24
#define RC_MOVE_BITS 5
#define RC_MODEL_TOTAL_BITS 11
static int INIT nofill(void *buffer, unsigned int len)
static void INIT rc_read(struct rc *rc)
static inline void INIT rc_init(struct rc *rc,
int (*fill)(void*, unsigned int),
char *buffer, int buffer_size)
static inline void INIT rc_init_code(struct rc *rc)
static void INIT rc_do_normalize(struct rc *rc)
static inline void INIT rc_normalize(struct rc *rc)
static inline uint32_t INIT rc_is_bit_0_helper(struct rc *rc, uint16_t *p)
static inline int INIT rc_is_bit_0(struct rc *rc, uint16_t *p)
static inline void INIT rc_update_bit_0(struct rc *rc, uint16_t *p)
static inline void INIT rc_update_bit_1(struct rc *rc, uint16_t *p)
static int INIT rc_get_bit(struct rc *rc, uint16_t *p, int *symbol)
static inline int INIT rc_direct_bit(struct rc *rc)
static inline void INIT
rc_bit_tree_decode(struct rc *rc, uint16_t *p, int num_levels, int *symbol)
struct lzma_header  __attribute__ ((packed)) ;
#define LZMA_BASE_SIZE 1846
#define LZMA_LIT_SIZE 768
#define LZMA_NUM_POS_BITS_MAX 4
#define LZMA_LEN_NUM_LOW_BITS 3
#define LZMA_LEN_NUM_MID_BITS 3
#define LZMA_LEN_NUM_HIGH_BITS 8
#define LZMA_LEN_CHOICE 0
#define LZMA_LEN_CHOICE_2 (LZMA_LEN_CHOICE + 1)
#define LZMA_LEN_LOW (LZMA_LEN_CHOICE_2 + 1)
#define LZMA_LEN_MID (LZMA_LEN_LOW \
+ (1 << (LZMA_NUM_POS_BITS_MAX + LZMA_LEN_NUM_LOW_BITS)))
#define LZMA_LEN_HIGH (LZMA_LEN_MID \
+(1 << (LZMA_NUM_POS_BITS_MAX + LZMA_LEN_NUM_MID_BITS)))
#define LZMA_NUM_LEN_PROBS (LZMA_LEN_HIGH + (1 << LZMA_LEN_NUM_HIGH_BITS))
#define LZMA_NUM_STATES 12
#define LZMA_NUM_LIT_STATES 7
#define LZMA_START_POS_MODEL_INDEX 4
#define LZMA_END_POS_MODEL_INDEX 14
#define LZMA_NUM_FULL_DISTANCES (1 << (LZMA_END_POS_MODEL_INDEX >> 1))
#define LZMA_NUM_POS_SLOT_BITS 6
#define LZMA_NUM_LEN_TO_POS_STATES 4
#define LZMA_NUM_ALIGN_BITS 4
#define LZMA_MATCH_MIN_LEN 2
#define LZMA_IS_MATCH 0
#define LZMA_IS_REP (LZMA_IS_MATCH + (LZMA_NUM_STATES << LZMA_NUM_POS_BITS_MAX))
#define LZMA_IS_REP_G0 (LZMA_IS_REP + LZMA_NUM_STATES)
#define LZMA_IS_REP_G1 (LZMA_IS_REP_G0 + LZMA_NUM_STATES)
#define LZMA_IS_REP_G2 (LZMA_IS_REP_G1 + LZMA_NUM_STATES)
#define LZMA_IS_REP_0_LONG (LZMA_IS_REP_G2 + LZMA_NUM_STATES)
#define LZMA_POS_SLOT (LZMA_IS_REP_0_LONG \
+ (LZMA_NUM_STATES << LZMA_NUM_POS_BITS_MAX))
#define LZMA_SPEC_POS (LZMA_POS_SLOT \
+(LZMA_NUM_LEN_TO_POS_STATES << LZMA_NUM_POS_SLOT_BITS))
#define LZMA_ALIGN (LZMA_SPEC_POS \
+ LZMA_NUM_FULL_DISTANCES - LZMA_END_POS_MODEL_INDEX)
#define LZMA_LEN_CODER (LZMA_ALIGN + (1 << LZMA_NUM_ALIGN_BITS))
#define LZMA_REP_LEN_CODER (LZMA_LEN_CODER + LZMA_NUM_LEN_PROBS)
#define LZMA_LITERAL (LZMA_REP_LEN_CODER + LZMA_NUM_LEN_PROBS)
struct writer ;
struct cstate ;
static inline size_t INIT get_pos(struct writer *wr)
static inline uint8_t INIT peek_old_byte(struct writer *wr,
uint32_t offs)
static inline int INIT write_byte(struct writer *wr, uint8_t byte)
static inline int INIT copy_byte(struct writer *wr, uint32_t offs)
static inline int INIT copy_bytes(struct writer *wr,
uint32_t rep0, int len)
static inline int INIT process_bit0(struct writer *wr, struct rc *rc,
struct cstate *cst, uint16_t *p,
int pos_state, uint16_t *prob,
int lc, uint32_t literal_pos_mask)
static inline int INIT process_bit1(struct writer *wr, struct rc *rc,
struct cstate *cst, uint16_t *p,
int pos_state, uint16_t *prob)
STATIC inline int INIT unlzma(unsigned char *buf, int in_len,
int(*fill)(void*, unsigned int),
int(*flush)(void*, unsigned int),
unsigned char *output,
int *posp,
void(*error)(char *x)
)
STATIC int INIT decompress(unsigned char *buf, int in_len,
int(*fill)(void*, unsigned int),
int(*flush)(void*, unsigned int),
unsigned char *output,
int *posp,
void(*error)(char *x)
)
