#define __NVRAM_H
struct nvram_header ;
#define NVRAM_HEADER		0x48534C46
#define NVRAM_VERSION		1
#define NVRAM_HEADER_SIZE	20
#define NVRAM_SPACE		0x8000
#define FLASH_MIN		0x00020000
#define NVRAM_MAX_VALUE_LEN 255
#define NVRAM_MAX_PARAM_LEN 64
#define NVRAM_ERR_INV_PARAM	-8
#define NVRAM_ERR_ENVNOTFOUND	-9
extern int nvram_getenv(char *name, char *val, size_t val_len);
static inline void nvram_parse_macaddr(char *buf, u8 *macaddr)
