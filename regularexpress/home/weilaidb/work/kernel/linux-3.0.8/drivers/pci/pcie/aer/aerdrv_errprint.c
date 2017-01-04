#define AER_AGENT_RECEIVER		0
#define AER_AGENT_REQUESTER		1
#define AER_AGENT_COMPLETER		2
#define AER_AGENT_TRANSMITTER		3
#define AER_AGENT_REQUESTER_MASK(t)	((t == AER_CORRECTABLE) ?	\
0 : (PCI_ERR_UNC_COMP_TIME|PCI_ERR_UNC_UNSUP))
#define AER_AGENT_COMPLETER_MASK(t)	((t == AER_CORRECTABLE) ?	\
0 : PCI_ERR_UNC_COMP_ABORT)
#define AER_AGENT_TRANSMITTER_MASK(t)	((t == AER_CORRECTABLE) ?	\
(PCI_ERR_COR_REP_ROLL|PCI_ERR_COR_REP_TIMER) : 0)
#define AER_GET_AGENT(t, e)						\
((e & AER_AGENT_COMPLETER_MASK(t)) ? AER_AGENT_COMPLETER :	\
(e & AER_AGENT_REQUESTER_MASK(t)) ? AER_AGENT_REQUESTER :	\
(e & AER_AGENT_TRANSMITTER_MASK(t)) ? AER_AGENT_TRANSMITTER :	\
AER_AGENT_RECEIVER)
#define AER_PHYSICAL_LAYER_ERROR	0
#define AER_DATA_LINK_LAYER_ERROR	1
#define AER_TRANSACTION_LAYER_ERROR	2
#define AER_PHYSICAL_LAYER_ERROR_MASK(t) ((t == AER_CORRECTABLE) ?	\
PCI_ERR_COR_RCVR : 0)
#define AER_DATA_LINK_LAYER_ERROR_MASK(t) ((t == AER_CORRECTABLE) ?	\
(PCI_ERR_COR_BAD_TLP|						\
PCI_ERR_COR_BAD_DLLP|						\
PCI_ERR_COR_REP_ROLL|						\
PCI_ERR_COR_REP_TIMER) : PCI_ERR_UNC_DLP)
#define AER_GET_LAYER_ERROR(t, e)					\
((e & AER_PHYSICAL_LAYER_ERROR_MASK(t)) ? AER_PHYSICAL_LAYER_ERROR : \
(e & AER_DATA_LINK_LAYER_ERROR_MASK(t)) ? AER_DATA_LINK_LAYER_ERROR : \
AER_TRANSACTION_LAYER_ERROR)
static const char *aer_error_severity_string[] = ;
static const char *aer_error_layer[] = ;
static const char *aer_correctable_error_string[] = ;
static const char *aer_uncorrectable_error_string[] = ;
static const char *aer_agent_string[] = ;
static void __aer_print_error(const char *prefix,
struct aer_err_info *info)
void aer_print_error(struct pci_dev *dev, struct aer_err_info *info)
void aer_print_port_info(struct pci_dev *dev, struct aer_err_info *info)
static int cper_severity_to_aer(int cper_severity)
void cper_print_aer(const char *prefix, int cper_severity,
struct aer_capability_regs *aer)
