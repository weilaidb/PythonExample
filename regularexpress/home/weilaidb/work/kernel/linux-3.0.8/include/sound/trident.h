#define __SOUND_TRIDENT_H
#define TRIDENT_DEVICE_ID_DX		((PCI_VENDOR_ID_TRIDENT<<16)|PCI_DEVICE_ID_TRIDENT_4DWAVE_DX)
#define TRIDENT_DEVICE_ID_NX		((PCI_VENDOR_ID_TRIDENT<<16)|PCI_DEVICE_ID_TRIDENT_4DWAVE_NX)
#define TRIDENT_DEVICE_ID_SI7018	((PCI_VENDOR_ID_SI<<16)|PCI_DEVICE_ID_SI_7018)
#define SNDRV_TRIDENT_VOICE_TYPE_PCM		0
#define SNDRV_TRIDENT_VOICE_TYPE_SYNTH		1
#define SNDRV_TRIDENT_VOICE_TYPE_MIDI		2
#define SNDRV_TRIDENT_VFLG_RUNNING		(1<<0)
#define SNDRV_TRIDENT_PAGE_SIZE			4096
#define SNDRV_TRIDENT_PAGE_SHIFT			12
#define SNDRV_TRIDENT_PAGE_MASK			((1<<SNDRV_TRIDENT_PAGE_SHIFT)-1)
#define SNDRV_TRIDENT_MAX_PAGES			4096
#define TRID_REG(trident, x) ((trident)->port + (x))
#define ID_4DWAVE_DX        0x2000
#define ID_4DWAVE_NX        0x2001
#define T4D_BANK_A	0
#define T4D_BANK_B	1
#define T4D_NUM_BANKS	2
enum global_control_bits ;
enum miscint_bits ;
#define LEGACY_DMAR0                0x00
#define LEGACY_DMAR4                0x04
#define LEGACY_DMAR6		    0x06
#define LEGACY_DMAR11               0x0b
#define LEGACY_DMAR15               0x0f
#define T4D_START_A		     0x80
#define T4D_STOP_A		     0x84
#define T4D_DLY_A		     0x88
#define T4D_SIGN_CSO_A		     0x8c
#define T4D_CSPF_A		     0x90
#define T4D_CSPF_B		     0xbc
#define T4D_CEBC_A		     0x94
#define T4D_AINT_A		     0x98
#define T4D_AINTEN_A		     0x9c
#define T4D_LFO_GC_CIR               0xa0
#define T4D_MUSICVOL_WAVEVOL         0xa8
#define T4D_SBDELTA_DELTA_R          0xac
#define T4D_MISCINT                  0xb0
#define T4D_START_B                  0xb4
#define T4D_STOP_B                   0xb8
#define T4D_SBBL_SBCL                0xc0
#define T4D_SBCTRL_SBE2R_SBDD        0xc4
#define T4D_STIMER		     0xc8
#define T4D_AINT_B                   0xd8
#define T4D_AINTEN_B                 0xdc
#define T4D_RCI                      0x70
#define T4D_MPU401_BASE             0x20
#define T4D_MPUR0                   0x20
#define T4D_MPUR1                   0x21
#define T4D_MPUR2                   0x22
#define T4D_MPUR3                   0x23
#define NX_SPCTRL_SPCSO             0x24
#define NX_SPLBA                    0x28
#define NX_SPESO                    0x2c
#define NX_SPCSTATUS                0x64
#define GAMEPORT_GCR                0x30
#define GAMEPORT_MODE_ADC           0x80
#define GAMEPORT_LEGACY             0x31
#define GAMEPORT_AXES               0x34
#define NX_TLBC                     0x6c
#define CH_START		    0xe0
#define CH_DX_CSO_ALPHA_FMS         0xe0
#define CH_DX_ESO_DELTA             0xe8
#define CH_DX_FMC_RVOL_CVOL         0xec
#define CH_NX_DELTA_CSO             0xe0
#define CH_NX_DELTA_ESO             0xe8
#define CH_NX_ALPHA_FMS_FMC_RVOL_CVOL 0xec
#define CH_LBA                      0xe4
#define CH_GVSEL_PAN_VOL_CTRL_EC    0xf0
#define CH_EBUF1                    0xf4
#define CH_EBUF2                    0xf8
#define DX_ACR0_AC97_W              0x40
#define DX_ACR1_AC97_R              0x44
#define DX_ACR2_AC97_COM_STAT       0x48
#define NX_ACR0_AC97_COM_STAT       0x40
#define NX_ACR1_AC97_W              0x44
#define NX_ACR2_AC97_R_PRIMARY      0x48
#define NX_ACR3_AC97_R_SECONDARY    0x4c
#define SI_AC97_WRITE		    0x40
#define SI_AC97_READ		    0x44
#define SI_SERIAL_INTF_CTRL	    0x48
#define SI_AC97_GPIO		    0x4c
#define SI_ASR0			    0x50
#define SI_SPDIF_CS		    0x70
#define SI_GPIO			    0x7c
enum trident_nx_ac97_bits ;
enum trident_dx_ac97_bits ;
enum sis7018_ac97_bits ;
enum serial_intf_ctrl_bits ;
#define T4D_DEFAULT_PCM_VOL	10
#define T4D_DEFAULT_PCM_PAN	0
#define T4D_DEFAULT_PCM_RVOL	127
#define T4D_DEFAULT_PCM_CVOL	127
struct snd_trident;
struct snd_trident_voice;
struct snd_trident_pcm_mixer;
struct snd_trident_port ;
struct snd_trident_memblk_arg ;
struct snd_trident_tlb ;
struct snd_trident_voice ;
struct snd_4dwave ;
struct snd_trident_pcm_mixer ;
struct snd_trident ;
int snd_trident_create(struct snd_card *card,
struct pci_dev *pci,
int pcm_streams,
int pcm_spdif_device,
int max_wavetable_size,
struct snd_trident ** rtrident);
int snd_trident_create_gameport(struct snd_trident *trident);
int snd_trident_pcm(struct snd_trident * trident, int device, struct snd_pcm **rpcm);
int snd_trident_foldback_pcm(struct snd_trident * trident, int device, struct snd_pcm **rpcm);
int snd_trident_spdif_pcm(struct snd_trident * trident, int device, struct snd_pcm **rpcm);
int snd_trident_attach_synthesizer(struct snd_trident * trident);
struct snd_trident_voice *snd_trident_alloc_voice(struct snd_trident * trident, int type,
int client, int port);
void snd_trident_free_voice(struct snd_trident * trident, struct snd_trident_voice *voice);
void snd_trident_start_voice(struct snd_trident * trident, unsigned int voice);
void snd_trident_stop_voice(struct snd_trident * trident, unsigned int voice);
void snd_trident_write_voice_regs(struct snd_trident * trident, struct snd_trident_voice *voice);
int snd_trident_suspend(struct pci_dev *pci, pm_message_t state);
int snd_trident_resume(struct pci_dev *pci);
struct snd_util_memblk *snd_trident_alloc_pages(struct snd_trident *trident,
struct snd_pcm_substream *substream);
int snd_trident_free_pages(struct snd_trident *trident, struct snd_util_memblk *blk);
struct snd_util_memblk *snd_trident_synth_alloc(struct snd_trident *trident, unsigned int size);
int snd_trident_synth_free(struct snd_trident *trident, struct snd_util_memblk *blk);
int snd_trident_synth_copy_from_user(struct snd_trident *trident, struct snd_util_memblk *blk,
int offset, const char __user *data, int size);
