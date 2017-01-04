const unsigned long sh_io_port_base __read_mostly = -1;
EXPORT_SYMBOL(sh_io_port_base);
void __iomem *__ioport_map(unsigned long addr, unsigned int size)
EXPORT_SYMBOL(__ioport_map);
void __iomem *ioport_map(unsigned long port, unsigned int nr)
EXPORT_SYMBOL(ioport_map);
void ioport_unmap(void __iomem *addr)
EXPORT_SYMBOL(ioport_unmap);
