#define _bcmnvram_h_
struct nvram_header ;
extern int nvram_init(void);
extern int nvram_append(char *vars, uint varsz);
extern int nvram_reset(void);
extern void nvram_exit(void);
extern char *nvram_get(const char *name);
#define nvram_safe_get(name) (nvram_get(name) ? : "")
static inline int nvram_match(char *name, char *match)
static inline int nvram_invmatch(char *name, char *invmatch)
extern int nvram_set(const char *name, const char *value);
extern int nvram_unset(const char *name);
extern int nvram_commit(void);
extern int nvram_getall(char *nvram_buf, int count);
extern char *getvar(char *vars, const char *name);
extern int getintvar(char *vars, const char *name);
#define NVRAM_SOFTWARE_VERSION	"1"
#define NVRAM_MAGIC		0x48534C46
#define NVRAM_CLEAR_MAGIC	0x0
#define NVRAM_INVALID_MAGIC	0xFFFFFFFF
#define NVRAM_VERSION		1
#define NVRAM_HEADER_SIZE	20
#define NVRAM_SPACE		0x8000
#define NVRAM_MAX_VALUE_LEN 255
#define NVRAM_MAX_PARAM_LEN 64
#define NVRAM_CRC_START_POSITION	9
#define NVRAM_CRC_VER_MASK	0xffffff00
