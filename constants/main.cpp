#include <iostream>

int main() {
  const int COUNT_DAYS_IN_WEEK = 7;
  const char NEW_LINE = '\n';
  const char TAB = '\t';

   // COUNT_DAYS_IN_WEEK = 13; error: assignment of read-only variable 'COUNT_DAYS_IN_WEEK'

  std::cout << TAB << COUNT_DAYS_IN_WEEK << NEW_LINE;

  return 0;
}