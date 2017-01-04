#define CRC32_POLYNOMIAL                0xEDB88320L
#define CRC_TABLE_ENTRIES                       256
static      u_int32_t crcTableInit;
static u_int32_t CRCTable[CRC_TABLE_ENTRIES];
static void
genCrcTable (u_int32_t *CRCTable)
void
sbeCrc (u_int8_t *buffer,
u_int32_t count,
u_int32_t initialCrc,
u_int32_t *result)
