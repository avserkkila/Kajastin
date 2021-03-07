#ifndef __MUISTIN_JAKO__
#define __MUISTIN_JAKO__

#define PROJ_ID 55
#define SHM_KOKO 2048

enum viesti_e {
  anna_sekoitus = 1,
  tarkastelee,
  ratkaisee
};

typedef struct {
  enum viesti_e viesti;
  char data[SHM_KOKO];
} shmRak_s;

shmRak_s* liity_muistiin();

#endif
