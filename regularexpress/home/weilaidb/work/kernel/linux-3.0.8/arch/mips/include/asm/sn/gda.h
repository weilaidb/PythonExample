#define _ASM_SN_GDA_H
#define GDA_MAGIC	0x58464552
#define GDA_VERSION	2
#define G_MAGICOFF	0
#define G_VERSIONOFF	4
#define G_PROMOPOFF	6
#define G_MASTEROFF	8
#define G_VDSOFF	12
#define G_HKDNORMOFF	16
#define G_HKDUTLBOFF	24
#define G_HKDXUTLBOFF	32
#define G_PARTIDOFF	40
#define G_TABLEOFF	128
typedef struct gda  gda_t;
#define GDA ((gda_t*) GDA_ADDR(get_nasid()))
#define	PART_GDA_VERSION	2
#define PROMOP_MAGIC		0x0ead0000
#define PROMOP_MAGIC_MASK	0x0fff0000
#define PROMOP_BIST_SHIFT       11
#define PROMOP_BIST_MASK        (0x3 << 11)
#define PROMOP_REG		PI_ERR_STACK_ADDR_A
#define PROMOP_INVALID		(PROMOP_MAGIC | 0x00)
#define PROMOP_HALT             (PROMOP_MAGIC | 0x10)
#define PROMOP_POWERDOWN        (PROMOP_MAGIC | 0x20)
#define PROMOP_RESTART          (PROMOP_MAGIC | 0x30)
#define PROMOP_REBOOT           (PROMOP_MAGIC | 0x40)
#define PROMOP_IMODE            (PROMOP_MAGIC | 0x50)
#define PROMOP_CMD_MASK		0x00f0
#define PROMOP_OPTIONS_MASK	0xfff0
#define PROMOP_SKIP_DIAGS	0x0100
#define PROMOP_SKIP_MEMINIT	0x0200
#define PROMOP_SKIP_DEVINIT	0x0400
#define PROMOP_BIST1		0x0800
#define PROMOP_BIST2		0x1000
