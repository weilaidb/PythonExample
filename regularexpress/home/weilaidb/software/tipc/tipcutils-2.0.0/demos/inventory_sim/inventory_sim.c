#define TIPC_INV_SIM_TYPE 75
#define MSG_SIZE_MAX 50
#define DEMO_ITEM_ID_MIN 1
#define DEMO_ITEM_ID_MAX 10
#define NUM_DEMO_ITEMS (DEMO_ITEM_ID_MAX - DEMO_ITEM_ID_MIN + 1)
#define AUTO_ITEM_DEFAULT 10
#define AUTO_CUST_DEFAULT 10
#define CUSTOMER_WAIT_MIN   5000
#define CUSTOMER_WAIT_MAX   20000
#define NEW_CUST_WAIT_MIN   1000
#define NEW_CUST_WAIT_MAX   5000
#define NEW_ITEM_WAIT_MIN   0
#define NEW_ITEM_WAIT_MAX   8000
#define SIM_STATUS_INTERVAL 10000
#define TIPC_BOGUS_SUBSCR_TYPE TIPC_TOP_SRV
#define TIPC_BOGUS_SUBSCR_INST 0
enum ;
enum ;
struct trans_msg ;
static int simState;
static int simErrors;
static int simWarnings;
static int itemCount[NUM_DEMO_ITEMS];
static int itemsInStore = 0;
static int itemsSold[NUM_DEMO_ITEMS];
static int customerCount[NUM_DEMO_ITEMS];
static int customersInStore = 0;
static int customerTotal = 0;
static int customerSales;
static int customerExits;
static int customerRetries;
int randomGet(int minValue, int maxValue)
void childSpawn(void *func, void *arg, int argSize, char *taskName)
void simDelay(int delay_in_msecs)
int simFind(void)
int simLog(int code, const char *fmt, ...)
void simJanitorTask(void *arg)
void showSim(void)
void logTransaction(int sockfd_t, int printTrans)
void simLogTask(void *arg)
int simItem(int itemID, int lagTime, int speed)
struct item_task_arg ;
void simItemTask(struct item_task_arg *arg)
void newItem(int itemID, int repeats)
int simCust(int itemID, int lagTime, int waitTime, int speed, int taskID)
struct cust_task_arg ;
void simCustTask(struct cust_task_arg *arg)
void newCust(int itemID, int repeats)
void newSim(int numItems, int numCusts, int speed, int verbosity)
void killSim(void)
void itemZeroTask(void *arg)
void stopSim(void)
void startSim(void)
static char usage[] =
;
void helpSim(void)
int main(int argc, char **argv)
