#define ERRP "mtd: "
#define SIZE_REMAINING UINT_MAX
#define OFFSET_CONTINUOUS UINT_MAX
struct cmdline_mtd_partition ;
static struct cmdline_mtd_partition *partitions;
static char *cmdline;
static int cmdline_parsed = 0;
static struct mtd_partition * newpart(char *s,
char **retptr,
int *num_parts,
int this_part,
unsigned char **extra_mem_ptr,
int extra_mem_size)
static int mtdpart_setup_real(char *s)
static int parse_cmdline_partitions(struct mtd_info *master,
struct mtd_partition **pparts,
unsigned long origin)
static int mtdpart_setup(char *s)
__setup("mtdparts=", mtdpart_setup);
static struct mtd_part_parser cmdline_parser = ;
static int __init cmdline_parser_init(void)
module_init(cmdline_parser_init);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Marius Groeger <mag@sysgo.de>");
MODULE_DESCRIPTION("Command line configuration of MTD partitions");
