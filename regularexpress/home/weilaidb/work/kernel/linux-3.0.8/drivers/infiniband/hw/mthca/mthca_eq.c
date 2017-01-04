enum ;
struct mthca_eq_context  __attribute__((packed));
#define MTHCA_EQ_STATUS_OK          ( 0 << 28)
#define MTHCA_EQ_STATUS_OVERFLOW    ( 9 << 28)
#define MTHCA_EQ_STATUS_WRITE_FAIL  (10 << 28)
#define MTHCA_EQ_OWNER_SW           ( 0 << 24)
#define MTHCA_EQ_OWNER_HW           ( 1 << 24)
#define MTHCA_EQ_FLAG_TR            ( 1 << 18)
#define MTHCA_EQ_FLAG_OI            ( 1 << 17)
#define MTHCA_EQ_STATE_ARMED        ( 1 <<  8)
#define MTHCA_EQ_STATE_FIRED        ( 2 <<  8)
#define MTHCA_EQ_STATE_ALWAYS_ARMED ( 3 <<  8)
#define MTHCA_EQ_STATE_ARBEL        ( 8 <<  8)
enum ;
#define MTHCA_ASYNC_EVENT_MASK ((1ULL << MTHCA_EVENT_TYPE_PATH_MIG)           | \
(1ULL << MTHCA_EVENT_TYPE_COMM_EST)           | \
(1ULL << MTHCA_EVENT_TYPE_SQ_DRAINED)         | \
(1ULL << MTHCA_EVENT_TYPE_CQ_ERROR)           | \
(1ULL << MTHCA_EVENT_TYPE_WQ_CATAS_ERROR)     | \
(1ULL << MTHCA_EVENT_TYPE_EEC_CATAS_ERROR)    | \
(1ULL << MTHCA_EVENT_TYPE_PATH_MIG_FAILED)    | \
(1ULL << MTHCA_EVENT_TYPE_WQ_INVAL_REQ_ERROR) | \
(1ULL << MTHCA_EVENT_TYPE_WQ_ACCESS_ERROR)    | \
(1ULL << MTHCA_EVENT_TYPE_LOCAL_CATAS_ERROR)  | \
(1ULL << MTHCA_EVENT_TYPE_PORT_CHANGE)        | \
(1ULL << MTHCA_EVENT_TYPE_ECC_DETECT))
#define MTHCA_SRQ_EVENT_MASK   ((1ULL << MTHCA_EVENT_TYPE_SRQ_CATAS_ERROR)    | \
(1ULL << MTHCA_EVENT_TYPE_SRQ_QP_LAST_WQE)    | \
(1ULL << MTHCA_EVENT_TYPE_SRQ_LIMIT))
#define MTHCA_CMD_EVENT_MASK    (1ULL << MTHCA_EVENT_TYPE_CMD)
#define MTHCA_EQ_DB_INC_CI     (1 << 24)
#define MTHCA_EQ_DB_REQ_NOT    (2 << 24)
#define MTHCA_EQ_DB_DISARM_CQ  (3 << 24)
#define MTHCA_EQ_DB_SET_CI     (4 << 24)
#define MTHCA_EQ_DB_ALWAYS_ARM (5 << 24)
struct mthca_eqe  __attribute__((packed));
#define  MTHCA_EQ_ENTRY_OWNER_SW      (0 << 7)
#define  MTHCA_EQ_ENTRY_OWNER_HW      (1 << 7)
static inline u64 async_mask(struct mthca_dev *dev)
static inline void tavor_set_eq_ci(struct mthca_dev *dev, struct mthca_eq *eq, u32 ci)
static inline void arbel_set_eq_ci(struct mthca_dev *dev, struct mthca_eq *eq, u32 ci)
static inline void set_eq_ci(struct mthca_dev *dev, struct mthca_eq *eq, u32 ci)
static inline void tavor_eq_req_not(struct mthca_dev *dev, int eqn)
static inline void arbel_eq_req_not(struct mthca_dev *dev, u32 eqn_mask)
static inline void disarm_cq(struct mthca_dev *dev, int eqn, int cqn)
static inline struct mthca_eqe *get_eqe(struct mthca_eq *eq, u32 entry)
static inline struct mthca_eqe *next_eqe_sw(struct mthca_eq *eq)
static inline void set_eqe_hw(struct mthca_eqe *eqe)
static void port_change(struct mthca_dev *dev, int port, int active)
static int mthca_eq_int(struct mthca_dev *dev, struct mthca_eq *eq)
static irqreturn_t mthca_tavor_interrupt(int irq, void *dev_ptr)
static irqreturn_t mthca_tavor_msi_x_interrupt(int irq, void *eq_ptr)
static irqreturn_t mthca_arbel_interrupt(int irq, void *dev_ptr)
static irqreturn_t mthca_arbel_msi_x_interrupt(int irq, void *eq_ptr)
static int mthca_create_eq(struct mthca_dev *dev,
int nent,
u8 intr,
struct mthca_eq *eq)
static void mthca_free_eq(struct mthca_dev *dev,
struct mthca_eq *eq)
static void mthca_free_irqs(struct mthca_dev *dev)
static int mthca_map_reg(struct mthca_dev *dev,
unsigned long offset, unsigned long size,
void __iomem **map)
static int mthca_map_eq_regs(struct mthca_dev *dev)
static void mthca_unmap_eq_regs(struct mthca_dev *dev)
int mthca_map_eq_icm(struct mthca_dev *dev, u64 icm_virt)
void mthca_unmap_eq_icm(struct mthca_dev *dev)
int mthca_init_eq_table(struct mthca_dev *dev)
void mthca_cleanup_eq_table(struct mthca_dev *dev)
