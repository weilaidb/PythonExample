#define XmlRole_INCLUDED 1
#define XmlPrologStateInitExternalEntity    XmlPrologStateInitExternalEnt
enum ;
typedef struct prolog_state  PROLOG_STATE;
void XmlPrologStateInit(PROLOG_STATE *);
void XmlPrologStateInitExternalEntity(PROLOG_STATE *);
#define XmlTokenRole(state, tok, ptr, end, enc) \
(((state)->handler)(state, tok, ptr, end, enc))
