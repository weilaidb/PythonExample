static int RIOCheckIsolated(struct rio_info *, struct Host *, unsigned int);
static int RIOIsolate(struct rio_info *, struct Host *, unsigned int);
static int RIOCheck(struct Host *, unsigned int);
static void RIOConCon(struct rio_info *, struct Host *, unsigned int, unsigned int, unsigned int, unsigned int, int);
int RIORouteRup(struct rio_info *p, unsigned int Rup, struct Host *HostP, struct PKT __iomem * PacketP)
void RIOFixPhbs(struct rio_info *p, struct Host *HostP, unsigned int unit)
static int RIOCheckIsolated(struct rio_info *p, struct Host *HostP, unsigned int UnitId)
static int RIOIsolate(struct rio_info *p, struct Host *HostP, unsigned int UnitId)
static int RIOCheck(struct Host *HostP, unsigned int UnitId)
unsigned int GetUnitType(unsigned int Uniq)
int RIOSetChange(struct rio_info *p)
static void RIOConCon(struct rio_info *p,
struct Host *HostP,
unsigned int FromId,
unsigned int FromLink,
unsigned int ToId,
unsigned int ToLink,
int Change)
static int RIORemoveFromSavedTable(struct rio_info *p, struct Map *pMap)
static int RIOFreeDisconnected(struct rio_info *p, struct Host *HostP, int unit)
int RIOFindFreeID(struct rio_info *p, struct Host *HostP, unsigned int * pID1, unsigned int * pID2)
