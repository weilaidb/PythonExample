#define XHI_MAX_BUFFER_BYTES        2048
#define XHI_MAX_BUFFER_INTS         (XHI_MAX_BUFFER_BYTES >> 2)
#define XHI_DEVICE_READ_ERROR       -1
#define XHI_DEVICE_WRITE_ERROR      -2
#define XHI_BUFFER_OVERFLOW_ERROR   -3
#define XHI_DEVICE_READ             0x1
#define XHI_DEVICE_WRITE            0x0
#define XHI_CYCLE_DONE              0
#define XHI_CYCLE_EXECUTING         1
#define XHI_SIZE_REG_OFFSET        0x800L
#define XHI_BRAM_OFFSET_REG_OFFSET 0x804L
#define XHI_RNC_REG_OFFSET         0x808L
#define XHI_STATUS_REG_OFFSET      0x80CL
#define XHI_CONFIGURE              0x0UL
#define XHI_READBACK               0x1UL
#define XHI_NOT_FINISHED           0x0UL
#define XHI_FINISHED               0x1UL
#define XHI_BUFFER_START 0
u32 buffer_icap_get_status(struct hwicap_drvdata *drvdata)
static inline u32 buffer_icap_get_bram(void __iomem *base_address,
u32 offset)
static inline bool buffer_icap_busy(void __iomem *base_address)
static inline void buffer_icap_set_size(void __iomem *base_address,
u32 data)
static inline void buffer_icap_set_offset(void __iomem *base_address,
u32 data)
static inline void buffer_icap_set_rnc(void __iomem *base_address,
u32 data)
static inline void buffer_icap_set_bram(void __iomem *base_address,
u32 offset, u32 data)
static int buffer_icap_device_read(struct hwicap_drvdata *drvdata,
u32 offset, u32 count)
;
static int buffer_icap_device_write(struct hwicap_drvdata *drvdata,
u32 offset, u32 count)
;
void buffer_icap_reset(struct hwicap_drvdata *drvdata)
int buffer_icap_set_configuration(struct hwicap_drvdata *drvdata, u32 *data,
u32 size)
;
int buffer_icap_get_configuration(struct hwicap_drvdata *drvdata, u32 *data,
u32 size)
;
