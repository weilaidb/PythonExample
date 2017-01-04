#define _LIFEBOOK_H
void lifebook_module_init(void);
int lifebook_detect(struct psmouse *psmouse, bool set_properties);
int lifebook_init(struct psmouse *psmouse);
inline void lifebook_module_init(void)
inline int lifebook_detect(struct psmouse *psmouse, bool set_properties)
inline int lifebook_init(struct psmouse *psmouse)
