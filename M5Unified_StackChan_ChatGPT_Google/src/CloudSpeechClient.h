#ifndef _CLOUDSPEECHCLIENT_H
#define _CLOUDSPEECHCLIENT_H
#include "Audio.h"

class CloudSpeechClient {
public:
  CloudSpeechClient();
  ~CloudSpeechClient();
  String Transcribe(Audio* audio);
};

#endif // _CLOUDSPEECHCLIENT_H

