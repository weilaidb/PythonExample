#define _ALPS_H
struct alps_model_info ;
struct alps_data ;
int alps_detect(struct psmouse *psmouse, bool set_properties);
int alps_init(struct psmouse *psmouse);
inline int alps_detect(struct psmouse *psmouse, bool set_properties)
inline int alps_init(struct psmouse *psmouse)
