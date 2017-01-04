#define MTHCA_WQE_H
enum ;
enum ;
struct mthca_next_seg ;
struct mthca_tavor_ud_seg ;
struct mthca_arbel_ud_seg ;
struct mthca_bind_seg ;
struct mthca_raddr_seg ;
struct mthca_atomic_seg ;
struct mthca_data_seg ;
struct mthca_mlx_seg ;
static __always_inline void mthca_set_data_seg(struct mthca_data_seg *dseg,
struct ib_sge *sg)
static __always_inline void mthca_set_data_seg_inval(struct mthca_data_seg *dseg)
