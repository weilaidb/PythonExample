static int emu8000_reset_addr;
module_param(emu8000_reset_addr, int, 0444);
MODULE_PARM_DESC(emu8000_reset_addr, "reset write address at each time (makes slowdown)");
static int
snd_emu8000_open_dma(struct snd_emu8000 *emu, int write)
static void
snd_emu8000_close_dma(struct snd_emu8000 *emu)
#define BLANK_LOOP_START	4
#define BLANK_LOOP_END		8
#define BLANK_LOOP_SIZE		12
#define BLANK_HEAD_SIZE		48
static unsigned short
read_word(const void __user *buf, int offset, int mode)
static void
snd_emu8000_write_wait(struct snd_emu8000 *emu)
static inline void
write_word(struct snd_emu8000 *emu, int *offset, unsigned short data)
int
snd_emu8000_sample_new(struct snd_emux *rec, struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr,
const void __user *data, long count)
int
snd_emu8000_sample_free(struct snd_emux *rec, struct snd_sf_sample *sp,
struct snd_util_memhdr *hdr)
void
snd_emu8000_sample_reset(struct snd_emux *rec)
