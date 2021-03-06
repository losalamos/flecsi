/*~--------------------------------------------------------------------------~*
 *  @@@@@@@@  @@           @@@@@@   @@@@@@@@ @@
 * /@@/////  /@@          @@////@@ @@////// /@@
 * /@@       /@@  @@@@@  @@    // /@@       /@@
 * /@@@@@@@  /@@ @@///@@/@@       /@@@@@@@@@/@@
 * /@@////   /@@/@@@@@@@/@@       ////////@@/@@
 * /@@       /@@/@@//// //@@    @@       /@@/@@
 * /@@       @@@//@@@@@@ //@@@@@@  @@@@@@@@ /@@
 * //       ///  //////   //////  ////////  //
 *
 * Copyright (c) 2016 Los Alamos National Laboratory, LLC
 * All rights reserved
 *~--------------------------------------------------------------------------~*/

#ifndef flecsi_hpx_scoped_h
#define flecsi_hpx_scoped_h

//----------------------------------------------------------------------------//
// POLICY_NAMESPACE must be defined before including storage_type.h!!!
// Using this approach allows us to have only one storage_type_t
// definintion that can be used by all data policies -> code reuse...
#define POLICY_NAMESPACE hpx
//#include "flecsi/data/storage_type.h"
#undef POLICY_NAMESPACE
//----------------------------------------------------------------------------//

///
/// \file
/// \date Initial file creation: Apr 17, 2016
///

namespace flecsi {
namespace data {
namespace hpx {

///
// FIXME: Scoped storage type.
///
template<>
struct storage_class_u<scoped> {}; // struct storage_class_u

} // namespace hpx
} // namespace data
} // namespace flecsi

#endif // flecsi_hpx_scoped_h

/*~-------------------------------------------------------------------------~-*
 * Formatting options
 * vim: set tabstop=2 shiftwidth=2 expandtab :
 *~-------------------------------------------------------------------------~-*/
