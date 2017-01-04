#if !defined(_MSC_VER)
static int pagesize = 1024;
static int db = -1;
static int mxPage = 0;
static int perLine = 16;
typedef long long int i64;
static int decodeVarint(const unsigned char *z, i64 *pVal)
static unsigned int decodeInt32(const unsigned char *z)
static void out_of_memory(void)
static unsigned char *getContent(int ofst, int nByte)
static unsigned char *print_byte_range(
int ofst,
int nByte,
int printOfst
)
static void print_page(int iPg)
static void print_decode_line(
unsigned char *aData,
int ofst, int nByte,
const char *zMsg
)
static void print_db_header(void)
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
static void printBytes(
unsigned char *aData,
unsigned char *aStart,
int nByte
)
static void decodeCell(
unsigned char *a,
unsigned pgno,
int iCell,
int szPgHdr,
int ofst
)
static void decode_btree_page(
unsigned char *a,
int pgno,
int hdrSize,
char *zArgs
)
static void decode_trunk_page(
int pgno,
int pagesize,
int detail,
int recursive
)
static char **zPageUse;
static void page_usage_msg(int pgno, const char *zFormat, ...)
static void page_usage_cell(
unsigned char cType,
unsigned char *a,
int pgno,
int cellno
)
static void page_usage_btree(
int pgno,
int parent,
int idx,
const char *zName
)
static void page_usage_freelist(int pgno)
static void page_usage_ptrmap(unsigned char *a)
static void page_usage_report(const char *zDbName)
static void ptrmap_coverage_report(const char *zDbName)
static void usage(const char *argv0)
int main(int argc, char **argv)
