#ifndef SPEECHTOTEXTCLIENT_H_
#define SPEECHTOTEXTCLIENT_H_

#include <Avatar.h>

class ISpeechToTextClient {
 public:
  virtual ~ISpeechToTextClient() = default;
  virtual String Transcribe(m5avatar::Avatar& avatar) = 0;
};

#endif  // SPEECHTOTEXTCLIENT_H_
