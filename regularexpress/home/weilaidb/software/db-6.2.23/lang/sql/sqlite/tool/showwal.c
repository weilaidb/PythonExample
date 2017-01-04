#if !defined(_MSC_VER)
static int pagesize = 1024;
static int fd = -1;
static int mxFrame = 0;
static int perLine = 16;
typedef long long int i64;
typedef struct Cksum Cksum;
struct Cksum ;
static unsigned int getInt32(const unsigned char *a)
static unsigned int swab32(unsigned int x)
static void extendCksum(
Cksum *pCksum,
unsigned char *aData,
unsigned int nByte,
int bInit
)
static int decodeVarint(const unsigned char *z, i64 *pVal)
static void out_of_memory(void)
static unsigned char *getContent(int ofst, int nByte)
static void print_byte_range(
int ofst,
int nByte,
unsigned char *aData,
int printOfst
)
static void print_decode_line(
unsigned char *aData,
int ofst, int nByte,
int asHex,
const char *zMsg
)
static void print_frame(int iFrame)
static void print_oneline_frame(int iFrame, Cksum *pCksum)
static void print_wal_header(Cksum *pCksum)
static i64 describeContent(
unsigned char *a,
i64 nLocal,
char *zDesc
)
static i64 localPayload(i64 nPayload, char cType)
static i64 describeCell(
unsigned char cType,
unsigned char *a,
int showCellContent,
char **pzDesc
)
static void decode_btree_page(
unsigned char *a,
int pgno,
int hdrSize,
const char *zArgs
)
int main(int argc, char **argv)
