union br_ptr ;
void pcireg_control_bit_clr(struct pcibus_info *pcibus_info, u64 bits)
void pcireg_control_bit_set(struct pcibus_info *pcibus_info, u64 bits)
u64 pcireg_tflush_get(struct pcibus_info *pcibus_info)
u64 pcireg_intr_status_get(struct pcibus_info * pcibus_info)
void pcireg_intr_enable_bit_clr(struct pcibus_info *pcibus_info, u64 bits)
void pcireg_intr_enable_bit_set(struct pcibus_info *pcibus_info, u64 bits)
void pcireg_intr_addr_addr_set(struct pcibus_info *pcibus_info, int int_n,
u64 addr)
void pcireg_force_intr_set(struct pcibus_info *pcibus_info, int int_n)
u64 pcireg_wrb_flush_get(struct pcibus_info *pcibus_info, int device)
void pcireg_int_ate_set(struct pcibus_info *pcibus_info, int ate_index,
u64 val)
u64 __iomem *pcireg_int_ate_addr(struct pcibus_info *pcibus_info, int ate_index)
