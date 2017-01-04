DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
int mantis_frontend_power(struct mantis_pci *mantis, enum mantis_power power)
EXPORT_SYMBOL_GPL(mantis_frontend_power);
void mantis_frontend_soft_reset(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_frontend_soft_reset);
static int mantis_frontend_shutdown(struct mantis_pci *mantis)
static int mantis_dvb_start_feed(struct dvb_demux_feed *dvbdmxfeed)
static int mantis_dvb_stop_feed(struct dvb_demux_feed *dvbdmxfeed)
int __devinit mantis_dvb_init(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_dvb_init);
int __devexit mantis_dvb_exit(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_dvb_exit);
