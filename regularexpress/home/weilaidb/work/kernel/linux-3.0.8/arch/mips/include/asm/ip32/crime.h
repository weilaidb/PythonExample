#define __ASM_CRIME_H__
#define CRIME_BASE	0x14000000
struct sgi_crime ;
extern struct sgi_crime __iomem *crime;
#define CRIME_HI_MEM_BASE	0x40000000
