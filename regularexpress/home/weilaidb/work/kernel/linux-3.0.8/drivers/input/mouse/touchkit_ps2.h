#define _TOUCHKIT_PS2_H
int touchkit_ps2_detect(struct psmouse *psmouse, bool set_properties);
static inline int touchkit_ps2_detect(struct psmouse *psmouse,
bool set_properties)
