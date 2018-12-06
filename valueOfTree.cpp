#include <cstddef>
#include <cstdlib>
#include <string>

#include "TreeMap.h"

namespace
{

template <typename K, typename V>
using Map = aisdi::TreeMap<K, V>;
} // namespace

int main(int argc, char** argv)
{
  Map<long int, int> mapa;
  for(long int i = 0; i <= 10000000; i++)
  {
    mapa[i] = i;
  }
  for(long int i = 10000000; i >= 0; i--)
  {
    mapa.valueOf(i);
  }

  return 0;
}


