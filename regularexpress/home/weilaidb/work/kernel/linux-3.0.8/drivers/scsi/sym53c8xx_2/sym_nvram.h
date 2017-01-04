#define SYM_NVRAM_H
#define SYMBIOS_NVRAM_SIZE 368
#define SYMBIOS_NVRAM_ADDRESS 0x100
struct Symbios_nvram ;
typedef struct Symbios_nvram	Symbios_nvram;
typedef struct Symbios_host	Symbios_host;
typedef struct Symbios_target	Symbios_target;
typedef struct Symbios_scam	Symbios_scam;
#define TEKRAM_NVRAM_SIZE 64
#define TEKRAM_93C46_NVRAM_ADDRESS 0
#define TEKRAM_24C16_NVRAM_ADDRESS 0x40
struct Tekram_nvram ;
typedef struct Tekram_nvram	Tekram_nvram;
typedef struct Tekram_target	Tekram_target;
struct pdc_initiator ;
struct sym_nvram ;
#if SYM_CONF_NVRAM_SUPPORT
void sym_nvram_setup_host(struct Scsi_Host *shost, struct sym_hcb *np, struct sym_nvram *nvram);
void sym_nvram_setup_target (struct sym_tcb *tp, int target, struct sym_nvram *nvp);
int sym_read_nvram (struct sym_device *np, struct sym_nvram *nvp);
char *sym_nvram_type(struct sym_nvram *nvp);
static inline void sym_nvram_setup_host(struct Scsi_Host *shost, struct sym_hcb *np, struct sym_nvram *nvram)
static inline void sym_nvram_setup_target(struct sym_tcb *tp, struct sym_nvram *nvram)
static inline int sym_read_nvram(struct sym_device *np, struct sym_nvram *nvp)
static inline char *sym_nvram_type(struct sym_nvram *nvp)
