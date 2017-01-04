#define _NI_LABPC_H
#define EEPROM_SIZE	256
#define NUM_AO_CHAN	2
enum labpc_bustype ;
enum labpc_register_layout ;
enum transfer_type ;
struct labpc_board_struct ;
struct labpc_private ;
int labpc_common_attach(struct comedi_device *dev, unsigned long iobase,
unsigned int irq, unsigned int dma);
int labpc_common_detach(struct comedi_device *dev);
extern const int labpc_1200_is_unipolar[];
extern const int labpc_1200_ai_gain_bits[];
extern const struct comedi_lrange range_labpc_1200_ai;
