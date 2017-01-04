void xgifb_reg_set(unsigned long port, u8 index, u8 data)
u8 xgifb_reg_get(unsigned long port, u8 index)
void xgifb_reg_and_or(unsigned long port, u8 index,
unsigned data_and, unsigned data_or)
void xgifb_reg_and(unsigned long port, u8 index, unsigned data_and)
void xgifb_reg_or(unsigned long port, u8 index, unsigned data_or)
