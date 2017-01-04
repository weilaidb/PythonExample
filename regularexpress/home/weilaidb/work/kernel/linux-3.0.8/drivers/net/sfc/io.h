#define EFX_IO_H
#if BITS_PER_LONG == 64
#define EFX_USE_QWORD_IO 1
static inline void _efx_writeq(struct efx_nic *efx, __le64 value,
unsigned int reg)
static inline __le64 _efx_readq(struct efx_nic *efx, unsigned int reg)
static inline void _efx_writed(struct efx_nic *efx, __le32 value,
unsigned int reg)
static inline __le32 _efx_readd(struct efx_nic *efx, unsigned int reg)
static inline void efx_writeo(struct efx_nic *efx, efx_oword_t *value,
unsigned int reg)
static inline void efx_sram_writeq(struct efx_nic *efx, void __iomem *membase,
efx_qword_t *value, unsigned int index)
static inline void efx_writed(struct efx_nic *efx, efx_dword_t *value,
unsigned int reg)
static inline void efx_reado(struct efx_nic *efx, efx_oword_t *value,
unsigned int reg)
static inline void efx_sram_readq(struct efx_nic *efx, void __iomem *membase,
efx_qword_t *value, unsigned int index)
static inline void efx_readd(struct efx_nic *efx, efx_dword_t *value,
unsigned int reg)
static inline void efx_writeo_table(struct efx_nic *efx, efx_oword_t *value,
unsigned int reg, unsigned int index)
static inline void efx_reado_table(struct efx_nic *efx, efx_oword_t *value,
unsigned int reg, unsigned int index)
static inline void efx_writed_table(struct efx_nic *efx, efx_dword_t *value,
unsigned int reg, unsigned int index)
static inline void efx_readd_table(struct efx_nic *efx, efx_dword_t *value,
unsigned int reg, unsigned int index)
#define EFX_PAGE_BLOCK_SIZE 0x2000
#define EFX_PAGED_REG(page, reg) \
((page) * EFX_PAGE_BLOCK_SIZE + (reg))
static inline void _efx_writeo_page(struct efx_nic *efx, efx_oword_t *value,
unsigned int reg, unsigned int page)
#define efx_writeo_page(efx, value, reg, page)				\
_efx_writeo_page(efx, value,					\
reg +						\
BUILD_BUG_ON_ZERO((reg) != 0x830 && (reg) != 0xa10), \
page)
static inline void _efx_writed_page(struct efx_nic *efx, efx_dword_t *value,
unsigned int reg, unsigned int page)
#define efx_writed_page(efx, value, reg, page)				\
_efx_writed_page(efx, value,					\
reg +						\
BUILD_BUG_ON_ZERO((reg) != 0x400 && (reg) != 0x83c \
&& (reg) != 0xa1c),		\
page)
static inline void _efx_writed_page_locked(struct efx_nic *efx,
efx_dword_t *value,
unsigned int reg,
unsigned int page)
#define efx_writed_page_locked(efx, value, reg, page)			\
_efx_writed_page_locked(efx, value,				\
reg + BUILD_BUG_ON_ZERO((reg) != 0x420), \
page)
