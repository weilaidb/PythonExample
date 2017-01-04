#define _LINUX_OF_PDT_H
struct of_pdt_ops ;
extern void *prom_early_alloc(unsigned long size);
extern void of_pdt_build_devicetree(phandle root_node, struct of_pdt_ops *ops);
extern void (*of_pdt_build_more)(struct device_node *dp,
struct device_node ***nextp);
