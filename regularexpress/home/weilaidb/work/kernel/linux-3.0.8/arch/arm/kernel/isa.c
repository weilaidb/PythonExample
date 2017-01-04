static unsigned int isa_membase, isa_portbase, isa_portshift;
static ctl_table ctl_isa_vars[4] = ;
static struct ctl_table_header *isa_sysctl_header;
static ctl_table ctl_isa[2] = ;
static ctl_table ctl_bus[2] = ;
void __init
register_isa_ports(unsigned int membase, unsigned int portbase, unsigned int portshift)
