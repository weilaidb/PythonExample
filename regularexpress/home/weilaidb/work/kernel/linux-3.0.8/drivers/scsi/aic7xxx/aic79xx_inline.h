#define _AIC79XX_INLINE_H_
static inline char *ahd_name(struct ahd_softc *ahd);
static inline char *ahd_name(struct ahd_softc *ahd)
static inline void ahd_known_modes(struct ahd_softc *ahd,
ahd_mode src, ahd_mode dst);
static inline ahd_mode_state ahd_build_mode_state(struct ahd_softc *ahd,
ahd_mode src,
ahd_mode dst);
static inline void ahd_extract_mode_state(struct ahd_softc *ahd,
ahd_mode_state state,
ahd_mode *src, ahd_mode *dst);
void ahd_set_modes(struct ahd_softc *ahd, ahd_mode src,
ahd_mode dst);
ahd_mode_state ahd_save_modes(struct ahd_softc *ahd);
void ahd_restore_modes(struct ahd_softc *ahd,
ahd_mode_state state);
int  ahd_is_paused(struct ahd_softc *ahd);
void ahd_pause(struct ahd_softc *ahd);
void ahd_unpause(struct ahd_softc *ahd);
static inline void
ahd_known_modes(struct ahd_softc *ahd, ahd_mode src, ahd_mode dst)
static inline ahd_mode_state
ahd_build_mode_state(struct ahd_softc *ahd, ahd_mode src, ahd_mode dst)
static inline void
ahd_extract_mode_state(struct ahd_softc *ahd, ahd_mode_state state,
ahd_mode *src, ahd_mode *dst)
void	*ahd_sg_setup(struct ahd_softc *ahd, struct scb *scb,
void *sgptr, dma_addr_t addr,
bus_size_t len, int last);
static inline size_t	ahd_sg_size(struct ahd_softc *ahd);
void	ahd_sync_sglist(struct ahd_softc *ahd,
struct scb *scb, int op);
static inline size_t ahd_sg_size(struct ahd_softc *ahd)
struct ahd_initiator_tinfo *
ahd_fetch_transinfo(struct ahd_softc *ahd,
char channel, u_int our_id,
u_int remote_id,
struct ahd_tmode_tstate **tstate);
uint16_t
ahd_inw(struct ahd_softc *ahd, u_int port);
void	ahd_outw(struct ahd_softc *ahd, u_int port,
u_int value);
uint32_t
ahd_inl(struct ahd_softc *ahd, u_int port);
void	ahd_outl(struct ahd_softc *ahd, u_int port,
uint32_t value);
uint64_t
ahd_inq(struct ahd_softc *ahd, u_int port);
void	ahd_outq(struct ahd_softc *ahd, u_int port,
uint64_t value);
u_int	ahd_get_scbptr(struct ahd_softc *ahd);
void	ahd_set_scbptr(struct ahd_softc *ahd, u_int scbptr);
u_int	ahd_inb_scbram(struct ahd_softc *ahd, u_int offset);
u_int	ahd_inw_scbram(struct ahd_softc *ahd, u_int offset);
struct scb *
ahd_lookup_scb(struct ahd_softc *ahd, u_int tag);
void	ahd_queue_scb(struct ahd_softc *ahd, struct scb *scb);
static inline uint8_t *ahd_get_sense_buf(struct ahd_softc *ahd,
struct scb *scb);
static inline uint32_t ahd_get_sense_bufaddr(struct ahd_softc *ahd,
struct scb *scb);
static inline uint8_t *
ahd_get_sense_buf(struct ahd_softc *ahd, struct scb *scb)
static inline uint32_t
ahd_get_sense_bufaddr(struct ahd_softc *ahd, struct scb *scb)
int	ahd_intr(struct ahd_softc *ahd);
