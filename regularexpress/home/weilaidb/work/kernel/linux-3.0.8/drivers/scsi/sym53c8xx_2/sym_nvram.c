static u_char Tekram_boot_delay[7] = ;
void sym_nvram_setup_host(struct Scsi_Host *shost, struct sym_hcb *np, struct sym_nvram *nvram)
static void
sym_Symbios_setup_target(struct sym_tcb *tp, int target, Symbios_nvram *nvram)
static const unsigned char Tekram_sync[16] = ;
static void
sym_Tekram_setup_target(struct sym_tcb *tp, int target, Tekram_nvram *nvram)
void sym_nvram_setup_target(struct sym_tcb *tp, int target, struct sym_nvram *nvp)
static void sym_display_Symbios_nvram(struct sym_device *np, Symbios_nvram *nvram)
static void sym_display_Tekram_nvram(struct sym_device *np, Tekram_nvram *nvram)
static void sym_display_Symbios_nvram(struct sym_device *np, Symbios_nvram *nvram)
static void sym_display_Tekram_nvram(struct sym_device *np, Tekram_nvram *nvram)
#define SET_BIT 0
#define CLR_BIT 1
#define SET_CLK 2
#define CLR_CLK 3
static void S24C16_set_bit(struct sym_device *np, u_char write_bit, u_char *gpreg,
int bit_mode)
static void S24C16_start(struct sym_device *np, u_char *gpreg)
static void S24C16_stop(struct sym_device *np, u_char *gpreg)
static void S24C16_do_bit(struct sym_device *np, u_char *read_bit, u_char write_bit,
u_char *gpreg)
static void S24C16_write_ack(struct sym_device *np, u_char write_bit, u_char *gpreg,
u_char *gpcntl)
static void S24C16_read_ack(struct sym_device *np, u_char *read_bit, u_char *gpreg,
u_char *gpcntl)
static void S24C16_write_byte(struct sym_device *np, u_char *ack_data, u_char write_data,
u_char *gpreg, u_char *gpcntl)
static void S24C16_read_byte(struct sym_device *np, u_char *read_data, u_char ack_data,
u_char *gpreg, u_char *gpcntl)
static int sym_write_S24C16_nvram(struct sym_device *np, int offset,
u_char *data, int len)
static int sym_read_S24C16_nvram(struct sym_device *np, int offset, u_char *data, int len)
#undef SET_BIT
#undef CLR_BIT
#undef SET_CLK
#undef CLR_CLK
static int sym_read_Symbios_nvram(struct sym_device *np, Symbios_nvram *nvram)
static void T93C46_Clk(struct sym_device *np, u_char *gpreg)
static void T93C46_Read_Bit(struct sym_device *np, u_char *read_bit, u_char *gpreg)
static void T93C46_Write_Bit(struct sym_device *np, u_char write_bit, u_char *gpreg)
static void T93C46_Stop(struct sym_device *np, u_char *gpreg)
static void T93C46_Send_Command(struct sym_device *np, u_short write_data,
u_char *read_bit, u_char *gpreg)
static void T93C46_Read_Word(struct sym_device *np,
unsigned short *nvram_data, unsigned char *gpreg)
static int T93C46_Read_Data(struct sym_device *np, unsigned short *data,
int len, unsigned char *gpreg)
static int sym_read_T93C46_nvram(struct sym_device *np, Tekram_nvram *nvram)
static int sym_read_Tekram_nvram (struct sym_device *np, Tekram_nvram *nvram)
static int sym_read_parisc_pdc(struct sym_device *np, struct pdc_initiator *pdc)
static inline int sym_read_parisc_pdc(struct sym_device *np,
struct pdc_initiator *x)
int sym_read_nvram(struct sym_device *np, struct sym_nvram *nvp)
char *sym_nvram_type(struct sym_nvram *nvp)
