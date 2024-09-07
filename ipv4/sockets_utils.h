#include "stdint.h"
#include "arpa/inet.h"

struct internet_addr{
    uint32_t addr; // ipv4 address
};

struct sockaddr_internet {
    short int                sin_family;  // Address family, AF_INET
    unsigned short int       sin_port;    // Port number
    struct internet_addr     sin_addr;    // Internet address
    unsigned char            sin_zero[8]; // Same size as struct sockaddr
};

