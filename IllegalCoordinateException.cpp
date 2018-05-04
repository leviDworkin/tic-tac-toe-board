#include"IllegalCoordinateException.h"

string IllegalCoordinateException::theCoordinate() const {
  string ans = to_string(x)+","+to_string(y);
  return ans;
}
