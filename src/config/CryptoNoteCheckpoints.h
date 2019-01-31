// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
    //{ 1000, "aabaf400994cdefbd1f35557369d7de4304593e018bfdb77b42531a8d82321eb"}, // 1K
    { 15502, "6c2f1b32d04b5d14bdb238f74e44336e48ca16bfb212977d029e217fa4a9cab3"}, // Constella UPDATE
    { 17938, "56b49102f696c2384be9045812c3844b81e6ebb09afd14fb5f3d21b891ec2bc1"},
    { 17939, "ed94c09d780e2001deec7f4adc5622fe18e66781ab3b0a8ca74442619aa7b76a"},
    { 17940, "3ebcc5c50821b44ef2815ff421ff139182ad3935233637767a9d601d477c8c6f"},
    { 173702, "23f51f7b44f8a7c2b725881fab839e795dcc3ac077b5a309bf9284be91ff69ab"}, //patch but doens't work
    { 174550 , "fea3820f39ec24270806e069052afcb0f3c4af852df41536649579be0cfbff0f" } //Last patch fix stuck
};
}
