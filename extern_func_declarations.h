// All functions ===============================================
// Functions of the 'random_generator' header
unsigned long int rdtsc();
void startRNG();
void stopRNG();

// Functions of this header =====================================
double deltaE(struct lattice_position pos, short **lattice);
double sum(double *arr, unsigned int lenght);
short spinFlipped(struct lattice_position pos, short ***lattice);
void raffleRandomPosition(struct lattice_position *pos);
void transientFloatSpins(short ***lattice, unsigned int size);
void adjustObservables(struct type_observables *obsrv, struct lattice_position posFlip, short **lattice);
void initialize(short ***lattice, unsigned int n);
double totalEnergy(short **lattice);
// ===============================================================
