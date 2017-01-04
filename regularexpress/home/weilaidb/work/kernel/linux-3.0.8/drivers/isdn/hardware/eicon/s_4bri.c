#define	MAX_XLOG_SIZE	(64 * 1024)
static void qBri_cpu_trapped (PISDN_ADAPTER IoAdapter)
static void reset_qBri_hardware (PISDN_ADAPTER IoAdapter)
void start_qBri_hardware (PISDN_ADAPTER IoAdapter)
static void stop_qBri_hardware (PISDN_ADAPTER IoAdapter)
#define FPGA_NAME_OFFSET         0x10
static byte * qBri_check_FPGAsrc (PISDN_ADAPTER IoAdapter, char *FileName,
dword *Length, dword *code)
#define FPGA_PROG   0x0001
#define FPGA_BUSY   0x0002
#define	FPGA_CS     0x000C
#define FPGA_CCLK   0x0100
#define FPGA_DOUT   0x0400
#define FPGA_DIN    FPGA_DOUT
int qBri_FPGA_download (PISDN_ADAPTER IoAdapter)
static int load_qBri_hardware (PISDN_ADAPTER IoAdapter)
static int qBri_ISR (struct _ISDN_ADAPTER* IoAdapter)
static void disable_qBri_interrupt (PISDN_ADAPTER IoAdapter)
static void set_common_qBri_functions (PISDN_ADAPTER IoAdapter)
static void set_qBri_functions (PISDN_ADAPTER IoAdapter)
static void set_qBri2_functions (PISDN_ADAPTER IoAdapter)
void prepare_qBri_functions (PISDN_ADAPTER IoAdapter)
void prepare_qBri2_functions (PISDN_ADAPTER IoAdapter)
