struct davinci_soc_info davinci_soc_info;
EXPORT_SYMBOL(davinci_soc_info);
void __iomem *davinci_intc_base;
int davinci_intc_type;
void davinci_get_mac_addr(struct memory_accessor *mem_acc, void *context)
static int __init davinci_init_id(struct davinci_soc_info *soc_info)
void __init davinci_common_init(struct davinci_soc_info *soc_info)
