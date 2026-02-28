// Copyright 2022 NNTU-CS
#include "alg.h"
#include <math.h>
#include <cstdint>


bool checkPrime(uint64_t value) {
  for (uint64_t i = 2; i <= pow(value, 0.5); i++) {
    if ((value % i) == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t check = 0, i = 1;
  while (check != n) {
	  i++;
	  if (checkPrime(i)) check++;
  }
  return i;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t i = value + 1;
  while (!checkPrime(i))
	  i++;
  return i;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t summa = 0;
  for (uint64_t i = 2; i < hbound; i++) {
	  if (checkPrime(i)) summa += i;
  }
  return summa;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  uint64_t kolvo = 0, i;
  for (i = lbound; i < hbound; i++) {
	  if (checkPrime(i) && checkPrime(i + 2)) {
		  kolvo++;
	  }
  }
  return kolvo;
}
