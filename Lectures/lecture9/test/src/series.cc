// Copyright 2022 CSCE 240
//

#include <lecture9/test/inc/series.h>


const csce240::Series& LoadSeries(csce240::Series* series) {
  const size_t *end = kIndices + sizeof(kIndices) / sizeof(size_t);

  for (const size_t *itr = kIndices; itr != end; ++itr)
    series->Push(*itr);

  return *series;
}


int main(int argc, char* argv[]) {
  csce240::Queue queue;
  LoadSeries(&queue);
  std::cout << queue << std::endl;

  csce240::Stack stack;
  LoadSeries(&stack);
  std::cout << stack << std::endl;

  return 0;
}
