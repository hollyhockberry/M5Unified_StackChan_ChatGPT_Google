#ifndef _CLOUDSPEECHCLIENT_H
#define _CLOUDSPEECHCLIENT_H

#include <Avatar.h>

class CloudSpeechClient {
public:
  CloudSpeechClient();
  ~CloudSpeechClient();
  String Transcribe(m5avatar::Avatar& avatar);
};

#endif // _CLOUDSPEECHCLIENT_H

