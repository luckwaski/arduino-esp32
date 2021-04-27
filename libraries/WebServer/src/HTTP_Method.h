#ifndef _HTTP_Method_H_
#define _HTTP_Method_H_

typedef enum {
  WS_HTTP_GET     = 0b00000001,
  WS_HTTP_POST    = 0b00000010,
  WS_HTTP_DELETE  = 0b00000100,
  WS_HTTP_PUT     = 0b00001000,
  WS_HTTP_PATCH   = 0b00010000,
  WS_HTTP_HEAD    = 0b00100000,
  WS_HTTP_OPTIONS = 0b01000000,
  WS_HTTP_ANY     = 0b01111111,
} HTTPMethod;

#endif /* _HTTP_Method_H_ */
