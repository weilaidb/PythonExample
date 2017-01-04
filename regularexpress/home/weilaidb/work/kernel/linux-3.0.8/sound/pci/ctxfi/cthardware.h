#define CTHARDWARE_H
enum CHIPTYP ;
enum CTCARDS ;
enum ADCSRC;
struct card_conf ;
struct hw ;
int create_hw_obj(struct pci_dev *pci, enum CHIPTYP chip_type,
enum CTCARDS model, struct hw **rhw);
int destroy_hw_obj(struct hw *hw);
unsigned int get_field(unsigned int data, unsigned int field);
void set_field(unsigned int *data, unsigned int field, unsigned int value);
#define	PLL_INT		(1 << 10)
#define FI_INT		(1 << 9)
#define IT_INT		(1 << 8)
#define PCI_INT		(1 << 7)
#define URT_INT		(1 << 6)
#define GPI_INT		(1 << 5)
#define MIX_INT		(1 << 4)
#define DAI_INT		(1 << 3)
#define TP_INT		(1 << 2)
#define DSP_INT		(1 << 1)
#define SRC_INT		(1 << 0)
