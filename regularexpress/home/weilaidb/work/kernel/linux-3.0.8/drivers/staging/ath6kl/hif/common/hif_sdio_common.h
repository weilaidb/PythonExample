#define HIF_SDIO_COMMON_H_
#define MANUFACTURER_ID_AR6002_BASE        0x200
#define MANUFACTURER_ID_AR6003_BASE        0x300
#define MANUFACTURER_ID_AR6K_BASE_MASK     0xFF00
#define FUNCTION_CLASS                     0x0
#define MANUFACTURER_CODE                  0x271
#define HIF_MBOX_BASE_ADDR                 0x800
#define HIF_MBOX_WIDTH                     0x800
#define HIF_MBOX_START_ADDR(mbox)               \
( HIF_MBOX_BASE_ADDR + mbox * HIF_MBOX_WIDTH)
#define HIF_MBOX_END_ADDR(mbox)                 \
(HIF_MBOX_START_ADDR(mbox) + HIF_MBOX_WIDTH - 1)
#define HIF_MBOX0_EXTENDED_BASE_ADDR       0x2800
#define HIF_MBOX0_EXTENDED_WIDTH_AR6002    (6*1024)
#define HIF_MBOX0_EXTENDED_WIDTH_AR6003    (18*1024)
#define HIF_MBOX0_EXTENDED_BASE_ADDR_AR6003_V1  0x4000
#define HIF_MBOX0_EXTENDED_WIDTH_AR6003_V1      (12*1024)
#define HIF_GMBOX_BASE_ADDR                0x7000
#define HIF_GMBOX_WIDTH                    0x4000
#define HIF_DEFAULT_IO_BLOCK_SIZE          128
static INLINE void SetExtendedMboxWindowInfo(u16 Manfid, struct hif_device_mbox_info *pInfo)
#define CCCR_SDIO_IRQ_MODE_REG         0xF0
#define SDIO_IRQ_MODE_ASYNC_4BIT_IRQ   (1 << 0)
