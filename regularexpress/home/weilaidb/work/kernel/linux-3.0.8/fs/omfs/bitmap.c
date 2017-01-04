unsigned long omfs_count_free(struct super_block *sb)
static int count_run(unsigned long **addr, int nbits,
int addrlen, int bit, int max)
static int set_run(struct super_block *sb, int map,
int nbits, int bit, int count, int set)
int omfs_allocate_block(struct super_block *sb, u64 block)
int omfs_allocate_range(struct super_block *sb,
int min_request,
int max_request,
u64 *return_block,
int *return_size)
int omfs_clear_range(struct super_block *sb, u64 block, int count)
