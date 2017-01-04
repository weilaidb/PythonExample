struct mthca_mtt ;
struct mthca_mpt_entry  __attribute__((packed));
#define MTHCA_MPT_FLAG_SW_OWNS       (0xfUL << 28)
#define MTHCA_MPT_FLAG_MIO           (1 << 17)
#define MTHCA_MPT_FLAG_BIND_ENABLE   (1 << 15)
#define MTHCA_MPT_FLAG_PHYSICAL      (1 <<  9)
#define MTHCA_MPT_FLAG_REGION        (1 <<  8)
#define MTHCA_MTT_FLAG_PRESENT       1
#define MTHCA_MPT_STATUS_SW 0xF0
#define MTHCA_MPT_STATUS_HW 0x00
#define SINAI_FMR_KEY_INC 0x1000000
static u32 mthca_buddy_alloc(struct mthca_buddy *buddy, int order)
static void mthca_buddy_free(struct mthca_buddy *buddy, u32 seg, int order)
static int mthca_buddy_init(struct mthca_buddy *buddy, int max_order)
static void mthca_buddy_cleanup(struct mthca_buddy *buddy)
static u32 mthca_alloc_mtt_range(struct mthca_dev *dev, int order,
struct mthca_buddy *buddy)
static struct mthca_mtt *__mthca_alloc_mtt(struct mthca_dev *dev, int size,
struct mthca_buddy *buddy)
struct mthca_mtt *mthca_alloc_mtt(struct mthca_dev *dev, int size)
void mthca_free_mtt(struct mthca_dev *dev, struct mthca_mtt *mtt)
static int __mthca_write_mtt(struct mthca_dev *dev, struct mthca_mtt *mtt,
int start_index, u64 *buffer_list, int list_len)
int mthca_write_mtt_size(struct mthca_dev *dev)
static void mthca_tavor_write_mtt_seg(struct mthca_dev *dev,
struct mthca_mtt *mtt, int start_index,
u64 *buffer_list, int list_len)
static void mthca_arbel_write_mtt_seg(struct mthca_dev *dev,
struct mthca_mtt *mtt, int start_index,
u64 *buffer_list, int list_len)
int mthca_write_mtt(struct mthca_dev *dev, struct mthca_mtt *mtt,
int start_index, u64 *buffer_list, int list_len)
static inline u32 tavor_hw_index_to_key(u32 ind)
static inline u32 tavor_key_to_hw_index(u32 key)
static inline u32 arbel_hw_index_to_key(u32 ind)
static inline u32 arbel_key_to_hw_index(u32 key)
static inline u32 hw_index_to_key(struct mthca_dev *dev, u32 ind)
static inline u32 key_to_hw_index(struct mthca_dev *dev, u32 key)
static inline u32 adjust_key(struct mthca_dev *dev, u32 key)
int mthca_mr_alloc(struct mthca_dev *dev, u32 pd, int buffer_size_shift,
u64 iova, u64 total_size, u32 access, struct mthca_mr *mr)
int mthca_mr_alloc_notrans(struct mthca_dev *dev, u32 pd,
u32 access, struct mthca_mr *mr)
int mthca_mr_alloc_phys(struct mthca_dev *dev, u32 pd,
u64 *buffer_list, int buffer_size_shift,
int list_len, u64 iova, u64 total_size,
u32 access, struct mthca_mr *mr)
static void mthca_free_region(struct mthca_dev *dev, u32 lkey)
void mthca_free_mr(struct mthca_dev *dev, struct mthca_mr *mr)
int mthca_fmr_alloc(struct mthca_dev *dev, u32 pd,
u32 access, struct mthca_fmr *mr)
int mthca_free_fmr(struct mthca_dev *dev, struct mthca_fmr *fmr)
static inline int mthca_check_fmr(struct mthca_fmr *fmr, u64 *page_list,
int list_len, u64 iova)
int mthca_tavor_map_phys_fmr(struct ib_fmr *ibfmr, u64 *page_list,
int list_len, u64 iova)
int mthca_arbel_map_phys_fmr(struct ib_fmr *ibfmr, u64 *page_list,
int list_len, u64 iova)
void mthca_tavor_fmr_unmap(struct mthca_dev *dev, struct mthca_fmr *fmr)
void mthca_arbel_fmr_unmap(struct mthca_dev *dev, struct mthca_fmr *fmr)
int mthca_init_mr_table(struct mthca_dev *dev)
void mthca_cleanup_mr_table(struct mthca_dev *dev)
