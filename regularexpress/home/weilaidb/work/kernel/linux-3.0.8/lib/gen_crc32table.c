#define ENTRIES_PER_LINE 4
#define LE_TABLE_SIZE (1 << CRC_LE_BITS)
#define BE_TABLE_SIZE (1 << CRC_BE_BITS)
static uint32_t crc32table_le[4][LE_TABLE_SIZE];
static uint32_t crc32table_be[4][BE_TABLE_SIZE];
static void crc32init_le(void)
static void crc32init_be(void)
static void output_table(uint32_t table[4][256], int len, char *trans)
int main(int argc, char** argv)
