#define _ALTERA_H_
struct altera_config ;
#if defined(CONFIG_ALTERA_STAPL) || \
(defined(CONFIG_ALTERA_STAPL_MODULE) && defined(MODULE))
extern int altera_init(struct altera_config *config, const struct firmware *fw);
static inline int altera_init(struct altera_config *config,
const struct firmware *fw)
