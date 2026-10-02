
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 520
#define NOTE_D5 580
#define NOTE_E5 659
#define NOTE_F5 699
#define NOTE_G5 784
#define NOTE_A5 880
#define NOTE_B5 988

struct Tone {
    int frequency;
    int duration;
    int delay;
};
void playTones();
void initSoundSetup();
void soundsLoop();
