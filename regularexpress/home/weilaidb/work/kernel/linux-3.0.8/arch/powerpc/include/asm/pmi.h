#define _POWERPC_PMI_H
#define PMI_TYPE_FREQ_CHANGE	0x01
#define PMI_TYPE_POWER_BUTTON	0x02
#define PMI_READ_TYPE		0
#define PMI_READ_DATA0		1
#define PMI_READ_DATA1		2
#define PMI_READ_DATA2		3
#define PMI_WRITE_TYPE		4
#define PMI_WRITE_DATA0		5
#define PMI_WRITE_DATA1		6
#define PMI_WRITE_DATA2		7
#define PMI_ACK			0x80
#define PMI_TIMEOUT		100
typedef struct  pmi_message_t;
struct pmi_handler ;
int pmi_register_handler(struct pmi_handler *);
void pmi_unregister_handler(struct pmi_handler *);
int pmi_send_message(pmi_message_t);
