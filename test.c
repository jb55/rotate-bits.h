
#include <assert.h>
#include "rotate-bits.h"
#include "tap.c/tap.h"

int main (void) {
  plan(16);

  ok(ROTL8(10, 1) == 20, "ROTL8 by 1 multiplies by 2");
  ok(ROTL8(0x80, 1) == 1, "ROTL8 highest bit by 1 wraps to 1");
  ok(ROTL8(0xFF, 1) == 0xFF, "ROTL8 all bits is identity");
  ok(ROTR8(1, 1) == 0x80, "ROTR8 lowest bit by 1 wraps to highest bit");

  ok(ROTL16(10, 1) == 20, "ROTL16 left once multiplies by 2");
  ok(ROTL16(0x8000, 1) == 1, "ROTL16 highest bit by 1 wraps to 1");
  ok(ROTL16(0xFFFF, 1) == 0xFFFF, "ROTL16 all bits is identity");
  ok(ROTR16(1, 1) == 0x8000, "ROTR16 lowest bit by 1 wraps to highest bit");

  ok(ROTL32(10, 1) == 20, "ROTL32 left once multiplies by 2");
  ok(ROTL32((1 << 31), 1) == 1, "ROTL32 highest bit by 1 wraps to 1");
  ok(ROTL32(0xFFFFFFFF, 1) == 0xFFFFFFFF, "ROTL32 all bits is identity");
  ok(ROTR32(1, 1) == 0x80000000, "ROTR32 lowest bit by 1 wraps to highest bit");

  ok(ROTL64(10, 1) == 20, "ROTL64 left once multiplies by 2");
  ok(ROTL64(0x8000000000000000, 1) == 1, "ROTL64 highest bit by 1 wraps to 1");
  ok(ROTL64(0xFFFFFFFFFFFFFFFF, 1) == 0xFFFFFFFFFFFFFFFF, "ROTL64 all bits is identity");
  ok(ROTR64(1, 1) == 0x8000000000000000, "ROTR64 lowest bit by 1 wraps to highest bit %d", ROTR64(1,1));

  done_testing();
}
