#define CTATC_H
enum CTALSADEVS ;
struct ct_atc_chip_sub_details ;
struct ct_atc_chip_details ;
struct ct_atc;
struct ct_timer;
struct ct_timer_instance;
struct ct_atc_pcm ;
struct ct_atc ;
int __devinit ct_atc_create(struct snd_card *card, struct pci_dev *pci,
unsigned int rsr, unsigned int msr, int chip_type,
unsigned int subsysid, struct ct_atc **ratc);
int __devinit ct_atc_create_alsa_devs(struct ct_atc *atc);
