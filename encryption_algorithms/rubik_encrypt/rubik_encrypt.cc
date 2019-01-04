/**
 * Author: Satvik Sethia
 * 01/03/2019
 *
 * Implementation of an encryption algorithm based on 
 * the Rubik's Cube principle, as described in
 * https://www.hindawi.com/journals/jece/2012/173931/.
 */
#include "rubik_encrypt.h"
#include <stdlib.h>
#include <math.h>

/*
 * The default max iterations/rotations, or the number of times the algorithm
 * is applied to the image.
*/
const int kDefaultIterMax = 1;

/**
 * Receives the image to encrypt using the Rubik's Cube principle.
 * 
 * @param base_image The image to encrypt
 * @param iter_max The number of iterations or rotations
 * 
 * @return the resulting encrypted image
 * 
*/
vector<vector<int>> * rubik::RubikEncrypt(vector<vector<int>> *& base_image, 
                                           int iter_max = kDefaultIterMax) {
  int rows = base_image->size();
  int cols = base_image->at(0).size();

  long total_elements = rows * cols;
  long k_upper = pow(2, total_elements) - 1;

  vector<int> k_row, k_col;
  InitRotationLists(k_row, rows, k_upper);
  InitRotationLists(k_col, cols, k_upper);

  int iter = 0;
  while (iter < iter_max) {
    iter++;

    for (int i = 0; i < rows; i++) {
      long row_sum = 0;
      for (int elem : base_image->at(i)) {
        row_sum += elem;
      }
      bool shift = row_sum % 2;

      //TODO circular shift rows
    }
    
    for (int j = 0; j < cols; j++) {
      long col_sum = 0;
      for (int i = 0; i < rows; i++) {
        col_sum += base_image->at(i).at(j);
      }
      bool shift = col_sum % 2;
    }
  }
}

/**
 * Receives an encrypted image and decrypts it using the Rubik's Cube principle.
 * 
 * @param base_image The image to decrypt
 * @param iter_max The number of iterations or rotations used in encryption
 * 
 * @return the resulting decrypted image
 * 
*/
vector<vector<int>> * rubik::RubikDecrypt(vector<vector<int>> *& 
                                           encrypted_image, int iter) {}

/**
 * Populates the rotation lists.
 * 
 * @param k the list to populate
 * @param elems the number of elements to add to the list
 * 
 * @return the resulting populated list
 * 
*/
vector<int> * rubik::InitRotationLists(vector<int> & k, int elems, 
                                       long upper_bound) {
  for (int i = 0; i < elems; i++) {
    k.push_back(rand() % upper_bound);
  }
}

// /**
//  * Returns the sum of the elements a list.
//  * 
//  * @param list the list who's sum of elements is to be calculated
//  * 
//  * @return the sum of the elements
//  * 
// */
// long rubik::ListSum(vector<int> & list) {
//   long sum = 0;
//   for (auto elem : list) {
//     sum += elem;
//   }
//   return sum;
// }