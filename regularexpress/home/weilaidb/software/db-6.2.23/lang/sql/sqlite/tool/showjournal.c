static int pageSize = 1024;
static int sectorSize = 512;
static FILE *db = 0;
static int fileSize = 0;
static unsigned cksumNonce = 0;
static void out_of_memory(void)
static unsigned char *read_content(int N, int iOfst)
static unsigned print_decode_line(
const unsigned char *aData,
int ofst, int nByte,
const char *zMsg
)
static unsigned decode_journal_header(int iOfst)
static void print_page(int iOfst)
int main(int argc, char **argv)
