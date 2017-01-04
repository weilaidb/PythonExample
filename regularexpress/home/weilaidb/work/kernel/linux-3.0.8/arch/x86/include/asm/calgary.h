#define _ASM_X86_CALGARY_H
struct iommu_table ;
struct cal_chipset_ops ;
#define TCE_TABLE_SIZE_UNSPECIFIED	~0
#define TCE_TABLE_SIZE_64K		0
#define TCE_TABLE_SIZE_128K		1
#define TCE_TABLE_SIZE_256K		2
#define TCE_TABLE_SIZE_512K		3
#define TCE_TABLE_SIZE_1M		4
#define TCE_TABLE_SIZE_2M		5
#define TCE_TABLE_SIZE_4M		6
#define TCE_TABLE_SIZE_8M		7
extern int use_calgary;
extern int detect_calgary(void);
static inline int detect_calgary(void)
