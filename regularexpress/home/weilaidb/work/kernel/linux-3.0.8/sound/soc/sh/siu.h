#define SIU_H
#define YRAM0_SIZE		(0x0040 / 4)
#define YRAM1_SIZE		(0x0080 / 4)
#define YRAM2_SIZE		(0x0040 / 4)
#define YRAM3_SIZE		(0x0080 / 4)
#define YRAM4_SIZE		(0x0080 / 4)
#define YRAM_DEF_SIZE		(YRAM0_SIZE + YRAM1_SIZE + YRAM2_SIZE + \
YRAM3_SIZE + YRAM4_SIZE)
#define YRAM_FIR_SIZE		(0x0400 / 4)
#define YRAM_IIR_SIZE		(0x0200 / 4)
#define XRAM0_SIZE		(0x0400 / 4)
#define XRAM1_SIZE		(0x0200 / 4)
#define XRAM2_SIZE		(0x0200 / 4)
#define PRAM0_SIZE		(0x0100 / 4)
#define PRAM1_SIZE		((0x2000 - 0x0100) / 4)
struct siu_spb_param ;
struct siu_firmware ;
#define SIU_PERIOD_BYTES_MAX	8192
#define SIU_PERIOD_BYTES_MIN	256
#define SIU_PERIODS_MAX		64
#define SIU_PERIODS_MIN		4
#define SIU_BUFFER_BYTES_MAX	(SIU_PERIOD_BYTES_MAX * SIU_PERIODS_MAX)
enum ;
enum ;
struct device;
struct siu_info ;
struct siu_stream ;
struct siu_port ;
extern struct siu_port *siu_ports[SIU_PORT_NUM];
static inline struct siu_port *siu_port_info(struct snd_pcm_substream *substream)
static inline void siu_write32(u32 __iomem *addr, u32 val)
static inline u32 siu_read32(u32 __iomem *addr)
#define SIU_IFCTL	(0x000 / sizeof(u32))
#define SIU_SRCTL	(0x004 / sizeof(u32))
#define SIU_SFORM	(0x008 / sizeof(u32))
#define SIU_CKCTL	(0x00c / sizeof(u32))
#define SIU_TRDAT	(0x010 / sizeof(u32))
#define SIU_STFIFO	(0x014 / sizeof(u32))
#define SIU_DPAK	(0x01c / sizeof(u32))
#define SIU_CKREV	(0x020 / sizeof(u32))
#define SIU_EVNTC	(0x028 / sizeof(u32))
#define SIU_SBCTL	(0x040 / sizeof(u32))
#define SIU_SBPSET	(0x044 / sizeof(u32))
#define SIU_SBFSTS	(0x068 / sizeof(u32))
#define SIU_SBDVCA	(0x06c / sizeof(u32))
#define SIU_SBDVCB	(0x070 / sizeof(u32))
#define SIU_SBACTIV	(0x074 / sizeof(u32))
#define SIU_DMAIA	(0x090 / sizeof(u32))
#define SIU_DMAIB	(0x094 / sizeof(u32))
#define SIU_DMAOA	(0x098 / sizeof(u32))
#define SIU_DMAOB	(0x09c / sizeof(u32))
#define SIU_DMAML	(0x0a0 / sizeof(u32))
#define SIU_SPSTS	(0x0cc / sizeof(u32))
#define SIU_SPCTL	(0x0d0 / sizeof(u32))
#define SIU_BRGASEL	(0x100 / sizeof(u32))
#define SIU_BRRA	(0x104 / sizeof(u32))
#define SIU_BRGBSEL	(0x108 / sizeof(u32))
#define SIU_BRRB	(0x10c / sizeof(u32))
extern struct snd_soc_platform_driver siu_platform;
extern struct siu_info *siu_i2s_data;
int siu_init_port(int port, struct siu_port **port_info, struct snd_card *card);
void siu_free_port(struct siu_port *port_info);
