static const char ID_sccs[] = "@(#)drvfbi.c	1.63 99/02/11 (C) SK " ;
#define PC8_ACTIVE	8
#define	LED_Y_ON	0x11
#define	LED_Y_OFF	0x10
#define MS2BCLK(x)	((x)*12500L)
const u_char oem_id[] = "xPOS_ID:xxxx" ;
const u_char oem_id[] = OEM_ID ;
#define	ID_BYTE0	8
#define	OEMID(smc,i)	oem_id[ID_BYTE0 + i]
const struct s_oem_ids oem_ids[] = ;
#define	OEMID(smc,i)	smc->hw.oem_id->oi_id[i]
extern int AIX_vpdReadByte() ;
static void smt_stop_watchdog(struct s_smc *smc);
static void card_start(struct s_smc *smc)
void card_stop(struct s_smc *smc)
void mac1_irq(struct s_smc *smc, u_short stu, u_short stl)
void plc1_irq(struct s_smc *smc)
void plc2_irq(struct s_smc *smc)
void timer_irq(struct s_smc *smc)
int pcm_get_s_port(struct s_smc *smc)
#define STATION_LABEL_CONNECTOR_OFFSET	5
#define STATION_LABEL_PMD_OFFSET	6
#define STATION_LABEL_PORT_OFFSET	7
void read_address(struct s_smc *smc, u_char *mac_addr)
void init_board(struct s_smc *smc, u_char *mac_addr)
void sm_pm_bypass_req(struct s_smc *smc, int mode)
int sm_pm_bypass_present(struct s_smc *smc)
void plc_clear_irq(struct s_smc *smc, int p)
static void led_indication(struct s_smc *smc, int led_event)
void pcm_state_change(struct s_smc *smc, int plc, int p_state)
void rmt_indication(struct s_smc *smc, int i)
void llc_recover_tx(struct s_smc *smc)
static int is_equal_num(char comp1[], char comp2[], int num)
int set_oi_id_def(struct s_smc *smc)
void driver_get_bia(struct s_smc *smc, struct fddi_addr *bia_addr)
void smt_start_watchdog(struct s_smc *smc)
static void smt_stop_watchdog(struct s_smc *smc)
void mac_do_pci_fix(struct s_smc *smc)
