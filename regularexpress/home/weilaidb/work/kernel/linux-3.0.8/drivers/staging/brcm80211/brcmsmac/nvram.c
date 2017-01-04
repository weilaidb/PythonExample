#define NVR_MSG(x)
typedef struct _vars  vars_t;
#define	VARS_T_OH	sizeof(vars_t)
static vars_t *vars;
#define NVRAM_FILE	1
static char *findvar(char *vars, char *lim, const char *name);
int nvram_init(void)
int nvram_append(char *varlst, uint varsz)
void nvram_exit(void)
static char *findvar(char *vars, char *lim, const char *name)
char *getvar(char *vars, const char *name)
int getintvar(char *vars, const char *name)
char *nvram_get(const char *name)
int nvram_set(const char *name, const char *value)
int nvram_unset(const char *name)
int nvram_reset(void)
int nvram_commit(void)
int nvram_getall(char *buf, int count)
