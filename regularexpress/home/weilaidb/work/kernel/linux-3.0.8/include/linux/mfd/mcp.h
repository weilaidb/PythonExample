#define MCP_H
struct mcp_ops;
struct mcp ;
struct mcp_ops ;
void mcp_set_telecom_divisor(struct mcp *, unsigned int);
void mcp_set_audio_divisor(struct mcp *, unsigned int);
void mcp_reg_write(struct mcp *, unsigned int, unsigned int);
unsigned int mcp_reg_read(struct mcp *, unsigned int);
void mcp_enable(struct mcp *);
void mcp_disable(struct mcp *);
#define mcp_get_sclk_rate(mcp)	((mcp)->sclk_rate)
struct mcp *mcp_host_alloc(struct device *, size_t);
int mcp_host_register(struct mcp *);
void mcp_host_unregister(struct mcp *);
struct mcp_driver ;
int mcp_driver_register(struct mcp_driver *);
void mcp_driver_unregister(struct mcp_driver *);
#define mcp_get_drvdata(mcp)	dev_get_drvdata(&(mcp)->attached_device)
#define mcp_set_drvdata(mcp,d)	dev_set_drvdata(&(mcp)->attached_device, d)
#define mcp_priv(mcp)		((void *)((mcp)+1))
