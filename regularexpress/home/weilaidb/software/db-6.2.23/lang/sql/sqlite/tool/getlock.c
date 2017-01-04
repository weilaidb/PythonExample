static void usage(const char *argv0)
static int isLocked(
int h,
int type,
unsigned int iOfst,
unsigned int iCnt,
const char *zType
)
#define PENDING_BYTE      (0x40000000)
#define RESERVED_BYTE     (PENDING_BYTE+1)
#define SHARED_FIRST      (PENDING_BYTE+2)
#define SHARED_SIZE       510
#define SHM_BASE          120
#define SHM_WRITE         SHM_BASE
#define SHM_CHECKPOINT    (SHM_BASE+1)
#define SHM_RECOVER       (SHM_BASE+2)
#define SHM_READ_FIRST    (SHM_BASE+3)
#define SHM_READ_SIZE     5
int main(int argc, char **argv)
