#define W83977AF_H
#define W977_EFIO_BASE 0x370
#define W977_EFIO2_BASE 0x3f0
#define W977_DEVICE_IR 0x06
static inline void w977_efm_enter(unsigned int efio)
static inline void w977_select_device(__u8 devnum, unsigned int efio)
static inline void w977_write_reg(__u8 reg, __u8 value, unsigned int efio)
static inline __u8 w977_read_reg(__u8 reg, unsigned int efio)
static inline void w977_efm_exit(unsigned int efio)
