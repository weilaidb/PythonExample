#define BD_ADDR_SIZE            6
#define WRITE_PATCH             8
#define ENABLE_PATCH            11
#define PS_RESET                2
#define PS_WRITE                1
#define PS_VERIFY_CRC           9
#define CHANGE_BDADDR           15
#define HCI_COMMAND_HEADER      7
#define HCI_EVENT_SIZE          7
#define WRITE_PATCH_COMMAND_STATUS_OFFSET 5
#define PS_RAM_SIZE	2048
#define RAM_PS_REGION           (1<<0)
#define RAM_PATCH_REGION        (1<<1)
#define RAMPS_MAX_PS_DATA_PER_TAG         20000
#define MAX_RADIO_CFG_TABLE_SIZE  244
#define RAMPS_MAX_PS_TAGS_PER_FILE        50
#define PS_MAX_LEN                        500
#define LINE_SIZE_MAX                     (PS_MAX_LEN *2)
#define BYTES_OF_PS_DATA_PER_LINE         16
#define RAMPS_MAX_PS_DATA_PER_TAG         20000
#define MAX_BYTE_LENGTH                   244
#define SKIP_BLANKS(str) while (*str == ' ') str++
enum MinBootFileFormatE
;
enum RamPsSection
;
enum eType ;
typedef struct tPsTagEntry
tPsTagEntry, *tpPsTagEntry;
typedef struct tRamPatch
tRamPatch, *ptRamPatch;
struct st_ps_data_format ;
struct st_read_status ;
static u32 Tag_Count = 0;
static u32 Patch_Count = 0;
static u32 Total_tag_lenght = 0;
bool BDADDR = false;
u32 StartTagId;
tPsTagEntry PsTagEntry[RAMPS_MAX_PS_TAGS_PER_FILE];
tRamPatch   RamPatch[MAX_NUM_PATCH_ENTRY];
int AthParseFilesUnified(u8 *srcbuffer,u32 srclen, int FileFormat);
char AthReadChar(u8 *buffer, u32 len,u32 *pos);
char *AthGetLine(char *buffer, int maxlen, u8 *srcbuffer,u32 len,u32 *pos);
static int AthPSCreateHCICommand(u8 Opcode, u32 Param1,struct ps_cmd_packet *PSPatchPacket,u32 *index);
char AthReadChar(u8 *buffer, u32 len,u32 *pos)
unsigned int uGetInputDataFormat(char *pCharLine, struct st_ps_data_format *pstFormat)
unsigned int uReadDataInSection(char *pCharLine, struct st_ps_data_format stPS_DataFormat)
int AthParseFilesUnified(u8 *srcbuffer,u32 srclen, int FileFormat)
int GetNextTwoChar(u8 *srcbuffer,u32 len, u32 *pos, char *buffer)
int AthDoParsePatch(u8 *patchbuffer, u32 patchlen)
int AthDoParsePS(u8 *srcbuffer, u32 srclen)
char *AthGetLine(char *buffer, int maxlen, u8 *srcbuffer,u32 len,u32 *pos)
static void LoadHeader(u8 *HCI_PS_Command,u8 opcode,int length,int index)
int AthCreateCommandList(struct ps_cmd_packet **HciPacketList, u32 *numPackets)
static int AthPSCreateHCICommand(u8 Opcode, u32 Param1,struct ps_cmd_packet *PSPatchPacket,u32 *index)
int AthFreeCommandList(struct ps_cmd_packet **HciPacketList, u32 numPackets)
