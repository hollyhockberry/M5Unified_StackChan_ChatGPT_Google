#ifndef _AUDIO_H
#define _AUDIO_H

#include <Arduino.h>

class Audio {
  byte* record_buffer;
 public:
  Audio();
  ~Audio();

  const byte* GetBuffer() const { return record_buffer; }
  size_t GetSize() const;

  void Record();
};

#endif // _AUDIO_H
