typedef int v2si __attribute__((__vector_size__(8)));

v2si
f (int x)
{
  return (v2si) { (__INTPTR_TYPE__) "", x };
}
