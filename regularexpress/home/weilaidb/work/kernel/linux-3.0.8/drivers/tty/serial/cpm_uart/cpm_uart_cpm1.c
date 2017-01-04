void cpm_line_cr_cmd(struct uart_cpm_port *port, int cmd)
void __iomem *cpm_uart_map_pram(struct uart_cpm_port *port,
struct device_node *np)
void cpm_uart_unmap_pram(struct uart_cpm_port *port, void __iomem *pram)
int cpm_uart_allocbuf(struct uart_cpm_port *pinfo, unsigned int is_con)
void cpm_uart_freebuf(struct uart_cpm_port *pinfo)
