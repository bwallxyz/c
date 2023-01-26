#ifndef BITSET_HPP
#define BITSET_HPP
#include <stdint.h>
#include <stdlib.h>
#include <string>

class Bitset{
public:

  // Default constructor initializes a bitset of 8 = "00000000"
  Bitset();

  // Constructor initializes a set of N bits with all 0s
  Bitset(intmax_t size);

  // Constructor initializes a bitset of length string that is given the value of the string, invalid bitset if the string doe not contains all 1s or 0s
  Bitset(const std::string & value);

  // Default deconstructor.
  ~Bitset();


  //Not copy-assignable or constructable
  Bitset(const Bitset & ) = delete;
  Bitset & operator=(const Bitset &) = delete;

  // Returns size of the bitset
  intmax_t size() const;

  // Returns whether the bitset is valid
  bool good() const;

  // Sets the bit of index "index"
  void set(intmax_t index);

  // Resets the bit of the index "index"
  void reset(intmax_t index);

  // Toggles the bit of the index "index"
  void toggle(intmax_t index);

  // Outputs the value of the indexed bit
  bool test(intmax_t index);

  // Outputs the bitset as a string
  std::string asString() const;
private:
//TODO

};
#endif