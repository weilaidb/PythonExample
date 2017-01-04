#if !defined(_SPU_PRIV1_H)
#define _SPU_PRIV1_H
#if defined(__KERNEL__)
struct spu;
struct spu_context;
struct spu_priv1_ops ;
extern const struct spu_priv1_ops* spu_priv1_ops;
static inline void
spu_int_mask_and (struct spu *spu, int class, u64 mask)
static inline void
spu_int_mask_or (struct spu *spu, int class, u64 mask)
static inline void
spu_int_mask_set (struct spu *spu, int class, u64 mask)
static inline u64
spu_int_mask_get (struct spu *spu, int class)
static inline void
spu_int_stat_clear (struct spu *spu, int class, u64 stat)
static inline u64
spu_int_stat_get (struct spu *spu, int class)
static inline void
spu_cpu_affinity_set (struct spu *spu, int cpu)
static inline u64
spu_mfc_dar_get (struct spu *spu)
static inline u64
spu_mfc_dsisr_get (struct spu *spu)
static inline void
spu_mfc_dsisr_set (struct spu *spu, u64 dsisr)
static inline void
spu_mfc_sdr_setup (struct spu *spu)
static inline void
spu_mfc_sr1_set (struct spu *spu, u64 sr1)
static inline u64
spu_mfc_sr1_get (struct spu *spu)
static inline void
spu_mfc_tclass_id_set (struct spu *spu, u64 tclass_id)
static inline u64
spu_mfc_tclass_id_get (struct spu *spu)
static inline void
spu_tlb_invalidate (struct spu *spu)
static inline void
spu_resource_allocation_groupID_set (struct spu *spu, u64 id)
static inline u64
spu_resource_allocation_groupID_get (struct spu *spu)
static inline void
spu_resource_allocation_enable_set (struct spu *spu, u64 enable)
static inline u64
spu_resource_allocation_enable_get (struct spu *spu)
struct spu_management_ops ;
extern const struct spu_management_ops* spu_management_ops;
static inline int
spu_enumerate_spus (int (*fn)(void *data))
static inline int
spu_create_spu (struct spu *spu, void *data)
static inline int
spu_destroy_spu (struct spu *spu)
static inline int
spu_init_affinity (void)
static inline void
spu_enable_spu (struct spu_context *ctx)
static inline void
spu_disable_spu (struct spu_context *ctx)
extern const struct spu_priv1_ops spu_priv1_mmio_ops;
extern const struct spu_priv1_ops spu_priv1_beat_ops;
extern const struct spu_management_ops spu_management_of_ops;
