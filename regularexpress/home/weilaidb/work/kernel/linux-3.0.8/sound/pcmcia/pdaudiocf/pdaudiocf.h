#define __PDAUDIOCF_H
#define PDAUDIOCF_REG_MD	0x00
#define PDAUDIOCF_REG_WDP	0x02
#define PDAUDIOCF_REG_RDP	0x04
#define PDAUDIOCF_REG_TCR	0x06
#define PDAUDIOCF_REG_SCR	0x08
#define PDAUDIOCF_REG_ISR	0x0a
#define PDAUDIOCF_REG_IER	0x0c
#define PDAUDIOCF_REG_AK_IFR	0x0e
#define PDAUDIOCF_ELIMAKMBIT	(1<<0)
#define PDAUDIOCF_TESTDATASEL	(1<<1)
#define PDAUDIOCF_AK_SBP	(1<<0)
#define PDAUDIOCF_RST		(1<<2)
#define PDAUDIOCF_PDN		(1<<3)
#define PDAUDIOCF_CLKDIV0	(1<<4)
#define PDAUDIOCF_CLKDIV1	(1<<5)
#define PDAUDIOCF_RECORD	(1<<6)
#define PDAUDIOCF_AK_SDD	(1<<7)
#define PDAUDIOCF_RED_LED_OFF	(1<<8)
#define PDAUDIOCF_BLUE_LED_OFF	(1<<9)
#define PDAUDIOCF_DATAFMT0	(1<<10)
#define PDAUDIOCF_DATAFMT1	(1<<11)
#define PDAUDIOCF_FPGAREV(x)	((x>>12)&0x0f)
#define PDAUDIOCF_IRQLVL	(1<<0)
#define PDAUDIOCF_IRQOVR	(1<<1)
#define PDAUDIOCF_IRQAKM	(1<<2)
#define PDAUDIOCF_IRQLVLEN0	(1<<0)
#define PDAUDIOCF_IRQLVLEN1	(1<<1)
#define PDAUDIOCF_IRQOVREN	(1<<2)
#define PDAUDIOCF_IRQAKMEN	(1<<3)
#define PDAUDIOCF_BLUEDUTY0	(1<<8)
#define PDAUDIOCF_BLUEDUTY1	(1<<9)
#define PDAUDIOCF_REDDUTY0	(1<<10)
#define PDAUDIOCF_REDDUTY1	(1<<11)
#define PDAUDIOCF_BLUESDD	(1<<12)
#define PDAUDIOCF_BLUEMODULATE	(1<<13)
#define PDAUDIOCF_REDMODULATE	(1<<14)
#define PDAUDIOCF_HALFRATE	(1<<15)
#define PDAUDIOCF_STAT_IS_STALE	(1<<0)
#define PDAUDIOCF_STAT_IS_CONFIGURED (1<<1)
#define PDAUDIOCF_STAT_IS_SUSPENDED (1<<2)
struct snd_pdacf ;
static inline void pdacf_reg_write(struct snd_pdacf *chip, unsigned char reg, unsigned short val)
static inline unsigned short pdacf_reg_read(struct snd_pdacf *chip, unsigned char reg)
struct snd_pdacf *snd_pdacf_create(struct snd_card *card);
int snd_pdacf_ak4117_create(struct snd_pdacf *pdacf);
void snd_pdacf_powerdown(struct snd_pdacf *chip);
int snd_pdacf_suspend(struct snd_pdacf *chip, pm_message_t state);
int snd_pdacf_resume(struct snd_pdacf *chip);
int snd_pdacf_pcm_new(struct snd_pdacf *chip);
irqreturn_t pdacf_interrupt(int irq, void *dev);
void pdacf_tasklet(unsigned long private_data);
void pdacf_reinit(struct snd_pdacf *chip, int resume);
