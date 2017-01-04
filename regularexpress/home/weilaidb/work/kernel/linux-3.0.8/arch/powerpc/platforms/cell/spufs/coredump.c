static ssize_t do_coredump_read(int num, struct spu_context *ctx, void *buffer,
size_t size, loff_t *off)
static int spufs_dump_write(struct file *file, const void *addr, int nr, loff_t *foffset)
static int spufs_dump_align(struct file *file, char *buf, loff_t new_off,
loff_t *foffset)
static int spufs_ctx_note_size(struct spu_context *ctx, int dfd)
static struct spu_context *coredump_next_context(int *fd)
int spufs_coredump_extra_notes_size(void)
static int spufs_arch_write_note(struct spu_context *ctx, int i,
struct file *file, int dfd, loff_t *foffset)
int spufs_coredump_extra_notes_write(struct file *file, loff_t *foffset)
