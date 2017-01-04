#define __LINUX_IHEX_H__
struct ihex_binrec  __attribute__((packed));
static inline const struct ihex_binrec *
ihex_next_binrec(const struct ihex_binrec *rec)
static inline int ihex_validate_fw(const struct firmware *fw)
static inline int request_ihex_firmware(const struct firmware **fw,
const char *fw_name,
struct device *dev)
