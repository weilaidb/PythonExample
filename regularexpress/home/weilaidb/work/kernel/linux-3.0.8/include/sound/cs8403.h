#define __SOUND_CS8403_H
#define SND_CS8403_DECL static
#define SND_CS8403_DECODE snd_cs8403_decode_spdif_bits
#define SND_CS8403_ENCODE snd_cs8403_encode_spdif_bits
SND_CS8403_DECL void SND_CS8403_DECODE(struct snd_aes_iec958 *diga, unsigned char bits)
SND_CS8403_DECL unsigned char SND_CS8403_ENCODE(struct snd_aes_iec958 *diga)
#define SND_CS8404_DECL static
#define SND_CS8404_DECODE snd_cs8404_decode_spdif_bits
#define SND_CS8404_ENCODE snd_cs8404_encode_spdif_bits
SND_CS8404_DECL void SND_CS8404_DECODE(struct snd_aes_iec958 *diga, unsigned char bits)
SND_CS8404_DECL unsigned char SND_CS8404_ENCODE(struct snd_aes_iec958 *diga)
