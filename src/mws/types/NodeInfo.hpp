/*

Copyright (C) 2010-2013 KWARC Group <kwarc.info>

This file is part of MathWebSearch.

MathWebSearch is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

MathWebSearch is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with MathWebSearch.  If not, see <http://www.gnu.org/licenses/>.

*/
#ifndef _MWS_TYPES_NODEINFO_HPP
#define _MWS_TYPES_NODEINFO_HPP

/**
  * @brief  File containing type declarations for NodeInfo
  * @file   NodeInfo.hpp
  * @author Corneliu-Claudiu Prodescu <c.prodescu@jacobs-university.de>
  * @date   07 Jul 2011
  *
  * License: GPL v3
  *
  */

// System includes

#include <stdint.h>                    // ISO C standard integer types
#include <string>                      // C++ string headers
#include <utility>                     // STL utility headers (std::pair)

// Local includes

namespace mws {
namespace types {

struct CrawlData {
    std::string expressionUri;
    std::string data;
};

}  // namespace types
}  // namespace mws

namespace mws {

// Typedefs

/// Type of the node meaning
typedef std::string Meaning;

/// Type of the node meaning encoding
typedef uint32_t    MeaningId;

/// Type of the node arity
typedef uint8_t     Arity;

/// Type of the node info
typedef std::pair<MeaningId, Arity> NodeInfo;

typedef uint32_t    FormulaId;  ///< Formula Id corresponding to a leaf node

typedef uint32_t    CrawlId;     ///< Crawled data Id

typedef std::string FormulaPath; ///< Path of the formula within a crawl data

// Constants
const Meaning   MWS_QVAR_MEANING       = "mws:qvar";

const MeaningId MWS_MEANING_ID_QVAR    = 0;
const MeaningId MWS_MEANING_ID_UNKNOWN = 1;
const MeaningId MWS_MEANING_ID_START   = 2;

const MeaningId MWS_URLMEANING_ID_START = 0;

const Meaning MWS_URLMEANING_NO_URL       = "";

}

#endif // _MWS_TYPES_NODEINFO_HPP
