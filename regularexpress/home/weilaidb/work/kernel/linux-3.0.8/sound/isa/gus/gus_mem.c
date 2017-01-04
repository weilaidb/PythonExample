static void snd_gf1_mem_info_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer);
void snd_gf1_mem_lock(struct snd_gf1_mem * alloc, int xup)
static struct snd_gf1_mem_block *snd_gf1_mem_xalloc(struct snd_gf1_mem * alloc,
struct snd_gf1_mem_block * block)
int snd_gf1_mem_xfree(struct snd_gf1_mem * alloc, struct snd_gf1_mem_block * block)
static struct snd_gf1_mem_block *snd_gf1_mem_look(struct snd_gf1_mem * alloc,
unsigned int address)
static struct snd_gf1_mem_block *snd_gf1_mem_share(struct snd_gf1_mem * alloc,
unsigned int *share_id)
static int snd_gf1_mem_find(struct snd_gf1_mem * alloc,
struct snd_gf1_mem_block * block,
unsigned int size, int w_16, int align)
struct snd_gf1_mem_block *snd_gf1_mem_alloc(struct snd_gf1_mem * alloc, int owner,
char *name, int size, int w_16, int align,
unsigned int *share_id)
int snd_gf1_mem_free(struct snd_gf1_mem * alloc, unsigned int address)
int snd_gf1_mem_init(struct snd_gus_card * gus)
int snd_gf1_mem_done(struct snd_gus_card * gus)
static void snd_gf1_mem_info_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
