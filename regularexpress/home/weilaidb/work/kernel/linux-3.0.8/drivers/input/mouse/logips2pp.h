#define _LOGIPS2PP_H
int ps2pp_init(struct psmouse *psmouse, bool set_properties);
inline int ps2pp_init(struct psmouse *psmouse, bool set_properties)
