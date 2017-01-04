#undef DEBUG
#define	DPRINTK(fmt,args...) printk( fmt, ##args )
#define DPRINTK(fmt,args...)
#if defined(CONFIG_PROC_FS) && defined(CONFIG_STRAM_PROC)
#define DO_PROC
static void *stram_start, *stram_end;
static int mem_init_done;
static int kernel_in_stram;
typedef struct stram_block  BLOCK;
#define BLOCK_FREE	0x01
#define BLOCK_KMALLOCED	0x02
#define BLOCK_GFP	0x08
static BLOCK *alloc_list;
#define N_STATIC_BLOCKS	20
static BLOCK static_blocks[N_STATIC_BLOCKS];
static BLOCK *add_region( void *addr, unsigned long size );
static BLOCK *find_region( void *addr );
static int remove_region( BLOCK *block );
void __init atari_stram_init(void)
void __init atari_stram_reserve_pages(void *start_mem)
void atari_stram_mem_init_hook (void)
void *atari_stram_alloc(long size, const char *owner)
EXPORT_SYMBOL(atari_stram_alloc);
void atari_stram_free( void *addr )
EXPORT_SYMBOL(atari_stram_free);
static BLOCK *add_region( void *addr, unsigned long size )
static BLOCK *find_region( void *addr )
static int remove_region( BLOCK *block )
#define	PRINT_PROC(fmt,args...) seq_printf( m, fmt, ##args )
static int stram_proc_show(struct seq_file *m, void *v)
static int stram_proc_open(struct inode *inode, struct file *file)
static const struct file_operations stram_proc_fops = ;
static int __init proc_stram_init(void)
module_init(proc_stram_init);
