static int RIOBootComplete(struct rio_info *p, struct Host *HostP, unsigned int Rup, struct PktCmd __iomem *PktCmdP);
static const unsigned char RIOAtVec2Ctrl[] = ;
int RIOBootCodeRTA(struct rio_info *p, struct DownLoad * rbp)
void rio_start_card_running(struct Host *HostP)
int RIOBootCodeHOST(struct rio_info *p, struct DownLoad *rbp)
int RIOBootRup(struct rio_info *p, unsigned int Rup, struct Host *HostP, struct PKT __iomem *PacketP)
static int RIOBootComplete(struct rio_info *p, struct Host *HostP, unsigned int Rup, struct PktCmd __iomem *PktCmdP)
int RIOBootOk(struct rio_info *p, struct Host *HostP, unsigned long RtaUniq)
void rio_fill_host_slot(int entry, int entry2, unsigned int rta_uniq, struct Host *host)
