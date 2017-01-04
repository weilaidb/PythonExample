#define _XTENSA_BOOTPARAM_H
#define BP_VERSION 0x0001
#define BP_TAG_COMMAND_LINE	0x1001
#define BP_TAG_INITRD		0x1002
#define BP_TAG_MEMORY		0x1003
#define BP_TAG_SERIAL_BAUSRATE	0x1004
#define BP_TAG_SERIAL_PORT	0x1005
#define BP_TAG_FIRST		0x7B0B
#define BP_TAG_LAST 		0x7E0B
typedef struct bp_tag  bp_tag_t;
typedef struct meminfo  meminfo_t;
#define SYSMEM_BANKS_MAX 5
#define MEMORY_TYPE_CONVENTIONAL	0x1000
#define MEMORY_TYPE_NONE		0x2000
typedef struct sysmem_info  sysmem_info_t;
extern sysmem_info_t sysmem;
