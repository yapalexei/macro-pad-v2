#include <TaskScheduler.h>
#include "sounds.h"
Tone tones[] = {
  {NOTE_E5, 100, 150}, {NOTE_E5, 100, 300}, {NOTE_E5, 100, 300}, {NOTE_C5, 130, 100}, {NOTE_E5, 100, 300}, {NOTE_G5, 100, 550},
  // {NOTE_G4, 100, 575},
  // {NOTE_C5, 100, 450}, {NOTE_G4, 100, 400}, {NOTE_E4, 100, 500}, {NOTE_A4, 100, 300}, {NOTE_B4, 80, 330}, {NOTE_AS4, 100, 150}, {NOTE_A4, 100, 300},
  // {NOTE_G4, 100, 200}, {NOTE_E5, 80, 200}, {NOTE_G5, 50, 150}, {NOTE_A5, 100, 300}, {NOTE_F5, 80, 150}, {NOTE_G5, 50, 350}, {NOTE_E5, 80, 300},
  // {NOTE_C5, 80, 150}, {NOTE_D5, 80, 150}, {NOTE_B4, 80, 500}
};

Task playTonesTask(0, TASK_ONCE, &playTones);
Scheduler runner;

void playTones() {
  for (Tone t : tones) {
    tone(26, t.frequency, t.duration);
    delay(t.delay);
  }
}

void initSoundSetup() {
  runner.init();
  runner.addTask(playTonesTask);
  playTonesTask.enable();
}

void soundsLoop() {
  runner.execute();
}