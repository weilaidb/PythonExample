#define CP_FLAG_CLEAR                 0
#define CP_FLAG_SET                   1
#define CP_FLAG_SWAP_DIRECTION        ((0 * 32) + 0)
#define CP_FLAG_SWAP_DIRECTION_LOAD   0
#define CP_FLAG_SWAP_DIRECTION_SAVE   1
#define CP_FLAG_UNK01                 ((0 * 32) + 1)
#define CP_FLAG_UNK01_CLEAR           0
#define CP_FLAG_UNK01_SET             1
#define CP_FLAG_UNK03                 ((0 * 32) + 3)
#define CP_FLAG_UNK03_CLEAR           0
#define CP_FLAG_UNK03_SET             1
#define CP_FLAG_USER_SAVE             ((0 * 32) + 5)
#define CP_FLAG_USER_SAVE_NOT_PENDING 0
#define CP_FLAG_USER_SAVE_PENDING     1
#define CP_FLAG_USER_LOAD             ((0 * 32) + 6)
#define CP_FLAG_USER_LOAD_NOT_PENDING 0
#define CP_FLAG_USER_LOAD_PENDING     1
#define CP_FLAG_UNK0B                 ((0 * 32) + 0xb)
#define CP_FLAG_UNK0B_CLEAR           0
#define CP_FLAG_UNK0B_SET             1
#define CP_FLAG_UNK1D                 ((0 * 32) + 0x1d)
#define CP_FLAG_UNK1D_CLEAR           0
#define CP_FLAG_UNK1D_SET             1
#define CP_FLAG_UNK20                 ((1 * 32) + 0)
#define CP_FLAG_UNK20_CLEAR           0
#define CP_FLAG_UNK20_SET             1
#define CP_FLAG_STATUS                ((2 * 32) + 0)
#define CP_FLAG_STATUS_BUSY           0
#define CP_FLAG_STATUS_IDLE           1
#define CP_FLAG_AUTO_SAVE             ((2 * 32) + 4)
#define CP_FLAG_AUTO_SAVE_NOT_PENDING 0
#define CP_FLAG_AUTO_SAVE_PENDING     1
#define CP_FLAG_AUTO_LOAD             ((2 * 32) + 5)
#define CP_FLAG_AUTO_LOAD_NOT_PENDING 0
#define CP_FLAG_AUTO_LOAD_PENDING     1
#define CP_FLAG_NEWCTX                ((2 * 32) + 10)
#define CP_FLAG_NEWCTX_BUSY           0
#define CP_FLAG_NEWCTX_DONE           1
#define CP_FLAG_XFER                  ((2 * 32) + 11)
#define CP_FLAG_XFER_IDLE             0
#define CP_FLAG_XFER_BUSY             1
#define CP_FLAG_ALWAYS                ((2 * 32) + 13)
#define CP_FLAG_ALWAYS_FALSE          0
#define CP_FLAG_ALWAYS_TRUE           1
#define CP_FLAG_INTR                  ((2 * 32) + 15)
#define CP_FLAG_INTR_NOT_PENDING      0
#define CP_FLAG_INTR_PENDING          1
#define CP_CTX                   0x00100000
#define CP_CTX_COUNT             0x000f0000
#define CP_CTX_COUNT_SHIFT               16
#define CP_CTX_REG               0x00003fff
#define CP_LOAD_SR               0x00200000
#define CP_LOAD_SR_VALUE         0x000fffff
#define CP_BRA                   0x00400000
#define CP_BRA_IP                0x0001ff00
#define CP_BRA_IP_SHIFT                   8
#define CP_BRA_IF_CLEAR          0x00000080
#define CP_BRA_FLAG              0x0000007f
#define CP_WAIT                  0x00500000
#define CP_WAIT_SET              0x00000080
#define CP_WAIT_FLAG             0x0000007f
#define CP_SET                   0x00700000
#define CP_SET_1                 0x00000080
#define CP_SET_FLAG              0x0000007f
#define CP_NEWCTX                0x00600004
#define CP_NEXT_TO_SWAP          0x00600005
#define CP_SET_CONTEXT_POINTER   0x00600006
#define CP_SET_XFER_POINTER      0x00600007
#define CP_ENABLE                0x00600009
#define CP_END                   0x0060000c
#define CP_NEXT_TO_CURRENT       0x0060000d
#define CP_DISABLE1              0x0090ffff
#define CP_DISABLE2              0x0091ffff
#define CP_XFER_1      0x008000ff
#define CP_XFER_2      0x008800ff
#define CP_SEEK_1      0x00c000ff
#define CP_SEEK_2      0x00c800ff
#define IS_NVA3F(x) (((x) > 0xa0 && (x) < 0xaa) || (x) == 0xaf)
#define IS_NVAAF(x) ((x) >= 0xaa && (x) <= 0xac)
enum cp_label ;
static void nv50_graph_construct_mmio(struct nouveau_grctx *ctx);
static void nv50_graph_construct_xfer1(struct nouveau_grctx *ctx);
static void nv50_graph_construct_xfer2(struct nouveau_grctx *ctx);
int
nv50_grctx_init(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_mmio_ddata(struct nouveau_grctx *ctx);
static void
nv50_graph_construct_mmio(struct nouveau_grctx *ctx)
static void
dd_emit(struct nouveau_grctx *ctx, int num, uint32_t val)
static void
nv50_graph_construct_mmio_ddata(struct nouveau_grctx *ctx)
static void
xf_emit(struct nouveau_grctx *ctx, int num, uint32_t val)
static void nv50_graph_construct_gene_dispatch(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_m2mf(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_ccache(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_unk10xx(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_unk14xx(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_zcull(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_clipid(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_unk24xx(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_vfetch(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_eng2d(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_csched(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_unk1cxx(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_strmout(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_unk34xx(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_ropm1(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_ropm2(struct nouveau_grctx *ctx);
static void nv50_graph_construct_gene_ropc(struct nouveau_grctx *ctx);
static void nv50_graph_construct_xfer_tp(struct nouveau_grctx *ctx);
static void
nv50_graph_construct_xfer1(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_dispatch(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_m2mf(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_ccache(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_unk10xx(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_unk34xx(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_unk14xx(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_zcull(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_clipid(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_unk24xx(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_vfetch(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_eng2d(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_csched(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_unk1cxx(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_strmout(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_ropm1(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_ropm2(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_gene_ropc(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_xfer_unk84xx(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_xfer_tprop(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_xfer_tex(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_xfer_unk8cxx(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_xfer_tp(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_xfer_mpc(struct nouveau_grctx *ctx)
static void
nv50_graph_construct_xfer2(struct nouveau_grctx *ctx)
