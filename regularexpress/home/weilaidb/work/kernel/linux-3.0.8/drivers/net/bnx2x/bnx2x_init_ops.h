#define BNX2X_INIT_OPS_H
static int bnx2x_gunzip(struct bnx2x *bp, const u8 *zbuf, int len);
static void bnx2x_reg_wr_ind(struct bnx2x *bp, u32 addr, u32 val);
static void bnx2x_write_dmae_phys_len(struct bnx2x *bp, dma_addr_t phys_addr,
u32 addr, u32 len);
static void bnx2x_init_str_wr(struct bnx2x *bp, u32 addr, const u32 *data,
u32 len)
static void bnx2x_init_ind_wr(struct bnx2x *bp, u32 addr, const u32 *data,
u32 len)
static void bnx2x_write_big_buf(struct bnx2x *bp, u32 addr, u32 len)
static void bnx2x_init_fill(struct bnx2x *bp, u32 addr, int fill, u32 len)
static void bnx2x_init_wr_64(struct bnx2x *bp, u32 addr, const u32 *data,
u32 len64)
#define IF_IS_INT_TABLE_ADDR(base, addr) \
if (((base) <= (addr)) && ((base) + 0x400 >= (addr)))
#define IF_IS_PRAM_ADDR(base, addr) \
if (((base) <= (addr)) && ((base) + 0x40000 >= (addr)))
static const u8 *bnx2x_sel_blob(struct bnx2x *bp, u32 addr, const u8 *data)
static void bnx2x_write_big_buf_wb(struct bnx2x *bp, u32 addr, u32 len)
static void bnx2x_init_wr_wb(struct bnx2x *bp, u32 addr, const u32 *data,
u32 len)
static void bnx2x_wr_64(struct bnx2x *bp, u32 reg, u32 val_lo, u32 val_hi)
static void bnx2x_init_wr_zp(struct bnx2x *bp, u32 addr, u32 len, u32 blob_off)
static void bnx2x_init_block(struct bnx2x *bp, u32 block, u32 stage)
#define NUM_WR_Q			13
#define NUM_RD_Q			29
#define MAX_RD_ORD			3
#define MAX_WR_ORD			2
struct arb_line ;
static const struct arb_line read_arb_data[NUM_RD_Q][MAX_RD_ORD + 1] = ;
static const struct arb_line write_arb_data[NUM_WR_Q][MAX_WR_ORD + 1] = ;
static const struct arb_line read_arb_addr[NUM_RD_Q-1] = ;
static const struct arb_line write_arb_addr[NUM_WR_Q-1] = ;
static void bnx2x_init_pxp_arb(struct bnx2x *bp, int r_order, int w_order)
#define ILT_MEMOP_ALLOC		0
#define ILT_MEMOP_FREE		1
#define ILT_ADDR1(x)		((u32)(((u64)x >> 12) & 0xFFFFFFFF))
#define ILT_ADDR2(x)		((u32)((1 << 20) | ((u64)x >> 44)))
#define ILT_RANGE(f, l)		(((l) << 10) | f)
static int bnx2x_ilt_line_mem_op(struct bnx2x *bp, struct ilt_line *line,
u32 size, u8 memop)
static int bnx2x_ilt_client_mem_op(struct bnx2x *bp, int cli_num, u8 memop)
static int bnx2x_ilt_mem_op(struct bnx2x *bp, u8 memop)
static void bnx2x_ilt_line_wr(struct bnx2x *bp, int abs_idx,
dma_addr_t page_mapping)
static void bnx2x_ilt_line_init_op(struct bnx2x *bp, struct bnx2x_ilt *ilt,
int idx, u8 initop)
static void bnx2x_ilt_boundry_init_op(struct bnx2x *bp,
struct ilt_client_info *ilt_cli,
u32 ilt_start, u8 initop)
static void bnx2x_ilt_client_init_op_ilt(struct bnx2x *bp,
struct bnx2x_ilt *ilt,
struct ilt_client_info *ilt_cli,
u8 initop)
static void bnx2x_ilt_client_init_op(struct bnx2x *bp,
struct ilt_client_info *ilt_cli, u8 initop)
static void bnx2x_ilt_client_id_init_op(struct bnx2x *bp,
int cli_num, u8 initop)
static void bnx2x_ilt_init_op(struct bnx2x *bp, u8 initop)
static void bnx2x_ilt_init_client_psz(struct bnx2x *bp, int cli_num,
u32 psz_reg, u8 initop)
static void bnx2x_ilt_init_page_size(struct bnx2x *bp, u8 initop)
#define QM_QUEUES_PER_FUNC	16
#define QM_INIT_MIN_CID_COUNT	31
#define QM_INIT(cid_cnt)	(cid_cnt > QM_INIT_MIN_CID_COUNT)
static void bnx2x_qm_init_cid_count(struct bnx2x *bp, int qm_cid_count,
u8 initop)
static void bnx2x_qm_set_ptr_table(struct bnx2x *bp, int qm_cid_count)
static void bnx2x_qm_init_ptr_table(struct bnx2x *bp, int qm_cid_count,
u8 initop)
static void bnx2x_src_init_t2(struct bnx2x *bp, struct src_ent *t2,
dma_addr_t t2_mapping, int src_cid_count)
