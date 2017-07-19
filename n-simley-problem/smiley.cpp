/*
given a number N you need to find the minimum number of copy, paste
operations required to produce N smileys from 1 initial smiley.

11 -> 11
6 -> 5
4 -> 4
*/

#include <bits/stdc++.h>
using namespace std;

int count(int n) {
  int flag = 1;
  for (int i = 2; i < sqrt(n); ++i) {
    if (n % i == 0)
      flag = 0;
  }

  if (flag)
    return n;

  int lar_fact = 0;
  for (int i = n/2; i > 0; --i) {
    if (n % i == 0) {
      lar_fact = i;
      break;
    }
  }

  return (n/lar_fact) + count(lar_fact);
}


int main() {
  int n;
  cin >> n;

  cout << count(n);
  return 0;
}
