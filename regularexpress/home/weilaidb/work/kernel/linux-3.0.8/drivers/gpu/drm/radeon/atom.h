#define ATOM_H
#define ATOM_BIOS_MAGIC		0xAA55
#define ATOM_ATI_MAGIC_PTR	0x30
#define ATOM_ATI_MAGIC		" 761295520"
#define ATOM_ROM_TABLE_PTR	0x48
#define ATOM_ROM_MAGIC		"ATOM"
#define ATOM_ROM_MAGIC_PTR	4
#define ATOM_ROM_MSG_PTR	0x10
#define ATOM_ROM_CMD_PTR	0x1E
#define ATOM_ROM_DATA_PTR	0x20
#define ATOM_CMD_INIT		0
#define ATOM_CMD_SETSCLK	0x0A
#define ATOM_CMD_SETMCLK	0x0B
#define ATOM_CMD_SETPCLK	0x0C
#define ATOM_DATA_FWI_PTR	0xC
#define ATOM_DATA_IIO_PTR	0x32
#define ATOM_FWI_DEFSCLK_PTR	8
#define ATOM_FWI_DEFMCLK_PTR	0xC
#define ATOM_FWI_MAXSCLK_PTR	0x24
#define ATOM_FWI_MAXMCLK_PTR	0x28
#define ATOM_CT_SIZE_PTR	0
#define ATOM_CT_WS_PTR		4
#define ATOM_CT_PS_PTR		5
#define ATOM_CT_PS_MASK		0x7F
#define ATOM_CT_CODE_PTR	6
#define ATOM_OP_CNT		123
#define ATOM_OP_EOT		91
#define ATOM_CASE_MAGIC		0x63
#define ATOM_CASE_END		0x5A5A
#define ATOM_ARG_REG		0
#define ATOM_ARG_PS		1
#define ATOM_ARG_WS		2
#define ATOM_ARG_FB		3
#define ATOM_ARG_ID		4
#define ATOM_ARG_IMM		5
#define ATOM_ARG_PLL		6
#define ATOM_ARG_MC		7
#define ATOM_SRC_DWORD		0
#define ATOM_SRC_WORD0		1
#define ATOM_SRC_WORD8		2
#define ATOM_SRC_WORD16		3
#define ATOM_SRC_BYTE0		4
#define ATOM_SRC_BYTE8		5
#define ATOM_SRC_BYTE16		6
#define ATOM_SRC_BYTE24		7
#define ATOM_WS_QUOTIENT	0x40
#define ATOM_WS_REMAINDER	0x41
#define ATOM_WS_DATAPTR		0x42
#define ATOM_WS_SHIFT		0x43
#define ATOM_WS_OR_MASK		0x44
#define ATOM_WS_AND_MASK	0x45
#define ATOM_WS_FB_WINDOW	0x46
#define ATOM_WS_ATTRIBUTES	0x47
#define ATOM_WS_REGPTR  	0x48
#define ATOM_IIO_NOP		0
#define ATOM_IIO_START		1
#define ATOM_IIO_READ		2
#define ATOM_IIO_WRITE		3
#define ATOM_IIO_CLEAR		4
#define ATOM_IIO_SET		5
#define ATOM_IIO_MOVE_INDEX	6
#define ATOM_IIO_MOVE_ATTR	7
#define ATOM_IIO_MOVE_DATA	8
#define ATOM_IIO_END		9
#define ATOM_IO_MM		0
#define ATOM_IO_PCI		1
#define ATOM_IO_SYSIO		2
#define ATOM_IO_IIO		0x80
struct card_info ;
struct atom_context ;
extern int atom_debug;
struct atom_context *atom_parse(struct card_info *, void *);
int atom_execute_table(struct atom_context *, int, uint32_t *);
int atom_asic_init(struct atom_context *);
void atom_destroy(struct atom_context *);
bool atom_parse_data_header(struct atom_context *ctx, int index, uint16_t *size,
uint8_t *frev, uint8_t *crev, uint16_t *data_start);
bool atom_parse_cmd_header(struct atom_context *ctx, int index,
uint8_t *frev, uint8_t *crev);
int atom_allocate_fb_scratch(struct atom_context *ctx);
