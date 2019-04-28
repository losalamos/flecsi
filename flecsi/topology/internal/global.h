/*
    @@@@@@@@  @@           @@@@@@   @@@@@@@@ @@
   /@@/////  /@@          @@////@@ @@////// /@@
   /@@       /@@  @@@@@  @@    // /@@       /@@
   /@@@@@@@  /@@ @@///@@/@@       /@@@@@@@@@/@@
   /@@////   /@@/@@@@@@@/@@       ////////@@/@@
   /@@       /@@/@@//// //@@    @@       /@@/@@
   /@@       @@@//@@@@@@ //@@@@@@  @@@@@@@@ /@@
   //       ///  //////   //////  ////////  //

   Copyright (c) 2016, Triad National Security, LLC
   All rights reserved.
                                                                              */
#pragma once

/*! @file */

namespace flecsi {
namespace topology {

// FIXME: user id generator
constexpr size_t global_index_space = 4096;

/*!
  The global_topology_u type allows users to register data on a
  topology with a single index, i.e., there is one instance of
  the registered field type that is visible to all colors.

  @ingroup topology
 */

struct global_topology_t {
  using type_identifier_t = global_topology_t;
}; // struct global_topology_u

} // namespace topology
} // namespace flecsi
