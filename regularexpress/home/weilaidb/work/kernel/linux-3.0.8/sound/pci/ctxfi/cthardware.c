int __devinit create_hw_obj(struct pci_dev *pci, enum CHIPTYP chip_type,
enum CTCARDS model, struct hw **rhw)
int destroy_hw_obj(struct hw *hw)
unsigned int get_field(unsigned int data, unsigned int field)
void set_field(unsigned int *data, unsigned int field, unsigned int value)
