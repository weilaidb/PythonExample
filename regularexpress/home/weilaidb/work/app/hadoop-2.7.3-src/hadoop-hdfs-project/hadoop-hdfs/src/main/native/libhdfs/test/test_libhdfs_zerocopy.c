#define TO_STR_HELPER(X) #X
#define TO_STR(X) TO_STR_HELPER(X)
#define TEST_FILE_NAME_LENGTH 128
#define TEST_ZEROCOPY_FULL_BLOCK_SIZE 4096
#define TEST_ZEROCOPY_LAST_BLOCK_SIZE 3215
#define TEST_ZEROCOPY_NUM_BLOCKS 6
#define SMALL_READ_LEN 16
#define TEST_ZEROCOPY_FILE_LEN \
(((TEST_ZEROCOPY_NUM_BLOCKS - 1) * TEST_ZEROCOPY_FULL_BLOCK_SIZE) + \
TEST_ZEROCOPY_LAST_BLOCK_SIZE)
#define ZC_BUF_LEN 32768
static uint8_t *getZeroCopyBlockData(int blockIdx)
static int getZeroCopyBlockLen(int blockIdx)
static int doTestZeroCopyReads(hdfsFS fs, const char *fileName)
static int createZeroCopyTestFile(hdfsFS fs, char *testFileName,
size_t testFileNameLen)
static int nmdConfigureHdfsBuilder(struct NativeMiniDfsCluster *cl,
struct hdfsBuilder *bld)
int main(void)
