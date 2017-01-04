enum ;
enum ;
struct mlx4_eq_context ;
#define MLX4_EQ_STATUS_OK	   ( 0 << 28)
#define MLX4_EQ_STATUS_WRITE_FAIL  (10 << 28)
#define MLX4_EQ_OWNER_SW	   ( 0 << 24)
#define MLX4_EQ_OWNER_HW	   ( 1 << 24)
#define MLX4_EQ_FLAG_EC		   ( 1 << 18)
#define MLX4_EQ_FLAG_OI		   ( 1 << 17)
#define MLX4_EQ_STATE_ARMED	   ( 9 <<  8)
#define MLX4_EQ_STATE_FIRED	   (10 <<  8)
#define MLX4_EQ_STATE_ALWAYS_ARMED (11 <<  8)
#define MLX4_ASYNC_EVENT_MASK ((1ull << MLX4_EVENT_TYPE_PATH_MIG)	    | \
(1ull << MLX4_EVENT_TYPE_COMM_EST)	    | \
(1ull << MLX4_EVENT_TYPE_SQ_DRAINED)	    | \
(1ull << MLX4_EVENT_TYPE_CQ_ERROR)	    | \
(1ull << MLX4_EVENT_TYPE_WQ_CATAS_ERROR)	    | \
(1ull << MLX4_EVENT_TYPE_EEC_CATAS_ERROR)    | \
(1ull << MLX4_EVENT_TYPE_PATH_MIG_FAILED)    | \
(1ull << MLX4_EVENT_TYPE_WQ_INVAL_REQ_ERROR) | \
(1ull << MLX4_EVENT_TYPE_WQ_ACCESS_ERROR)    | \
(1ull << MLX4_EVENT_TYPE_PORT_CHANGE)	    | \
(1ull << MLX4_EVENT_TYPE_ECC_DETECT)	    | \
(1ull << MLX4_EVENT_TYPE_SRQ_CATAS_ERROR)    | \
(1ull << MLX4_EVENT_TYPE_SRQ_QP_LAST_WQE)    | \
(1ull << MLX4_EVENT_TYPE_SRQ_LIMIT)	    | \
(1ull << MLX4_EVENT_TYPE_CMD))
struct mlx4_eqe  __packed;
static void eq_set_ci(struct mlx4_eq *eq, int req_not)
static struct mlx4_eqe *get_eqe(struct mlx4_eq *eq, u32 entry)
static struct mlx4_eqe *next_eqe_sw(struct mlx4_eq *eq)
static int mlx4_eq_int(struct mlx4_dev *dev, struct mlx4_eq *eq)
static irqreturn_t mlx4_interrupt(int irq, void *dev_ptr)
static irqreturn_t mlx4_msi_x_interrupt(int irq, void *eq_ptr)
static int mlx4_MAP_EQ(struct mlx4_dev *dev, u64 event_mask, int unmap,
int eq_num)
static int mlx4_SW2HW_EQ(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int eq_num)
static int mlx4_HW2SW_EQ(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int eq_num)
static int mlx4_num_eq_uar(struct mlx4_dev *dev)
static void __iomem *mlx4_get_eq_uar(struct mlx4_dev *dev, struct mlx4_eq *eq)
static int mlx4_create_eq(struct mlx4_dev *dev, int nent,
u8 intr, struct mlx4_eq *eq)
static void mlx4_free_eq(struct mlx4_dev *dev,
struct mlx4_eq *eq)
static void mlx4_free_irqs(struct mlx4_dev *dev)
static int mlx4_map_clr_int(struct mlx4_dev *dev)
static void mlx4_unmap_clr_int(struct mlx4_dev *dev)
int mlx4_alloc_eq_table(struct mlx4_dev *dev)
void mlx4_free_eq_table(struct mlx4_dev *dev)
int mlx4_init_eq_table(struct mlx4_dev *dev)
void mlx4_cleanup_eq_table(struct mlx4_dev *dev)
int mlx4_test_interrupts(struct mlx4_dev *dev)
EXPORT_SYMBOL(mlx4_test_interrupts);
int mlx4_assign_eq(struct mlx4_dev *dev, char* name, int * vector)
EXPORT_SYMBOL(mlx4_assign_eq);
void mlx4_release_eq(struct mlx4_dev *dev, int vec)
EXPORT_SYMBOL(mlx4_release_eq);
