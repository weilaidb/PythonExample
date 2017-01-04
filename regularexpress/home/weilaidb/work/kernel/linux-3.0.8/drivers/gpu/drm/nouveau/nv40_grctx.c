#define CP_FLAG_CLEAR                 0
#define CP_FLAG_SET                   1
#define CP_FLAG_SWAP_DIRECTION        ((0 * 32) + 0)
#define CP_FLAG_SWAP_DIRECTION_LOAD   0
#define CP_FLAG_SWAP_DIRECTION_SAVE   1
#define CP_FLAG_USER_SAVE             ((0 * 32) + 5)
#define CP_FLAG_USER_SAVE_NOT_PENDING 0
#define CP_FLAG_USER_SAVE_PENDING     1
#define CP_FLAG_USER_LOAD             ((0 * 32) + 6)
#define CP_FLAG_USER_LOAD_NOT_PENDING 0
#define CP_FLAG_USER_LOAD_PENDING     1
#define CP_FLAG_STATUS                ((3 * 32) + 0)
#define CP_FLAG_STATUS_IDLE           0
#define CP_FLAG_STATUS_BUSY           1
#define CP_FLAG_AUTO_SAVE             ((3 * 32) + 4)
#define CP_FLAG_AUTO_SAVE_NOT_PENDING 0
#define CP_FLAG_AUTO_SAVE_PENDING     1
#define CP_FLAG_AUTO_LOAD             ((3 * 32) + 5)
#define CP_FLAG_AUTO_LOAD_NOT_PENDING 0
#define CP_FLAG_AUTO_LOAD_PENDING     1
#define CP_FLAG_UNK54                 ((3 * 32) + 6)
#define CP_FLAG_UNK54_CLEAR           0
#define CP_FLAG_UNK54_SET             1
#define CP_FLAG_ALWAYS                ((3 * 32) + 8)
#define CP_FLAG_ALWAYS_FALSE          0
#define CP_FLAG_ALWAYS_TRUE           1
#define CP_FLAG_UNK57                 ((3 * 32) + 9)
#define CP_FLAG_UNK57_CLEAR           0
#define CP_FLAG_UNK57_SET             1
#define CP_CTX                   0x00100000
#define CP_CTX_COUNT             0x000fc000
#define CP_CTX_COUNT_SHIFT               14
#define CP_CTX_REG               0x00003fff
#define CP_LOAD_SR               0x00200000
#define CP_LOAD_SR_VALUE         0x000fffff
#define CP_BRA                   0x00400000
#define CP_BRA_IP                0x0000ff00
#define CP_BRA_IP_SHIFT                   8
#define CP_BRA_IF_CLEAR          0x00000080
#define CP_BRA_FLAG              0x0000007f
#define CP_WAIT                  0x00500000
#define CP_WAIT_SET              0x00000080
#define CP_WAIT_FLAG             0x0000007f
#define CP_SET                   0x00700000
#define CP_SET_1                 0x00000080
#define CP_SET_FLAG              0x0000007f
#define CP_NEXT_TO_SWAP          0x00600007
#define CP_NEXT_TO_CURRENT       0x00600009
#define CP_SET_CONTEXT_POINTER   0x0060000a
#define CP_END                   0x0060000e
#define CP_LOAD_MAGIC_UNK01      0x00800001
#define CP_LOAD_MAGIC_NV44TCL    0x00800029
#define CP_LOAD_MAGIC_NV40TCL    0x00800041
static int
nv40_graph_vs_count(struct drm_device *dev)
enum cp_label ;
static void
nv40_graph_construct_general(struct nouveau_grctx *ctx)
static void
nv40_graph_construct_state3d(struct nouveau_grctx *ctx)
static void
nv40_graph_construct_state3d_2(struct nouveau_grctx *ctx)
static void
nv40_graph_construct_state3d_3(struct nouveau_grctx *ctx)
static void
nv40_graph_construct_shader(struct nouveau_grctx *ctx)
void
nv40_grctx_init(struct nouveau_grctx *ctx)
