#define MTD_PARTITIONS_H
struct mtd_partition ;
#define MTDPART_OFS_NXTBLK	(-2)
#define MTDPART_OFS_APPEND	(-1)
#define MTDPART_SIZ_FULL	(0)
struct mtd_info;
struct mtd_part_parser ;
extern int register_mtd_parser(struct mtd_part_parser *parser);
extern int deregister_mtd_parser(struct mtd_part_parser *parser);
extern int parse_mtd_partitions(struct mtd_info *master, const char **types,
struct mtd_partition **pparts, unsigned long origin);
#define put_partition_parser(p) do  while(0)
struct device;
struct device_node;
int __devinit of_mtd_parse_partitions(struct device *dev,
struct device_node *node,
struct mtd_partition **pparts);
static inline int of_mtd_parse_partitions(struct device *dev,
struct device_node *node,
struct mtd_partition **pparts)
static inline int mtd_has_cmdlinepart(void)
static inline int mtd_has_cmdlinepart(void)
int mtd_is_partition(struct mtd_info *mtd);
int mtd_add_partition(struct mtd_info *master, char *name,
long long offset, long long length);
int mtd_del_partition(struct mtd_info *master, int partno);
