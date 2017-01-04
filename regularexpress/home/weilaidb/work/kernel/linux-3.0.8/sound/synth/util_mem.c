MODULE_AUTHOR("Takashi Iwai");
MODULE_DESCRIPTION("Generic memory management routines for soundcard memory allocation");
MODULE_LICENSE("GPL");
#define get_memblk(p)	list_entry(p, struct snd_util_memblk, list)
struct snd_util_memhdr *
snd_util_memhdr_new(int memsize)
void snd_util_memhdr_free(struct snd_util_memhdr *hdr)
struct snd_util_memblk *
__snd_util_mem_alloc(struct snd_util_memhdr *hdr, int size)
struct snd_util_memblk *
__snd_util_memblk_new(struct snd_util_memhdr *hdr, unsigned int units,
struct list_head *prev)
struct snd_util_memblk *
snd_util_mem_alloc(struct snd_util_memhdr *hdr, int size)
void
__snd_util_mem_free(struct snd_util_memhdr *hdr, struct snd_util_memblk *blk)
int snd_util_mem_free(struct snd_util_memhdr *hdr, struct snd_util_memblk *blk)
int snd_util_mem_avail(struct snd_util_memhdr *hdr)
EXPORT_SYMBOL(snd_util_memhdr_new);
EXPORT_SYMBOL(snd_util_memhdr_free);
EXPORT_SYMBOL(snd_util_mem_alloc);
EXPORT_SYMBOL(snd_util_mem_free);
EXPORT_SYMBOL(snd_util_mem_avail);
EXPORT_SYMBOL(__snd_util_mem_alloc);
EXPORT_SYMBOL(__snd_util_mem_free);
EXPORT_SYMBOL(__snd_util_memblk_new);
static int __init alsa_util_mem_init(void)
static void __exit alsa_util_mem_exit(void)
module_init(alsa_util_mem_init)
module_exit(alsa_util_mem_exit)
