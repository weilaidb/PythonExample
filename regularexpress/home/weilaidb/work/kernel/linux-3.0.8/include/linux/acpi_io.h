#define _ACPI_IO_H_
static inline void __iomem *acpi_os_ioremap(acpi_physical_address phys,
acpi_size size)
void __iomem *acpi_os_get_iomem(acpi_physical_address phys, unsigned int size);
