#define B43_PCMCIA_H_
int b43_pcmcia_init(void);
void b43_pcmcia_exit(void);
static inline int b43_pcmcia_init(void)
static inline void b43_pcmcia_exit(void)
