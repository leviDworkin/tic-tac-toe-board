#include"IllegalCoordinateException.h"

string IllegalCoordinateException::theCoordinate() const {
  string ans = to_string(c.getX())+","+to_string(c.getY());
  return ans;
}
