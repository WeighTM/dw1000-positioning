#ifndef DEBUG_H
#define DEBUG_H

#if DEBUG
  // Debug through serial communication
  #define PRINT(x)   Serial.print(x)
  #define PRINTLN(x) Serial.println(x)
#else // DEBUG
  // No debug. Print nothing
  #define PRINT(x)
  #define PRINTLN(x)
#endif // DEBUG

#endif /* DEBUG_H */
