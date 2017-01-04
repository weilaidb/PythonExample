static void pnp_convert_id(char *buf, unsigned short vendor,
unsigned short device)
struct pnp_card *pnp_find_card(unsigned short vendor, unsigned short device,
struct pnp_card *from)
struct pnp_dev *pnp_find_dev(struct pnp_card *card, unsigned short vendor,
unsigned short function, struct pnp_dev *from)
EXPORT_SYMBOL(pnp_find_card);
EXPORT_SYMBOL(pnp_find_dev);
