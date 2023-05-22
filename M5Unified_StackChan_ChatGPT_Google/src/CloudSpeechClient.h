#ifndef _CLOUDSPEECHCLIENT_H
#define _CLOUDSPEECHCLIENT_H
#include <WiFiClientSecure.h>
#include "Audio.h"

class CloudSpeechClient {
  WiFiClientSecure client;
  String key;
public:
  CloudSpeechClient(const char* root_ca, const char* api_key);
  ~CloudSpeechClient();
  String Transcribe(Audio* audio);
};

#endif // _CLOUDSPEECHCLIENT_H

