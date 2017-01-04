#define CTS_AVC 0x00
#define ERROR_RETRIES	3
#define ERROR_DELAY_MS	5
#define FCP_TIMEOUT_MS	125
static DEFINE_SPINLOCK(transactions_lock);
static LIST_HEAD(transactions);
enum fcp_state ;
struct fcp_transaction ;
int fcp_avc_transaction(struct fw_unit *unit,
const void *command, unsigned int command_size,
void *response, unsigned int response_size,
unsigned int response_match_bytes)
EXPORT_SYMBOL(fcp_avc_transaction);
void fcp_bus_reset(struct fw_unit *unit)
EXPORT_SYMBOL(fcp_bus_reset);
static bool is_matching_response(struct fcp_transaction *transaction,
const void *response, size_t length)
static void fcp_response(struct fw_card *card, struct fw_request *request,
int tcode, int destination, int source,
int generation, unsigned long long offset,
void *data, size_t length, void *callback_data)
static struct fw_address_handler response_register_handler = ;
static int __init fcp_module_init(void)
static void __exit fcp_module_exit(void)
module_init(fcp_module_init);
module_exit(fcp_module_exit);
