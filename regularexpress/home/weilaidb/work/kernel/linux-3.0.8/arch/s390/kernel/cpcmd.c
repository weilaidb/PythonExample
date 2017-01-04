#define KMSG_COMPONENT "cpcmd"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static DEFINE_SPINLOCK(cpcmd_lock);
static char cpcmd_buf[241];
static int diag8_noresponse(int cmdlen)
static int diag8_response(int cmdlen, char *response, int *rlen)
int  __cpcmd(const char *cmd, char *response, int rlen, int *response_code)
EXPORT_SYMBOL(__cpcmd);
int cpcmd(const char *cmd, char *response, int rlen, int *response_code)
EXPORT_SYMBOL(cpcmd);
