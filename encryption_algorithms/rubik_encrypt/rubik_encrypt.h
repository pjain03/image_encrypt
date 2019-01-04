/**
 * Author: Satvik Sethia
 * 01/03/2019
 *
 * Header file for the implementation of an encryption algorithm based on 
 * the Rubik's Cube principle, as described in
 * https://www.hindawi.com/journals/jece/2012/173931/.
 */
#ifndef RUBIK_ENCRYPT
#define RUBIK_ENCRYPT

#include <vector>

using std::vector;

namespace rubik {
  vector<vector<int>> * RubikEncrypt(vector<vector<int>> *&, int);
  vector<vector<int>> * RubikDecrypt(vector<vector<int>> *&, int);

  vector<int> * InitRotationLists(vector<int> &, int, long);
  // long ListSum(vector<int> &);
} 

#endif  // RUBIK_ENCRYPT