static void snd_gf1_dma_ack(struct snd_gus_card * gus)
static void snd_gf1_dma_program(struct snd_gus_card * gus,
unsigned int addr,
unsigned long buf_addr,
unsigned int count,
unsigned int cmd)
static struct snd_gf1_dma_block *snd_gf1_dma_next_block(struct snd_gus_card * gus)
static void snd_gf1_dma_interrupt(struct snd_gus_card * gus)
int snd_gf1_dma_init(struct snd_gus_card * gus)
int snd_gf1_dma_done(struct snd_gus_card * gus)
int snd_gf1_dma_transfer_block(struct snd_gus_card * gus,
struct snd_gf1_dma_block * __block,
int atomic,
int synth)
