#define _SPARC64_HVTRAP_H
struct hvtramp_mapping ;
struct hvtramp_descr ;
extern void hv_cpu_startup(unsigned long hvdescr_pa);
#define HVTRAMP_DESCR_CPU		0x00
#define HVTRAMP_DESCR_NUM_MAPPINGS	0x04
#define HVTRAMP_DESCR_FAULT_INFO_VA	0x08
#define HVTRAMP_DESCR_FAULT_INFO_PA	0x10
#define HVTRAMP_DESCR_THREAD_REG	0x18
#define HVTRAMP_DESCR_MAPS		0x20
#define HVTRAMP_MAPPING_VADDR		0x00
#define HVTRAMP_MAPPING_TTE		0x08
#define HVTRAMP_MAPPING_SIZE		0x10
