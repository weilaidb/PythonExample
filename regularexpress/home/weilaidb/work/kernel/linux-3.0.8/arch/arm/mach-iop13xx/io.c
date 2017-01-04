void * __iomem __iop13xx_io(unsigned long io_addr)
EXPORT_SYMBOL(__iop13xx_io);
void * __iomem __iop13xx_ioremap(unsigned long cookie, size_t size,
unsigned int mtype)
EXPORT_SYMBOL(__iop13xx_ioremap);
void __iop13xx_iounmap(void __iomem *addr)
EXPORT_SYMBOL(__iop13xx_iounmap);
