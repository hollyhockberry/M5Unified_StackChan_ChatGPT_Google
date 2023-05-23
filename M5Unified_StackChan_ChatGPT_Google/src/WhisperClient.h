#ifndef WHISPERCLIENT_H_
#define WHISPERCLIENT_H_

#include "SpeechToTextClient.h"

class WhisperClient : public ISpeechToTextClient {
public:
  String Transcribe(m5avatar::Avatar& avatar) override;
};

#endif  // WHISPERCLIENT_H_
