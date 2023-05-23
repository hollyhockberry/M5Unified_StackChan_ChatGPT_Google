#ifndef _CLOUDSPEECHCLIENT_H
#define _CLOUDSPEECHCLIENT_H

#include "SpeechToTextClient.h"

class CloudSpeechClient : public ISpeechToTextClient {
public:
  CloudSpeechClient();
  String Transcribe(m5avatar::Avatar& avatar) override;
};

#endif // _CLOUDSPEECHCLIENT_H

