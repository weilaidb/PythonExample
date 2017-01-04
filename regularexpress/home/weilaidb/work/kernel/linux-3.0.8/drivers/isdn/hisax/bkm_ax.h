#define	__BKM_AX_H__
#define SCT_1		1
#define	SCT_2		2
#define	SCT_3		3
#define	SCT_4		4
#define BKM_A4T		5
#define	PLX_ADDR_PLX		0x14
#define	PLX_ADDR_ISAC		0x18
#define	PLX_ADDR_HSCX		0x1C
#define	PLX_ADDR_ALE		0x20
#define	PLX_ADDR_ALEPLUS	0x24
#define	PLX_SUBVEN		0x2C
#define	PLX_SUBSYS		0x2E
typedef	struct  I20_REGISTER_FILE, *PI20_REGISTER_FILE;
#define	PO_OFFSET	0x00000200
#define	GCS_0		0x00000000
#define	GCS_1		0x00100000
#define	GCS_2		0x00200000
#define	GCS_3		0x00300000
#define	PO_READ		0x00000000
#define	PO_WRITE	0x00800000
#define	PO_PEND		0x02000000
#define POSTOFFICE(postoffice) *(volatile unsigned int*)(postoffice)
#define	__WAITI20__(postoffice)										\
do  while (0)
