// Copyright 2022 CSCE240
//

#include <lecture9/inc/series.h>

std::ostream& csce240::operator<<(std::ostream& lhs,
                                  const csce240::Series& rhs) {
  return rhs.Extract(&lhs);
}
