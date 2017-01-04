#define port_stb					1
#define port_afd					2
#define cmd_stb						port_afd
#define port_init					4
#define data_stb					port_init
#define port_sel					8
#define port_int					16
#define port_dir					0x20
#define ECR_EPP	0x80
#define ECR_BI	0x20
#define ACCESS_REG				0x00
#define ACCESS_PORT				0x40
#define ACCESS_READ				0x00
#define ACCESS_WRITE			0x20
#define CMD_PREFIX_SET		0xe0
#define CMD_PREFIX_RESET	0xc0
#define PREFIX_IO16			0x01
#define PREFIX_FASTWR		0x04
#define PREFIX_BLK				0x08
#define REG_STATUS				0x00
#define STATUS_IRQA			0x01
#define STATUS_EEPROM_DO	0x40
#define REG_VERSION				0x01
#define REG_HWCFG					0x02
#define REG_RAMSIZE				0x03
#define RAMSIZE_128K			0x02
#define REG_EEPROM				0x06
#define EEPROM_SK				0x01
#define EEPROM_DI				0x02
#define EEPROM_CS				0x04
#define EEPROM_EN				0x08
#define REG_BLKSIZE				0x08
typedef struct ppc_storage  Interface;
#define fifo_wait					0x10
#define PPCMODE_UNI_SW		0
#define PPCMODE_UNI_FW		1
#define PPCMODE_BI_SW			2
#define PPCMODE_BI_FW			3
#define PPCMODE_EPP_BYTE	4
#define PPCMODE_EPP_WORD	5
#define PPCMODE_EPP_DWORD	6
static int ppc6_select(Interface *ppc);
static void ppc6_deselect(Interface *ppc);
static void ppc6_send_cmd(Interface *ppc, u8 cmd);
static void ppc6_wr_data_byte(Interface *ppc, u8 data);
static u8 ppc6_rd_data_byte(Interface *ppc);
static u8 ppc6_rd_port(Interface *ppc, u8 port);
static void ppc6_wr_port(Interface *ppc, u8 port, u8 data);
static void ppc6_rd_data_blk(Interface *ppc, u8 *data, long count);
static void ppc6_wait_for_fifo(Interface *ppc);
static void ppc6_wr_data_blk(Interface *ppc, u8 *data, long count);
static void ppc6_rd_port16_blk(Interface *ppc, u8 port, u8 *data, long length);
static void ppc6_wr_port16_blk(Interface *ppc, u8 port, u8 *data, long length);
static void ppc6_wr_extout(Interface *ppc, u8 regdata);
static int ppc6_open(Interface *ppc);
static void ppc6_close(Interface *ppc);
static int ppc6_select(Interface *ppc)
static void ppc6_deselect(Interface *ppc)
static void ppc6_send_cmd(Interface *ppc, u8 cmd)
static void ppc6_wr_data_byte(Interface *ppc, u8 data)
static u8 ppc6_rd_data_byte(Interface *ppc)
static u8 ppc6_rd_port(Interface *ppc, u8 port)
static void ppc6_wr_port(Interface *ppc, u8 port, u8 data)
static void ppc6_rd_data_blk(Interface *ppc, u8 *data, long count)
static void ppc6_wait_for_fifo(Interface *ppc)
static void ppc6_wr_data_blk(Interface *ppc, u8 *data, long count)
static void ppc6_rd_port16_blk(Interface *ppc, u8 port, u8 *data, long length)
static void ppc6_wr_port16_blk(Interface *ppc, u8 port, u8 *data, long length)
static void ppc6_wr_extout(Interface *ppc, u8 regdata)
static int ppc6_open(Interface *ppc)
static void ppc6_close(Interface *ppc)
