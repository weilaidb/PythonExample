#define IMMEDIATE (1 << 23)
#define CAAM_CMD_SZ sizeof(u32)
#define CAAM_PTR_SZ sizeof(dma_addr_t)
#define CAAM_DESC_BYTES_MAX (CAAM_CMD_SZ * 64)
#define PRINT_POS do  while (0)
#define PRINT_POS
#define DISABLE_AUTO_INFO_FIFO (IMMEDIATE | LDST_CLASS_DECO | \
LDST_SRCDST_WORD_DECOCTRL | \
(LDOFF_DISABLE_AUTO_NFIFO << LDST_OFFSET_SHIFT))
#define ENABLE_AUTO_INFO_FIFO (IMMEDIATE | LDST_CLASS_DECO | \
LDST_SRCDST_WORD_DECOCTRL | \
(LDOFF_ENABLE_AUTO_NFIFO << LDST_OFFSET_SHIFT))
static inline int desc_len(u32 *desc)
static inline int desc_bytes(void *desc)
static inline u32 *desc_end(u32 *desc)
static inline void *sh_desc_pdb(u32 *desc)
static inline void init_desc(u32 *desc, u32 options)
static inline void init_sh_desc(u32 *desc, u32 options)
static inline void init_sh_desc_pdb(u32 *desc, u32 options, size_t pdb_bytes)
static inline void init_job_desc(u32 *desc, u32 options)
static inline void append_ptr(u32 *desc, dma_addr_t ptr)
static inline void init_job_desc_shared(u32 *desc, dma_addr_t ptr, int len,
u32 options)
static inline void append_data(u32 *desc, void *data, int len)
static inline void append_cmd(u32 *desc, u32 command)
static inline void append_cmd_ptr(u32 *desc, dma_addr_t ptr, int len,
u32 command)
static inline void append_cmd_data(u32 *desc, void *data, int len,
u32 command)
static inline u32 *append_jump(u32 *desc, u32 options)
static inline void set_jump_tgt_here(u32 *desc, u32 *jump_cmd)
#define APPEND_CMD(cmd, op) \
static inline void append_##cmd(u32 *desc, u32 options) \
APPEND_CMD(operation, OPERATION)
APPEND_CMD(move, MOVE)
#define APPEND_CMD_LEN(cmd, op) \
static inline void append_##cmd(u32 *desc, unsigned int len, u32 options) \
APPEND_CMD_LEN(seq_store, SEQ_STORE)
APPEND_CMD_LEN(seq_fifo_load, SEQ_FIFO_LOAD)
APPEND_CMD_LEN(seq_fifo_store, SEQ_FIFO_STORE)
#define APPEND_CMD_PTR(cmd, op) \
static inline void append_##cmd(u32 *desc, dma_addr_t ptr, unsigned int len, \
u32 options) \
APPEND_CMD_PTR(key, KEY)
APPEND_CMD_PTR(seq_in_ptr, SEQ_IN_PTR)
APPEND_CMD_PTR(seq_out_ptr, SEQ_OUT_PTR)
APPEND_CMD_PTR(load, LOAD)
APPEND_CMD_PTR(store, STORE)
APPEND_CMD_PTR(fifo_load, FIFO_LOAD)
APPEND_CMD_PTR(fifo_store, FIFO_STORE)
#define APPEND_CMD_PTR_TO_IMM(cmd, op) \
static inline void append_##cmd##_as_imm(u32 *desc, void *data, \
unsigned int len, u32 options) \
APPEND_CMD_PTR_TO_IMM(load, LOAD);
APPEND_CMD_PTR_TO_IMM(fifo_load, FIFO_LOAD);
#define APPEND_CMD_PTR_TO_IMM2(cmd, op) \
static inline void append_##cmd##_as_imm(u32 *desc, void *data, \
unsigned int data_len, \
unsigned int len, u32 options) \
APPEND_CMD_PTR_TO_IMM2(key, KEY);
#define APPEND_CMD_RAW_IMM(cmd, op, type) \
static inline void append_##cmd##_imm_##type(u32 *desc, type immediate, \
u32 options) \
APPEND_CMD_RAW_IMM(load, LOAD, u32);
