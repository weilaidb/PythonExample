#define _SPARC_MSI_H
#define MSI_MBUS_ARBEN	0xe0001008
#define MSI_ASYNC_MODE  0x80000000
static inline void msi_set_sync(void)
