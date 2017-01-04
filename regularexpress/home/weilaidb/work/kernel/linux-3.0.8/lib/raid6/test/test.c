#define NDISKS		16
const char raid6_empty_zero_page[PAGE_SIZE] __attribute__((aligned(256)));
struct raid6_calls raid6_call;
char *dataptrs[NDISKS];
char data[NDISKS][PAGE_SIZE];
char recovi[PAGE_SIZE], recovj[PAGE_SIZE];
static void makedata(void)
static char disk_type(int d)
static int test_disks(int i, int j)
int main(int argc, char *argv[])
