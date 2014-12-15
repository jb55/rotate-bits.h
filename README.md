
# rotate-bits.h

  [![Build Status](https://travis-ci.org/jb55/rotate-bits.h.svg)](https://travis-ci.org/jb55/rotate-bits.h)

  ROT{L,R}{8,16,32,64} macros

## Installation

  Install with clib

    $ clib install jb55/rotate-bits.h

## Example

```c
#include "rotate-bits/rotate-bits.h"

int main() {
  unsigned short val = ROTL16(0x8000, 1);
  int tru = val == 1;
}
```

## API

### ROT{L,R}{8,16,32,64}(value, rotateN)

* value: unsigned integer value to rotate

* rotateN: number of bits to rotate by

## License

  Public Domain
