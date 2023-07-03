#include "nth_prime.h"

#include <algorithm>
#include <list>
#include <stdexcept>

#include <iostream>

using namespace std;

namespace nth_prime
{
    int nth(int n)
    {
        if (n <= 0)
            throw domain_error("");

        int number = 1;
        list<int> primes;

        do
        {
            number++;
            bool prime = true;
            for (int i : primes)
            {
                if (number % i == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (prime)
            {
                for (int i = max(primes.back(), 1) + 1; i < number; i++)
                {
                    if (number % i == 0)
                    {
                        prime = false;
                        break;
                    }
                }
            }
            if (prime)
                primes.push_back(number);
        } while (primes.size() < (unsigned long)n);
        return number;
    }
} // namespace nth_prime
