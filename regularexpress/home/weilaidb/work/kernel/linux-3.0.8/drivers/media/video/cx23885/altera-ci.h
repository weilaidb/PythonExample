#define __ALTERA_CI_H
#define ALT_DATA	0x000000ff
#define ALT_TDI		0x00008000
#define ALT_TDO		0x00004000
#define ALT_TCK		0x00002000
#define ALT_RDY		0x00001000
#define ALT_RD		0x00000800
#define ALT_WR		0x00000400
#define ALT_AD_RG	0x00000200
#define ALT_CS		0x00000100
struct altera_ci_config ;
#if defined(CONFIG_MEDIA_ALTERA_CI) || (defined(CONFIG_MEDIA_ALTERA_CI_MODULE) \
&& defined(MODULE))
extern int altera_ci_init(struct altera_ci_config *config, int ci_nr);
extern void altera_ci_release(void *dev, int ci_nr);
extern int altera_ci_irq(void *dev);
extern int altera_ci_tuner_reset(void *dev, int ci_nr);
static inline int altera_ci_init(struct altera_ci_config *config, int ci_nr)
static inline void altera_ci_release(void *dev, int ci_nr)
static inline int altera_ci_irq(void *dev)
static inline int altera_ci_tuner_reset(void *dev, int ci_nr)
